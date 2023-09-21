//static member function
#include<iostream>
using namespace std;
class Test
{
        static int count;//sttic data member 
        int temp;//non static data member
    public:
        Test()
        {
            this->temp=0;
        }
        //non static member function
        void print()
        {
            cout<<"count="<<++count<<endl;
            cout<<"temp="<<++temp<<endl;
        }

        //static member function
        void display()
        {
            //print(); //Not allowed
            cout<<"count="<<Test::count<<endl;
            //cout<<"temp="<<temp<<endl; //not allowed
           // Test::hello();
        }
        //static member function
        static void hello()
        {
            cout<<"Hello Sunbeam...!"<<endl;
        }
        
};
int Test::count=0;

int main()
{
    Test t1;
    t1.print();//to call static member function of a class you 
    t1.display();                   //do not require to create the obj of a class
}