#include<iostream>
#include<typeinfo> 
#include"fruit.h"
#include<vector>

using namespace std;
using namespace fruitbas;


int main()
{
    // typedef fruitbas::fruit fruit;
    // typedef fruitbas::mango mango;
    // typedef fruitbas::orange orange;

    //fruit *arr[5];
    fruit obj;

    vector<fruit> a;
    int n=0;//boundray cheking
    int ch=0;
    do
    {
        cout<<"Enter the choice\n1.mango\n2.orange\n3.test\n4.exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            {
                if(n<5)
                {
                    cout<<"Enter the names color weight quantity"<<endl;
                    int wt,q;
                    string name,color;
                    cin>>name>>color>>wt>>q;

                   // arr[n]=new mango(name,color,wt,q); //upcasting

                   a.push_back(mango(name,color,wt,q));
                    n++;
                }
                else
                    cout<<"basket is fUll"<<endl;
                break;
            }
            break;
        case 2:
            {
                if(n<5)
                {
                    cout<<"Enter the names color weight quantity"<<endl;
                    int wt,q;
                    string name,color;
                    cin>>name>>color>>wt>>q;

                    //arr[n]=new orange(name,color,wt,q);

                    a.push_back(orange(name,color,wt,q));
                    n++;
                }
                else
                    cout<<"basket is fUll"<<endl;
                break;
            }
            break;
        case 3:
            {
                // for (int i = 0; i < n;i++)
                // {
                //     arr[i]->test();
                //     //RTTI
                //     if(typeid(*arr[i])==typeid(mango))
                //     {
                //     mango *obj = dynamic_cast<mango*>(arr[i]);
                //     obj->pulp();
                //     obj->quntity();
                //     }
                //     if(typeid(*arr[i])==typeid(orange))
                //     {
                //     orange *obj = dynamic_cast<orange*>(arr[i]);
                //     obj->juice();
                //     obj->quntity();
                //     }

                    
                // }
                  for (fruit obj:a)
                    {
                        obj.test();
                    }
            }
            break;

        default:
            break;
        }

        
    } while (ch<4);


    // for (int i = 0;i<n;i++)
    // {
    //     delete arr[i];
    // }
    
  //delete []arr;



    return 0;
}

