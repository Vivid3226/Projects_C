#include <iostream>
#include <string>
#include <iomanip>

    using namespace std;
    string marks(int);
    int point(int);
int main(){
    string StudentId,Studentname,Sub_1,Sub_2,Sub_3,Student_id,grade;
    int Sub_1T,Sub_2T,Sub_3T,Sub_1P,Sub_2P,Sub_3P;
    int Sem;


cout<<"StudentID :";
cin>>Student_id;

cout<<"Student Name : ";
 cin.ignore();
 getline(cin, Studentname);

cout<<"Enter Sem(1-8):" ;
cin>> Sem;

cout<<"Enter Sub_1(In-Short):";
cin>>Sub_1;

cout<<"Enter Sub_2(In-Short):";
cin>>Sub_2;

cout<<"Enter Sub_3(In-Short):";
cin>>Sub_3;

cout<<"THEORY MARKS:"<<endl;

cout<<"Enter Marks of "<<Sub_1<<"(Theory): ";
cin>>Sub_1T;

cout<<"Enter Marks of "<<Sub_2<<"(Theory): ";
cin>>Sub_2T;

cout<<"Enter Marks of "<<Sub_3<<"(Theory): ";
cin>>Sub_3T;

cout<<"PRACTICAL MARKS:"<<endl;
cout<<"Enter Marks of "<<Sub_1<<"(Practical): ";
cin>>Sub_1P;

cout<<"Enter Marks of "<<Sub_2<<"(Practical): ";
cin>>Sub_2P;

cout<<"Enter Marks of "<<Sub_3<<"(Practical): ";
cin>>Sub_3P;



cout<<"***************************RESULT***********************************************";
cout << "StudentID\t" << ":" << Student_id<< endl;
cout << "Student Name :\t" << ":" <<Studentname << endl;
cout << "Sem(1-8):\t" << ":" << Sem<< endl;

cout << right << setw(50) << "Theory   Practical" << endl;
cout << left << setw(35) << "Computer Programming" << marks(Sub_1T) << "\t    " <<marks (Sub_1P) << endl;
cout << left << setw(35) << "Basics of Electronics" << marks(Sub_2T) << "\t    " <<marks(Sub_2P) << endl;
cout << left << setw(35) << "Professional Communication" << marks(Sub_3T) << "\t    " <<marks(Sub_3P) << endl;



   float SGPA = ((2 * point(Sub_1T)) + (2 * point(Sub_2T)) + (1 * point(Sub_3T))) / 5;

    cout << "\nSGPA:" << SGPA << endl; 
    if(SGPA>=10){
        cout<<"Congratulations :)";
    }


    return 0;


}
    string marks(int a)
    {
        string GRADE;
        if(a>=80){
            GRADE="AA";
        }
        else if(a>=73 && a<80){
            GRADE="AB" ;
        }
        else if(a>=66 && a<73){
            GRADE="BB" ;
        }
        else if(a>=60  && a<66){
            GRADE= "BC" ;
        }
        else if(a>=55 && a<60){
            GRADE= "CC" ;
        }
        else if(a>=50 && a<60){
            GRADE="CD";
        }
        else if(a>=45&& a<50){
            GRADE="DD" ;
        }
        else{
            GRADE="FF" ;
        }
        return GRADE;
    }

    int point(int a)
{

    if (a >= 80)
    {
        return 10;
    }
    else if (a >= 73)
    {
        return 9;
    }
    else if (a >= 66)
    {
        return 8;
    }
    else if (a >= 60)
    {
        return 7;
    }
    else if (a >= 55)
    {
        return 6;
    }
    else if (a >= 50)
    {
        return 5;
    }
    else if (a >= 45)
    {
        return 4;
    }
    else
    {
        return 0;
    }
}








