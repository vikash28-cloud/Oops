#include <iostream>
using namespace std;
class bankdeposite
{
    int principle;
    int year;
    float intrestRate;
    float returnValue;

public:
    bankdeposite() {} // default constructor for removing error
    bankdeposite(int, int, float);
    bankdeposite(int, int, int);
    void show();
};

// if the intrest rate is in float like - 0.02,0.4
bankdeposite::bankdeposite(int p, int y, float r)
{
    principle = p;
    year = y;
    intrestRate = r;
    returnValue = principle;
    for (int i = 1; i <= y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

// if the intrest rate is in integer like- 5,6
bankdeposite::bankdeposite(int p, int y, int r)
{
    principle = p;
    year = y;
    intrestRate = float(r) / 100;
    returnValue = principle;

    for (int i = 1; i <= y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

void bankdeposite::show()
{
    cout << "the principle amount was: " << principle << endl
         << "return value after " << year << " years is "
         << returnValue << endl;
}
int main()
{
    bankdeposite o1, o2;

    int p, y;
    int r;
    float R;

    cout << "enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    o1 = bankdeposite(p, y, r);
    o1.show();

    cout << endl
    << "enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    o2 = bankdeposite(p, y, R);
    o2.show();

    return 0;
}