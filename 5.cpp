#include<iostream>
#include<typeinfo>
using namespace std;

class emp{
    int id;
    string name;
public:
    emp(int i, string n)
    {
        id=i;
        name=n;
    }
    virtual void display()
    {
        cout<<id<<name;
    }
};
class Man : public emp{  //inhe
    protected : 
        int sal;
        
    public :
        Man(int id, string name, int sal) : emp(id, name){
            this->sal = sal;
        }
        void display(){    // overriding
            emp:: display();
            cout<<"  "<<sal<<endl;
        }
        void manTask(){
            cout<<"Man Task"<<endl;
        }
};


int main()
{
    int id, sal;
    string name;
    emp *emps[20];
    int count=0;
    int ch;

    do
    {
        cout<<"choice ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            {
                cout<<" Emp ";
                cin>>id>>name;
                emps[count++]=new emp(id,name);
            }
            break;
        case 2:
            {
                cout<<" mgr ";
                cin>>id>>name>>sal;
                emps[count++] = new Man(id,name,sal);
                
            }
            break;
        case 3:
            {
                for (int i = 0; i < count; i++)
                {
                    emps[i]->display();
                }
                
                
            }
            break;
        case 4:
            {
                for (int i = 0; i < count; i++)
                {
                    if(typeid(*emps[i])==typeid(emp))
                    {
                        emp *e = dynamic_cast<emp*>(emps[i]);
                        e->display();

                    }
                    if(typeid(Man)==typeid(*emps[i]))
                    {
                        Man *m = dynamic_cast<Man*>(emps[i]);
                        m->manTask();
                    }
                }
                
                
            }
            break;
        
        default:
            break;
        }


    } while (0!=ch);
    

    return 0;
}