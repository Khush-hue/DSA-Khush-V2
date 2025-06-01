#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 4, 5, 6};

    //sum of all elements in an array
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
        cout<<sum<<endl;
    }

    //sum of n number
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n<<endl;

    int ans = (n)*(n-1) / 2;
    cout<<ans-sum;
}