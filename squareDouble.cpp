#include <iostream>

using namespace std;

double square(double x)
{
    return x*x;
}

void print_square(double x)
{
    cout<<"the square of "<<x<<" is "<<square(x)<<"\n";
}

int main()
{
    double d2 {2.3};
    cout<<d2<<"\n";
    return 0;
}