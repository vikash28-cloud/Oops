#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class base
{
private:
    int id;

public:
    string name;
    base(){}
    base(string n,int i)
    {
        id = i;      //id is not inherited because it is a private member
        name = n;
    }
};

// class {{derived-class name}}: {{visibility-mode}} {{base class name}}

/*
visibility mode:
1. default: visibility mode is private
2. public visibility mode: public members of base class becomes public members of derived class
3. private visiility mode: public members of base class becomes private members of derived class
4. private members of base class never be inherited only public members is inherites

*/

class derived : private base // derived  = derived class, public = visibility modr, base = base classs
{
public:
    int salary;  // extra member of derived class
    // derived(){}
    derived(string n, int s)
    {
        name = n; // inherited member 
        salary = s;
        
    }
    void getdata()
    {
        cout<<name<<endl;
    }
    
};

int main()
{
    derived ob1("vikash", 1000);
    cout<<ob1.salary<<endl;

    cout<<ob1.name<<endl;  
    /*error because name is private member of derived class 
    so it cannot be access directly it can be acess by creating get data function
    */

   ob1.getdata(); //this is correct
    
}