#include<iostream>

using namespace std;

int prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if(a%i==0)
        {
           return 1;
        }
    }
    return 0;
    
}



int main()
{
    int q;
    cout<<"eneter no"<<endl;
    cin>>q;
    if(prime(q))
        cout<<"not prime"<<endl;
    else
        cout<<"prime"<<endl;

    return 0;
}