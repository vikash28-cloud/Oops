#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll_no;
    //student(){}
    student(string s,int r)
    {
        name =s;
        roll_no = r;
       
    }
    virtual void display()=0;    //do nothing function or pure virtual function
};
class AchademicResult :public student
{
    
    public:
    int physics;
    int maths;
    int english;
    AchademicResult(string s,int r,int p,int m,int e):student(s,r)
    {
        physics = p;
        maths = m;
        english = e;
        
    }
    void display()
    {
        cout<<"Academic Result of "<<name<<" "<<"roll number = "<<roll_no<<endl;
        cout<<"physics = "<<physics<<endl
        <<"Mathematics = "<<maths<<endl
        <<"English = "<<english<<endl;
    }
};
class AcitvitiesResult : public student
{
    private:
    char sports;
    char culturalAct;
    char creativity;
    char behaviour;
    public:
    AcitvitiesResult(string s,int r,char sp,char ca,char cr,char beh):student(s,r)
    {
        sports=sp;
        culturalAct= ca;
        creativity =cr;
        behaviour =beh;
        
    }
    void display()
    {
        cout<<"Activities Greades of "<<name<<" "<<"roll number = "<<roll_no<<endl;
        cout<<"Sports = "<<sports<<endl
        <<"Cultural Activities = "<<culturalAct<<endl
        <<"Creativity = "<<creativity<<endl
        <<"Behaviour = "<<behaviour<<endl;

    }

};

int main()
{
    string s = "vikash";
    int r = 1002;
    int physics =56;
    int maths= 85;
    int english= 95;
    char sports = 'A';
    char culAct = 'B';
    char cr = 'A';
    char beh = 'A';

    AchademicResult ob1(s,r,physics,maths,english);
    // ob1.display();

    AcitvitiesResult ob2(s,r,sports,culAct,cr,beh);
    // ob2.display();

    student *ptr[2];     //both pointer are of student class
    ptr[0] = &ob1;
    ptr[1] = &ob2;

    ptr[0]->display();
    ptr[1]->display();

}

// if we dont create the display function for child class then error comes;