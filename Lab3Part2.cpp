#include <iostream>
using namespace std;

bool isTemperatureNormal(float temperature) {
    return temperature >= 36.1 && temperature <= 37.2;
}

bool isPulseNormal(int pulse) {
    return pulse >= 60 && pulse <= 100;
}

bool isRepiratoryRateNormal(int rate) {
    return rate >= 12 && rate <= 20;
}

void evaluatePatientVitals(int patientCount) {
    int flagged = 0;
    for (int i = 1; i <= patientCount; i++) {
        float temperature;
        int pulse, respiratoryRate;

        cout << "\nPatient " << i << endl;

        cout << "Enter temperature (C): ";
        cin >> temperature;

        cout << "Enter pulse (bpm): ";
        cin >> pulse;

        cout << "Enter respiratory rate (breaths/min): ";
        cin >> respiratoryRate;

        bool tempNormal = isTemperatureNormal(temperature);
        bool pulseNormal = isPulseNormal(pulse);
        bool respRateNormal = isRepiratoryRateNormal(respiratoryRate);

        if (tempNormal && pulseNormal && respRateNormal) {
            cout << "All vitals are normal." << endl;
        } else {
            flagged++;
            cout << "Abnormal vitals detected:" << endl;
            if (!tempNormal) {
                cout << "- Temperature is abnormal." << endl;
            }
            if (!pulseNormal) {
                cout << "- Pulse is abnormal." << endl;
            }
            if (!respRateNormal) {
                cout << "- Respiratory rate is abnormal." << endl;
            }
        }
    }
    cout << "\nTotal flagged patients: " << flagged << endl;
}


int main() {
    int patientCount;
    cout << "Enter the number of patients: ";
    cin >> patientCount;

    evaluatePatientVitals(patientCount);
}

