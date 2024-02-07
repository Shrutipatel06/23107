#include<iostream>
#include<string>


using namespace std;



string mark(int a) {
    if(a >= 80)
        return "AA";
    else if(a >= 73 && a < 80)
        return "AB";
    else if(a >= 66 && a < 73)
        return "BB";
    else if(a >= 60 && a < 66)
        return "BC";
    else if(a >= 55 && a < 60)
        return "CC";
    else if(a >= 50 && a < 55)
        return "CD";
    else if(a >= 45 && a < 50)
        return "DD";
    else
        return "FF";
}
int Mark(int a)
    {
    if(a >= 80)
        return 10;
    else if(a >= 73 && a < 80)
        return 9;
    else if(a >= 66 && a < 73)
        return 8;
    else if(a >= 60 && a < 66)
        return 7;
    else if(a >= 55 && a < 60)
        return 6;
    else if(a >= 50 && a < 55)
        return 5;
    else if(a >= 45 && a < 50)
        return 4;
    else
        return 0;
}

int main() {
    string studentID, studentName, subject1, subject2, subject3;
    int semester, theoryMarks1, practicalMarks1, theoryMarks2, practicalMarks2, theoryMarks3, practicalMarks3;
    float SGPA;
    cout << "Enter Student ID : ";
    cin >> studentID;

    cout << "Enter Student Name: ";
    cin >> studentName;

    cout << "Enter Semester: ";
    cin >> semester;

    cout << "Enter Subject 1 Name: ";
    cin >> subject1;

    cout << "Enter Theory Marks for Subject 1: ";
    cin >> theoryMarks1;

    cout << "Enter Practical Marks for Subject 1: ";
    cin >> practicalMarks1;

    cout << "Enter Subject 2 Name: ";
    cin >> subject2;

    cout << "Enter Theory Marks for Subject 2: ";
    cin >> theoryMarks2;

    cout << "Enter Practical Marks for Subject 2: ";
    cin >> practicalMarks2;

    cout << "Enter Subject 3 Name: ";
    cin >> subject3;

    cout << "Enter Theory Marks for Subject 3: ";
    cin >> theoryMarks3;

    cout << "Enter Practical Marks for Subject 3: ";
    cin >> practicalMarks3;



    string t1 = mark(theoryMarks1), t2 = mark(theoryMarks2), t3 = mark(theoryMarks3);
    string p1 = mark(practicalMarks1), p2 = mark(practicalMarks2), p3 = mark(practicalMarks3);

    cout << "Student ID   :"<< studentID << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "Semester     : " << semester << endl;

    cout << "\t\t\tTheory\t\tPractical\n";
    cout << subject1 << "\t\t" << t1 << "\t\t" << p1 << "\n";
    cout << subject2 << "\t\t" << t2 << "\t\t" << p2 << "\n";
    cout << subject3 << "\t\t" << t3 << "\t\t" << p3 << "\n";

    SGPA = ((3*Mark(theoryMarks1))+(3*Mark(theoryMarks2))+(3*Mark(theoryMarks3))+
             (3* Mark(practicalMarks1))+(3*Mark(practicalMarks2))+(3*Mark(practicalMarks3)) ) /18;

    cout << "SGPA         :" << SGPA;

    return 0;
}
