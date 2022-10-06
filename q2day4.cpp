#include <iostream>
using namespace std;

void median_mean(int arr[5])
{   int mean=0;
    int median=0;
    for(int i=0;i<5;i++)
    {
    mean+=arr[i];
    }
    cout<<mean/5<<" "<<arr[3];
}

int main() {
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    median_mean(arr);
    return 0;
}