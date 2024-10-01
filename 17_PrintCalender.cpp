#include <iostream>
using namespace std;

int main()
{
    int sd, ld;
    cout << "Enter the starting day of calender : ";
    cin >> sd;
    cout << "Enter the last date of calender : ";
    cin >> ld;
    cout << "Sun\tMon\tTue\tWed\tThu\tFri\tSat" << endl;
    for (int j = 1; j < sd; j++)
    {
        cout << "\t";
    }
    int n = 1;
    for (int k = sd; k < ld+sd; k++)
    {
        if (k % 7 == 0)
        {
            cout<<n<<"\t"<<endl;
            n++;
        }
        else{
            cout<<n<<"\t";
            n++;
        }
    }

    return 0;
}