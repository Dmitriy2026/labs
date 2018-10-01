#include <iostream>

using namespace std;
using UnaryPredicate = bool(*) (int);
bool is_even (int a)
{
    return a%2 == 0;
}
bool is_positive (int a)
{
    return a>0;
}
void f(int a)
{
    if (is_positive(a))
    {
        cout << "Hello world!" << endl;
    }

}
void f1(int a)
{
    if (is_even(a))
    {
        cout << "Hello world!" << endl;
    }

}
void f2(int a, UnaryPredicate p)
{
    if (p(a))
    {
        cout << "Hello world!" << endl;
    }

}
int main()
{
    f2 (6,is_even);
    f2 (6, is_positive);
    return 0;
}
