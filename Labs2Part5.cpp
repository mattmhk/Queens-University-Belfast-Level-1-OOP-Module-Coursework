#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    float english;
    float math;
    float science;
    float total;
    float average;
    char grade;
};

char calculateGrade(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int studentCount;
    int gradeCount[] = {0, 0, 0, 0, 0};

    cout << "Enter the number of students: ";
    cin >> studentCount;

    vector<Student> students(studentCount);

    for (int i = 0; i < studentCount; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> students[i].name;

        cout << "Enter the grade of student " << i + 1 << " for English: ";
        cin >> students[i].english;

        cout << "Enter the grade of student " << i + 1 << " for Math: ";
        cin >> students[i].math;

        cout << "Enter the grade of student " << i + 1 << " for Science: ";
        cin >> students[i].science;

        students[i].total = students[i].english + students[i].math + students[i].science;
        students[i].average = students[i].total / 3;
        students[i].grade = calculateGrade(students[i].average);

        if (students[i].grade == 'A') {
            gradeCount[0]++;
        } else if (students[i].grade == 'B') {
            gradeCount[1]++;
        } else if (students[i].grade == 'C') {
            gradeCount[2]++;
        } else if (students[i].grade == 'D') {
            gradeCount[3]++;
        } else {
            gradeCount[4]++;
        }
    }

    cout << "\nStudent Results:\n";
    cout << left << setw(15) << "Name"
         << setw(10) << "Total"
         << setw(10) << "Average"
         << setw(10) << "Grade" << endl;

    for (int i = 0; i < studentCount; i++) {
        cout << left << setw(15) << students[i].name
             << setw(10) << students[i].total
             << setw(10) << fixed << setprecision(2) << students[i].average
             << setw(10) << students[i].grade << endl;
    }

    cout << "\nGrade Distribution:" << endl;
    cout << "A: " << gradeCount[0] << endl;
    cout << "B: " << gradeCount[1] << endl;
    cout << "C: " << gradeCount[2] << endl;
    cout << "D: " << gradeCount[3] << endl;
    cout << "F: " << gradeCount[4] << endl;

    cout << "\nTop Performers:" << endl;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].average >= 95) {
            cout << students[i].name
                 << " with total grade " << students[i].total
                 << " and average grade " << students[i].average << endl;
        }
    }

    return 0;
}