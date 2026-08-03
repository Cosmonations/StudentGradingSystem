#include <iostream>
using namespace std;

int main(){
    string studentName;
    int subjectNum;
    double markSum = 0;
    cout << "========================================" << endl;
    cout << "    ACADEMIC TERM COMPILATION ENGINE"<< endl;
    cout << "========================================" << endl;

    cout << "Enter Student Full Name: ";
    getline(cin, studentName);
    cout << endl;

    cout << "How many sujects did " << studentName << " take this term? ";
    cin >> subjectNum;
    cout << endl;

    for (int i=1; i <= subjectNum; i++)
    {
        double currentMark = -1;
        while (currentMark < 0 || currentMark > 100)
        {
            cout << " -> Enter raw percentage mark for Subject #" << i << " (0-100): ";
            cin >> currentMark;
            if (currentMark < 0 || currentMark > 100) {
                cout << "[ERROR] Invalid mark configuration. Re-enter data." << endl;
            }
        }
        markSum += currentMark;
    }
    cout << endl;

    double termMeanAverage = markSum / subjectNum;
    char finalLetterGrade;
    if (termMeanAverage >= 80)
        finalLetterGrade = 'A';
    else if (termMeanAverage >= 70)
        finalLetterGrade = 'B';
    else if (termMeanAverage >= 60)
        finalLetterGrade = 'C';
    else if (termMeanAverage >= 50)
        finalLetterGrade = 'D';
    else
        finalLetterGrade = 'F';

    cout << "========================================" << endl;
    cout << "    OFFICIAL PERFORMANCE REPORT"<< endl;
    cout << "========================================" << endl;
    cout << "Student Profile: "<< studentName << endl;
    cout << "Total Classes: " << subjectNum << endl;
    cout << "Terminal Mean: " << termMeanAverage << endl;
    cout << "Final Evaluation: Grade[" << finalLetterGrade << "]" << endl;
    
}
