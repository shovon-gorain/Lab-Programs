#include <iostream>
using namespace std;

int main()
{
    int n, arr[n];
    cout << "Enter the number of element : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number : ";
        cin >> arr[i];
    }
    cout << "The number you entered are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
