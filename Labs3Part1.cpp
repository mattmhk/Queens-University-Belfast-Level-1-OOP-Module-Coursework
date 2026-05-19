#include <iostream>
#include <iomanip>
using namespace std;

float calculateSessionCost(float room, float catering, float honorarium, float travel);
bool isWithinLimit(float sessionCost, float sessionLimit);
void manageConference(int numberOfSessions, float overallBudget, float sessionLimit);

int main() {
    int numberOfSessions;
    float overallBudget;
    float sessionLimit;

    cout << fixed << setprecision(2);

    cout << "Enter the number of sessions: ";
    cin >> numberOfSessions;

    cout << "Enter the overall conference budget: ";
    cin >> overallBudget;

    cout << "Enter the per-session cost limit: ";
    cin >> sessionLimit;

    manageConference(numberOfSessions, overallBudget, sessionLimit);
}

float calculateSessionCost(float room, float catering, float honorarium, float travel) {
    return room + catering + honorarium + travel;
}

bool isWithinLimit(float sessionCost, float sessionLimit) {
    return sessionCost <= sessionLimit;
}

void manageConference(int numberOfSessions, float overallBudget, float sessionLimit) {
    float totalSpent = 0;
    int withinLimitCount = 0;
    int exceededLimitCount = 0;

    for (int i = 1; i <= numberOfSessions; i++) {
        float room, catering, honorarium, travel;

        cout << "\nSession " << i << endl;

        cout << "Enter room cost: ";
        cin >> room;

        cout << "Enter catering cost: ";
        cin >> catering;

        cout << "Enter honorarium cost: ";
        cin >> honorarium;

        cout << "Enter travel cost: ";
        cin >> travel;

        float sessionCost = calculateSessionCost(room, catering, honorarium, travel);

        totalSpent += sessionCost;

        cout << "Total cost for session " << i << ": " << sessionCost << endl;

        if (isWithinLimit(sessionCost, sessionLimit)) {
            cout << "This session stayed within the limit." << endl;
            withinLimitCount++;
        } else {
            cout << "This session exceeded the limit." << endl;
            exceededLimitCount++;
        }
    }

    cout << "\nConference Summary" << endl;
    cout << "Total amount spent: " << totalSpent << endl;
    cout << "Sessions within limit: " << withinLimitCount << endl;
    cout << "Sessions exceeded limit: " << exceededLimitCount << endl;

    if (totalSpent <= overallBudget) {
        cout << "The conference stayed within the overall budget." << endl;
    } else {
        cout << "The conference exceeded the overall budget." << endl;
    }
}