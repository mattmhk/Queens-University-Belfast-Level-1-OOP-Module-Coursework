#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    int Studentid;
    string Studentname;
    float assessment1;
    float assessment2;
    float assessment3;

public:
    Student(int Studentid, string Studentname, float a1, float a2, float a3) {
        this->Studentid = Studentid;
        this->Studentname = Studentname;
        this->assessment1 = a1;
        this->assessment2 = a2;
        this->assessment3 = a3;
    }

    // Getters
    int getStudentid() {
        return Studentid;
    }

    string getStudentname() {
        return Studentname;
    }

    float getAssessment1() {
        return assessment1;
    }

    float getAssessment2() {
        return assessment2;
    }

    float getAssessment3() {
        return assessment3;
    }

    // Setters
    void setStudentid(int Studentid) {
        this->Studentid = Studentid;
    }

    void setStudentname(string Studentname) {
        this->Studentname = Studentname;
    }

    void setAssessment1(float a1) {
        assessment1 = a1;
    }

    void setAssessment2(float a2) {
        assessment2 = a2;
    }

    void setAssessment3(float a3) {
        assessment3 = a3;
    }

    float calculateAverage() {
        return (assessment1 + assessment2 + assessment3) / 3;
    }

    float calculateHighest() {
        return max(assessment1, max(assessment2, assessment3));
    }

    float calculateLowest() {
        return min(assessment1, min(assessment2, assessment3));
    }

    string passcheck() {
        float average = calculateAverage();

        if (average >= 40) {
            return "Pass";
        } else {
            return "Fail";
        }
    }

    void displayResult() {
        cout << "Student ID: " << Studentid << endl;
        cout << "Student Name: " << Studentname << endl;
        cout << "Assessment 1: " << assessment1 << endl;
        cout << "Assessment 2: " << assessment2 << endl;
        cout << "Assessment 3: " << assessment3 << endl;
        cout << "Average Score: " << calculateAverage() << endl;
        cout << "Highest Score: " << calculateHighest() << endl;
        cout << "Lowest Score: " << calculateLowest() << endl;
        cout << "Result: " << passcheck() << endl;
    }
};

int main() {
    vector<Student> students;

    students.push_back(Student(101, "Aye", 75, 82, 68));
    students.push_back(Student(102, "John", 55, 60, 70));
    students.push_back(Student(103, "Mary", 30, 35, 45));

    for (int i = 0; i < students.size(); i++) {
        cout << "Student " << i + 1 << " Result" << endl;
        students[i].displayResult();
        cout << endl;
    }

    students[0].setAssessment1(90);
    students[0].setAssessment2(85);
    students[0].setAssessment3(80);

    cout << "After updating first student's marks:" << endl;
    students[0].displayResult();

    return 0;
}