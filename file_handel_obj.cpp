#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

class emp
{
    private:
     int id;
     char name[20];
     
    public:

        void ad(int i,const char *ch)
        {
            id=i;
            //name=new char[sizeof(ch)+1];
            strcpy(name,ch);
        }
        void disp()
        {
            cout<<"ID:-"<<id<<" Name:-"<<name<<endl;
        }

};

void writeit(string Fname,emp &obj)
{
    ofstream a1;
    a1.open(Fname.c_str(),ios::app|ios::binary);
    a1.write((char*)&obj,sizeof(obj));
    a1.close();
}
void readit(string Fname)
{
    emp obj;
    ifstream q1;
    q1.open(Fname.c_str(),ios::binary);

    // q1.read((char*)&obj,sizeof(obj));
    while (q1.read((char*)&obj,sizeof(obj)))
    {
        obj.disp();
        // q1.read((char*)&obj,sizeof(obj)); !q1.eof()
    }
    q1.close();
    
}




int main()
{
    emp obj;
    obj.ad(101,"ok");
   // obj.disp();
     writeit("pdklkla.txt",obj);
     readit("pdklkla.txt");
}