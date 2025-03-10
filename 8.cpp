#include<iostream>
using namespace std; 
class stringg
{
char *p;
public:

void setpointer()
{
    char str1[]="Computer science and design Engineering";
    
    p=str1;
    for(int i=0;*(p+i);i++)
    cout<<*(p+i)<<"\n";

}
};

int main()
{

stringg s; 

s.setpointer(); 
return 0;
}
