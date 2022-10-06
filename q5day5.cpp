#include <iostream>
using namespace std;

void print(int n)
{
    for(int i=1;i<n;i+=2)
    {
            cout<<i<<" ";   
    }
    for(int i=n;i>=2;i--)
    if(i%2==0)
    {
        cout<<i<<" ";
    }
}

int main() {

    int n;
    cin>>n;
    print(n);
    
    return 0;
}