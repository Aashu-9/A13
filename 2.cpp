//find the largest of the following
#include<iostream>
using namespace std;
void swap(int &p, int &q)
{
    int tem;
    tem = p;
    p = q;
    q = tem; 
}
int Flarge(int &x, int &y, int &z)
{
    if(x<y)
    swap(x,y);
    if(x<z)
    swap(x,z);
    return x;
}

int main()
{
    int a,b,c;
    cout<<"Enter the three parameter from which you want to find largest:"<<endl;
    cin>>a>>b>>c;
    int t=Flarge(a,b,c);
    cout<<"The largest number is "<<t<<endl;
    return 0;
}