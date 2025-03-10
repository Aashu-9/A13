//string operation
#include<iostream>
#include<string.h>
using namespace std;
class String
{
    public:
    int findlength(char *p);
    void stringcopy(char *p);
    void stringcompare();
    void stringconcat();
    void stringsearch(char* str1, char* substr1);
     
};
   int String::findlength(char *p)
     {
        int count=0;
        while(*p !='\0')
        {
            count++;
            p++;
        }
        cout<<"lenght of the string is:"<<count<<endl; 
     }
     void  String:: stringcopy( char *p)
     {  char str2[100];
        int i;
        for(int i=0;p[i] != '\0'; ++i )
        {
            str2[i]=p[i];
        }
        str2[i]='\0';
        cout<<"Original string is:"<< p <<endl;
        cout<<"Copied string is :"<< str2  <<endl;
     }
     void  String::stringconcat()
    {
        char s1[50],s2[50],i=0,j=0,flag=0;
        int l;
        cout<<"Enter the first string"<<endl;
        gets(s1);
        cout<<"Enter the second string"<<endl;
        gets(s2);
        l=strlen(s1);
        for(i=l; j=0;s2[j]!='\0';i++,j++)
    {
        s1[i]=s2[j];
    }
    cout<<"new string is :"<<s1<<endl;
    }
    void String::stringcompare()
{

    char str1[50],str2[50],i=0,j=0,flag=0;


     fflush(stdin);
     cout<<"-------------------------------";
     cout<<"\n\nEnter first string : ";
     gets(str1);

     cout<<"\nEnter Second string : ";
     gets(str2);

      while(str1[i]!='\0')
      {
        i++;
      }
      while(str2[j]!='\0')
      {
        j++;
      }

     if(i!=j)
     {
        flag=0;
     }
     else
     {
         for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
         {
             if(str1[i]==str2[j])
             {
                flag=1;
             }
         }
     }
     cout<<endl<<"--------------------------------";
     if(flag==0)
     {
        cout<<endl<<"Strings are not equal"<<endl;
     }
     else
     {
        cout<<endl<<"Strings are equal"<<endl;
     }

}
    void String::stringsearch(char *str1, char *substr1)
  {
    int subLength = strlen(substr1);
    int length = strlen(str1);

    for (int i = 0; i <= length - subLength; ++i)
    {
      int j;
      for (j = 0; j < subLength; ++j)
      {
        if (str1[i + j] != substr1[j])
           {
               break;
           }
       }

       if (j == subLength)
        {
           cout << "\n\nSubstring found at position " << i << endl;
           return;
        }
    }

    cout << "\n\nSubstring not found in the original string." << endl;
    }


int main()
{  String obj1;
    char str[20];
    cout<<"Enter a string: ";
    gets(str);
     
     obj1.findlength(str);
    obj1.stringcopy(str);
    obj1.stringcompare();
    obj1.stringconcat();
    obj1.stringsearch("Hello World", "World");
     return 0;
}