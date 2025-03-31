#include <iostream>

using namespace std;


int main()
{
int num,sum;
    num=1;
    sum=0;
    float average=0;
    int count=0;
    while(num!=0)
    {
    cout<<"Integer? ";
    cin>>num;
    if(num%2==0 && num!=0)
    {
        sum=sum+num;
        count++;
    }
    }
    average=(float)sum/count;
    cout<<"Average: "<<average<<endl;
    return 0;
}