#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class student
{
    int roll_no;
    string name;
    string course;

protected:
    int physics;
    int maths;
    char sports;
    char culAct;
    char beh;

public:
    void setinfo(int r, string n, string c)
    {
        roll_no = r;
        name = n;
        course = c;
    }
    void getinfo()
    {
        cout << "name =  " << name << endl
             << "roll number = " << roll_no << endl
             << "course = " << course << endl;
    }
};

class test : public virtual student
{
public:
    void setmarks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void getmarks()
    {
        cout << "--------marks--------" << endl
             << "physics: " << physics << endl
             << "maths: " << maths << endl;
    }
};
class activities : public virtual student
{
public:
    void setact(char s, char ca, char b)
    {
        sports = s;
        culAct = ca;
        beh = b;
    }
    void getact()
    {
        cout << "-------Activities Grade-----------" << endl
             << "sports: " << sports << endl
             << "cultural activities: " << culAct << endl
             << "Behaviour: " << beh << endl;
    }
};

class result : public test, public activities
{
public:
    void displayResult()
    {
        getinfo();
        getmarks();
        getact();
    }
};
int main()
{
    result vikash;
    vikash.setinfo(2142000294, "vikash sharma", "B.C.A");
    vikash.setmarks(89, 78);
    vikash.setact('A', 'D', 'B');
    vikash.displayResult();
}

/*
for seeing errors
remove virtual keyword from
test class and activities class
*/