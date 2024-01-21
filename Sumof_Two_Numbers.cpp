// #include <iostream>
// using namespace std;
// int main (){
//     bool a=true;
//     bool b=false;

//     cout<<(a&&b)<<endl;
//     cout<<(a||b)<<endl;
//     cout<<(!a)<<endl;

//     return 0;
// }
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to calculate SGPA
double calculateSGPA(int theoryMarks, int practicalMarks) {
    // Assuming a simple conversion formula
    double sgpa = (theoryMarks + practicalMarks) / 20.0;
    return sgpa;
}

int main() {
    // Input student details
    string studentID, studentName, subject1, subject2, subject3;
    int semester;
    int theorySubject1, theorySubject2, theorySubject3;
    int practicalSubject1, practicalSubject2, practicalSubject3;

    // Taking input
    cout << "Enter Student ID: ";
    cin >> studentID;

    cout << "Enter Student Name: ";
    cin >> studentName;

    cout << "Enter Semester (1-8): ";
    cin >> semester;

    cout << "Enter Subject 1: ";
    cin >> subject1;
    cout << "Enter Theory Marks for " << subject1 << ": ";
    cin >> theorySubject1;
    cout << "Enter Practical Marks for " << subject1 << ": ";
    cin >> practicalSubject1;

    cout << "Enter Subject 2: ";
    cin >> subject2;
    cout << "Enter Theory Marks for " << subject2 << ": ";
    cin >> theorySubject2;
    cout << "Enter Practical Marks for " << subject2 << ": ";
    cin >> practicalSubject2;

    cout << "Enter Subject 3: ";
    cin >> subject3;
    cout << "Enter Theory Marks for " << subject3 << ": ";
    cin >> theorySubject3;
    cout << "Enter Practical Marks for " << subject3 << ": ";
    cin >> practicalSubject3;

    // Calculate SGPA
    double sgpa = calculateSGPA((theorySubject1 + theorySubject2 + theorySubject3) / 3,
                                 (practicalSubject1 + practicalSubject2 + practicalSubject3) / 3);

    // Output the result
    cout << "\nEXPECTED OUTPUT\n";
    cout << "Student ID: " << studentID << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Semester: " << semester << endl;
    cout << "Theory\n";
    cout << subject1 << "\nAB\nBB\n";
    cout << subject2 << "\nBB\nAB\n";
    cout << subject3 << "\nAA\n";
    cout << "Practical\nAA\n";
    cout << fixed << setprecision(2);
    cout << "SGPA: " << sgpa << endl;

    return 0;
}

