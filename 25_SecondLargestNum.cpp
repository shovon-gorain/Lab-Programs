#include <iostream>
using namespace std;

int main()
{
    int a[10] = {8, 2, 4, 6, 8, 9, 2, 45, 1}, l, sl;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] < a[i + 1])
        {
            l = a[i + 1];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] < a[i + 1])
        {
            if (a[i + 1] != l)
            {
                sl = a[i + 1];
            }
        }
    }

    cout<<"Second Largest Number is : "<<sl;
    return 0;
}