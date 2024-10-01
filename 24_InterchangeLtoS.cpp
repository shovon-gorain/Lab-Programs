#include <iostream>
using namespace std;

void interchangevalue(int a[])
{
    int l = a[0], s = a[0];
    for (int i = 0; i < 6; i++)
    {
        if (a[i] > l)
        {
            l = i;
        }
        if (a[i] < s)
        {
            s = i;
        }
    }
    int temp = a[l];
    a[l] = a[s];
    a[s] = temp;
    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = {2, 3, 5, 4, 1, 6};
    interchangevalue(a);
    return 0;
}
