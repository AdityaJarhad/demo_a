#include<iostream>
#include <typeinfo> 

using namespace std;

namespace fruitbas
{
    class fruit
    {
        private:
        int weight;
        string color,name;
        public:
        fruit()
        {
            
        }

        fruit(string name,string color,int wt)
        {
            this->name=name;
            this->color=color;
            weight=wt;
        }

        virtual void test()=0;
        virtual ~fruit(){}
    };

    class mango:public fruit
    {
        private:
        int q;
        public:
        mango(string name,string color,int wet,int q):fruit(name,color,wet)
        {
            this->q=q;
        }

        void test()
        {
            cout<<"TEst of Mangos"<<endl;
        }

        void pulp()
        {
            cout<<"PULP OF MANGOS"<<endl;
        }

        void quntity()
        {
            cout<<" "<<q<<endl;
        }
        ~mango(){}
    };

    class orange:public fruit
    {
        private:
        int q;
        public:
        orange(string name,string color,int wet,int q):fruit(name,color,wet)
        {
            this->q=q;
        }

        void test()
        {
            cout<<"TEst of Orange2"<<endl;
        }

        void juice()
        {
            cout<<"juice OF Orange"<<endl;
        }

        void quntity()
        {
            cout<<" "<<q<<endl;
        }
        ~orange(){}
    };

}
