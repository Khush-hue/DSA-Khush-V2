#include <iostream>
using namespace std;

int main()
{
    //Multiplication table
    /*
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int i = 1;
    while(i<=10)
    {
        cout<<n<<"x"<<i<<" = "<<n*i<<" "<<endl;
        i++;
    }
    */

    //Even odd
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int i=1;
    while (i<=n)
    {
        if (i%2==0)
        {
            cout<<i<<" Even number"<<endl;

        }
        else
        {
            cout<<i<<" Odd number"<<endl;
        }
        i++;
    }
}