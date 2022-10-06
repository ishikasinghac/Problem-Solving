#include <iostream>
using namespace std;
string palindrome(int n)
{   int rev=0;
    while(n!=0)
    {
        int last=n%10;
        n=n/10;
        rev=last+rev*10;
    }
    if(rev==n)
    return "yes";
    else
    return "no";
}

int main() {
    int n;
    cin>>n;
    string ans =palindrome(n);
    cout<<ans;
    return 0;
}