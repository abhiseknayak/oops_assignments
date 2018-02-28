#include<iostream>

using namespace std;

float power(int x,int n)
{
    if(x==0)
        return 0;
    if(n==0)
        return 1;
    else if(n>0)
        return x*power(x,n-1);
    else
        return (1.0/x)*power(x,n+1);
}

int main()
{

    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}
