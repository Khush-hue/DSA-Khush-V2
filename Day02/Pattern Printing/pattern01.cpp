#include<iostream>
using namespace std;

int main()
{
    //Solid pattern printing
    /*
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout<<"*"<<" ";
        }
     cout<<endl;
    }
    */

    //10 patten printing
    /*
    int row, col;

    for (row = 1; row <= 4; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout<<"10"<<" ";
        }
        cout<<endl;
    }
    */

    //number pattern printing-01
    /*
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    */

    //number pattern printing-02
    /*
    int  row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    */

    //number pattern printing-03
    /*
    int  row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 5; col >= 1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    */

    //number pattern printing-04
    /*
    int  row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
    */

    //number pattern printing-05
    /*
    int  row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout<<col*col*col<<" ";
        }
        cout<<endl;
    }
    */

    //alphabet pattern printing-01
    /*
    int  row, col;

    for (row = 1; row <= 5; row++)
    {
        char name = 'a'+row-1;
        for (col = 1; col <= 5; col++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    */

    //alphabet pattern printing-02
    /*
    int  row;

    for (row = 1; row <= 5; row++)
    {
        for (char col = 'a'; col <= 'e'; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    */

    //number pattern printing-06
    int  row, col;
    int count =1;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout<<count<<" ";
            count++;
        }
    cout<<endl;
    }

}