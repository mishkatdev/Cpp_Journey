#include <iostream>
#include <vector>
#include<conio.h>
using namespace std;

int main() {
    int numSubjects;

    cout<<"****** CGPA calculator ******"<<endl;
    cout<<"Developed by Mishkat \n \n";
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    vector<float> credits(numSubjects);
    vector<float> gradePoints(numSubjects);

    float totalCredits = 0, weightedSum = 0;

    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter credit hours for subject " << i + 1 << ": ";
        cin >> credits[i];
        cout << "Enter grade points for subject " << i + 1 << ": ";
        cin >> gradePoints[i];

        weightedSum += credits[i] * gradePoints[i];
        totalCredits += credits[i];
    }

    if (totalCredits == 0) {
        cout << "Total credits cannot be zero." << endl;
    } else {
        float cgpa = weightedSum / totalCredits;
        cout << "Your CGPA is: " << cgpa <<"\n"<<endl;
    }

    cout<<"**  Press Enter to exit  **";
    getch();
    return 0;
}
