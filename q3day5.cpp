int multiply(int arr[], int n)
{
    int sl=0;
    int sr=0;
    for(int i=0;i<n;i++)
    {   
        if(i<n/2)
        sl+=arr[i];
        else
        sr+=arr[i];
    }
    return sr*sl;
    // Complete the function
}