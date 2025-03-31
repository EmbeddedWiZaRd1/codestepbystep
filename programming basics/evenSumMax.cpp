#include <iostream>

using namespace std;

void evenSum(){
    int no_of_integers,num,temp,max;
    int sum=0;temp=0;
    int integer_count=0;
    temp=0;
    cout<<"how many integers? ";
    cin>>no_of_integers;
    for(int i=0;i<no_of_integers;i++)
    {
    cout<<"next integer? ";
    cin>>num;    
    if(num%2==0 && num!=0)
        {
        sum=sum+num;
        if(num>temp)
        {
        max=num;
        temp=num;
        }
        }
    }
    cout<<"even sum = "<<sum<<endl;
    cout<<"even max = "<<max<<endl;
    }
    