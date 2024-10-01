#include<iostream>
using namespace std;

int exp(int x, int y)
{
    int result=1;
    for (int i = 1; i <= y; i++)
    {
       result = result *x;
    }
    cout<<"Exponent Value is : "<<result;
}

int main()
{
    int x, y;
    cout<<"The main value is : ";
    cin>>x;
    cout<<"The exponent Value is : ";
    cin>>y;
    exp(x,y);
    return 0;
}
