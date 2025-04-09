/*
 3 2 1
 2 1
 1
 */

#include <iostream>

using namespace std;

int main() {
    int rows;
    cout<<"enter the no of rows : "<<endl;
    cin>>rows;
    for(int i=rows;i>0;i--)
    {
    for(int j=i;j>0;j--)
    {
    cout<<" "<<j;
    }
    cout<<endl;
    }
    return 0;
}