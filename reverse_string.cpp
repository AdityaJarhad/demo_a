#include<iostream>
#include<string.h>



using namespace std;

int main()
{
    char ch[20],s;
    cout<<"Enter the name"<<endl;
    cin.getline(ch,20);
    cout<<ch<<endl;
    // for (int i = 0; i < strlen(ch); i++)
    // {
    //     cout<<ch[i];
    // }

    cout<<endl;
    int j=strlen(ch)-1;
    for (int i = 0; i < (j); i++)
    {
        s=ch[i];
        ch[i]=ch[j-i];
        ch[j-i]=s;
    }
    // for (int i = 0; i < strlen(ch); i++)
    // {
    //     cout<<ch[i];
    // }
    cout<<ch;

}