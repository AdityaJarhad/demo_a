#include<iostream>

using namespace std;

int main()
{
    int n,r=0;
    cout<<"Enter The No"<<endl;

    cin>>n;

    int q=n;

    while (n!=0)
    {
        int i=n%10;
        r=r*10+i;
        n=n/10;
    }


    if(q==r)
    cout<<"palin"<<endl;
    else
    cout<<"Not"<<endl;
    
}

