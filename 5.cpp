// copy construct
#include<iostream>
using namespace std;
class sample
{
    int id;
    public:
    void init (int x)
    {
        id = x;
    }
    void display ()
    {
        cout<<"id = "<<id<<endl;
    }
};
int main()
{
    sample obj1,obj2;
    obj1.init(10);
    obj1.display();
   obj2=obj1;
   obj2.display();
   return 0;
}