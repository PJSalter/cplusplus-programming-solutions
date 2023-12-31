#include "Number.h"
#include <iostream>
using namespace std;

Number::Number(int number)
{
    num = number;
}

void Number::SetNum(int number)
{
    num = number;
}

int Number::GetNum()
{
    return num;
}

// Implementation of the friend function
ostream &operator<<(ostream &out, const Number &n)
{
    cout << "The value is " << n.num << endl;
    return cout;
}
