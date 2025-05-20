#include <codecvt>
#include <iostream>
using namespace std;

int main()
{
    //Right triangle * pattern printing
    /*
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<"*"<<" ";
        }
    cout<<endl;
    }
    */

    //triangle num. pattern printing
    /*
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<col<<" ";
        }
    cout<<endl;
    }
    */

    //triangle num. pattern printing
    /*
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    */

    //Reverse pattern num
    /*
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
    cout << endl;
    }
    */

    //alphabet pattern printing
    /*
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        char name = 'a'+row-1;
        for (col = 1; col <= row; col++)
        {
            cout<<name<<" ";
        }
        cout << endl;
    }
    */

    int row, col;

    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= 5-(row-1); col++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    // cout<<endl;
    // }

    /*
    for (row = 5; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout<<"*"<<" ";
        }
    cout<<endl;
    }
    */

    for (row = 5; row >= 1; row--)
    {
        for (col = 1; col<=row; col++)
        {
            cout<<col<<" ";
        }
    cout<<endl;
    }

}