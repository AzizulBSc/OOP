#include<bits/stdc++.h>
using namespace std;

class sem_fee
{
public:
    string monthName;
    float amount;
    void semInfo_input()
    {
        cout<<"Enter Month Name:";
        cin>>monthName;
        cout<<"Enter Month Taka:";
        cin>>amount;
    }
    void display_semInfo()
    {
        cout<<"Month Name:"<<monthName<<endl;
        cout<<"Taka:"<<amount<<endl;
    }
};
class student: public sem_fee   //Inherited sem_fee from Class sem_fee
{
public:

    clock_t start;
    string name;
    int age ;
    string adrs;
    string ID;
    int marks1,marks2,marks3,marks4,marks5;
    void set_stdInfo();
    void set_marks();
    void display_result();
    void display_stdInfo();
    string grade_point(float marks);
    student();
    ~student();

private:
    string password;

};

//contsructor of student Class
student::student()
{
    start = clock();
    string className1 = "student";
    string className2= "sem_fee";
    cout<<"Class Name1:"<<className1<<endl;
    cout<<"Class Name2:"<<className2<<endl;


}
//destructor
student::~student(){
    clock_t end;
    end = clock();
    cout<<"Duration:"<<(end-start)/1000;
}

void student:: set_stdInfo()
{
    cout<<"Enter Student Name:";
    cin>>name;
    cout<<"Enter Student Age:";
    cin>>age;
    cout<<"Enter Student Address:";
    cin>>adrs;
    cout<<"Enter Student ID:";
    cin>>ID;
    cout<<"Enter Student Password:";
    cin>>password;
}
void student::display_stdInfo()
{
    cout<<"Student Name:";
    cout<<name<<endl;
    cout<<"Student Age:";
    cout<<age<<endl;
    cout<<"Student Address:";
    cout<<adrs<<endl;
    cout<<"Student ID:";
    cout<<ID<<endl;
    cout<<"Student Password:";
    cout<<password<<endl;

}
void student::set_marks()
{
    cout<<"Enter Bangla Marks :";
    cin>>marks1;
    cout<<"Enter English Marks :";
    cin>>marks2;
    cout<<"Enter Math Marks :";
    cin>>marks3;
    cout<<"Enter Arabic Marks :";
    cin>>marks4;
    cout<<"Enter ICT Marks :";
    cin>>marks5;
}
void student::display_result()
{
    cout<<"Bangla       English     Math        Arabic      ICT             TotalMarks          Grade Total"<<endl;
    cout<<grade_point(marks1)<<"     "<<grade_point(marks2)<<"     "<<grade_point(marks3)<<"     "<<grade_point(marks4)<<"     "<<grade_point(marks5)<<"     "<<marks1+marks2+marks3+marks4+marks5<<"            "<<grade_point((marks1+marks2+marks3+marks4+marks5)/5)<<endl;

}

string student::grade_point(float marks)
{
    string grade;
    if(marks>80)
        grade ="A+(5.00)";
    else if(marks>70)
        grade ="A(4.00)";
    else if(marks>60)
        grade ="A-(3.50)";
    else if(marks>50)
        grade ="B(3.00)";
    else if(marks>40)
        grade ="C(2.00)";
    else if(marks>33)
        grade ="D(1.00)";
    return grade;
}


main()
{
    cout<<endl;
    student s1;
    cout<<endl<<"           Enter Student Info"<<endl<<endl;
    s1.set_stdInfo();

    cout<<endl<<"           Enter Student Semester Info"<<endl<<endl;
    s1.semInfo_input();
    cout<<endl<<"           Enter Student Subject Marks"<<endl<<endl;
    s1.set_marks();
    cout<<endl<<"           Student Info"<<endl<<endl;
    s1.display_stdInfo();
    cout<<endl<<"          Student Result"<<endl<<endl;
    s1.display_result();
    cout<<endl<<"          Semester Info"<<endl<<endl;
    s1.display_semInfo();
    cout<<endl;

}
