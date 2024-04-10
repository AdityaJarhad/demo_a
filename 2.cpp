#include<iostream>
#include<fstream>
#include<cstring>
#include<string.h>
#include<typeinfo>
using namespace std;

class emp
{
int id; char name[20];
public:
emp()
{

}
    void accept(int i,char *n)
    {
        id=i;
        strcpy(name,n);
    }
    virtual void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};
// class mgr : public emp
// {
// int sal;
// public:
// mgr()
// {

// }
//     mgr(int i,char *n, int s): emp(i,n) 
//     {
//         sal=s;
//     }
//     void display()
//     {
//         emp::display();
//         cout<<sal<<" "<<endl;
//     }
// };

void wrote(string fname, emp &e1)
{
    ofstream out(fname,ios::app);
    out.write((char*)&e1, sizeof(emp));
    out.close();
}
void readig(string fname)
{
    emp e1;
    ifstream in(fname);
    while(in.read((char*)&e1, sizeof(emp)))
    {
        e1.display();
    }
    in.close();
}

int main()
{
    int idd, ch;
    string fname,n;
    char name[20];
    // emp *emps[20];
    emp e;
    // int count=0;
    cout<<"Ener fname ";
    cin>>fname;

    do
    {
        cout<<"choice ";
        cin>>ch;
        switch (ch)
        {
        case 1:
        {
        cin>>idd>>name;
       // getline(20,name);
            emp e;
            e.accept(idd,name);
        }
            break;
        
        case 2:
        {
            wrote(fname,e);

        }
        break;
        case 3:
        {
            readig(fname);
        }
        break;
        case 4:
        {
            e.display();
        }
    break;
        
        default:
            break;
        }
    } while (0!=ch);
    


    return 0;
}