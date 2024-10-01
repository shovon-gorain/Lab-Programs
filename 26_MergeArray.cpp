#include <iostream>
using namespace std;

int main()
{
    int a[4] = {4, 2, 3, 1};
    int b[4] = {5, 9, 6, 7};
    int res[8], i = 0, j = 4;

    while (i <= 3)
    {
        res[i] = a[i];
    }
    while (j <= 7)
    {
        res[j] = b[j];
    }

    for (int i = 0; i < 8; i++)
    {
        cout<<a[i]<<endl;
        cout<<b[i]<<endl;
        cout<<res[i]<<" ";
    }
    
    return 0;
}


332
