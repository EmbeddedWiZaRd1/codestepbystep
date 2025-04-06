//Write C++ statements that print the following console output:
/*
\\\\\\\\\\\\\\\\\\\\
|| FEAR THE TREE! ||
//////////////////// */



#include <iostream>

#define SLASH 20

using namespace std;

int main()
{
    for(int i=0;i<SLASH;i++)
    {
        cout<<"\\";
    }
    cout<<"\n";
    cout<<"|| FEAR THE TREE! ||"<<endl;
    for(int i=0;i<SLASH;i++)
    {
        cout<<"\/";
    }
return 0;

}