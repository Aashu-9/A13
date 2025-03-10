//constructer
#include<iostream>
using namespace std;
class point
{
    private:
    int x,y;
    public:
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    int getx()
    {return x;}
    int gety()
    {return y;}

};
int main()
{
    point p1(5,6);
 cout<<"p1.x="<<p1.getx()<<",p1.y="<<p1.gety();
 return 0;
 
}