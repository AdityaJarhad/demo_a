#include<iostream>

using namespace std;

template<class T>
void swap(T &a,T &b)
{
    T t=a;
    a=b;
    b=t;
}


int main()
{
    string s,c;
    cout<<"Enter two names"<<endl;
    cin>>s>>c;
    cout<<s<<" "<<c<<endl;
    swap(s,c);
    cout<<s<<" "<<c;


}