#include <iostream>
using namespace std;

int main()


    //Finding the largest and second Largest number
    int arr[5] = {12, 35, 2, 33, 7};

    int largest = -1;
    int second_largest = -1;

    //finding the largest number
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
    }

    //finding the second largest elements
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>second_largest && arr[i]!=largest)
        {

            second_largest = max(second_largest, arr[i]);
            // second_largest = arr[i];

        }
    }
    cout<<second_largest<<endl;
}