#include <iostream>
using namespace std;

int transpose(int a[3][3], int b[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, b[3][3];
    cout<<"Before transpose :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    transpose(a, b);
    cout<<"\nAfter transpose :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
