#include <iostream>
using namespace std;


    // Getting to know about the size of array we use this ---> sizeof(arr)
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    cout<<sizeof(arr)<<" ";
    */


    //Question from GreekOfGreek
    //Searching the Elements

/*
    //function to implements search operation
    int find_element (int arr[ ], int n, int key)
    {
        // int arr[];
        // int key;
        // int n;
        for (int i = 0; i<n; i++)
        {
            if (arr[i] == key)
            {
                return i;
            }
        //If the key is not found
            return -1;
        }
    }

    //Driver code
    int main()
    {
        int arr[ ] = {1, 12, 13, 14, 40};
        int n = sizeof(arr)/sizeof(arr[0]);
        //using a last elemnts as search elemsts
        int key = 40;
        //calling the function find
        int position = find_element(arr, n, key);
        if (position == -1)
        {
            cout<<"Not Found"<<endl;
        }
        else
        {
            cout<<"found"<<endl;
            position+1;
        }
    }
*/

/*
int main()
{
    int arr[5] = {1, 12, 13, 14, 40};
    int key = 14;
    for(int i=0;i<5;i++)
    {
        if (arr[i] == key)
        {
            cout<<"Found at: "<<i+1<<endl;
            break;
        }
    }
}
*/

int main ()
{
    int arr[5];

    cout<<"Enter the elements of array: ";
    for(int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    cout<<"The array values are: "<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }


    //Searching number at which index they are
    int searching_number;
    cout<<"Enter the number to be searched: ";
    cin>>searching_number;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == searching_number)
        {
            cout<<"The number found at the index: "<< i << endl;
            break;
        }
    }
}




