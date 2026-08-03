#include <iostream>
using namespace std;

int main(){
    string studentName;
    string subject;
    double score;

    cout << "Good Day to you student. I am programmed to tell you your grade after you input your test score" << endl;
    cout << "Name: ";
    getline(cin, studentName);
    cout << "Subject: ";
    getline(cin, subject);
    cout << "Score: ";
    cin >> score;

    if(score >= 80){
        cout << "Hello " << studentName << " your grade in " << subject <<" is A. Amazign work!!!" << endl;
    } else if(score >= 75){
        cout << "Hello " << studentName << " your grade in " << subject <<" is B. Good Job!" << endl;
    } else if(score >= 65){
        cout << "Hello " << studentName << " your grade in " << subject <<" is C. Try Striving higher." << endl;
    } else if(score >= 55){
        cout << "Hello " << studentName << " your grade in " << subject <<" is D. Improvement is expected." << endl;
    } else{
        cout << "Hello " << studentName << " your grade in " << subject <<" is F. Subpar performance." << endl;
    }
}