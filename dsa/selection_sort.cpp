/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>


using namespace std;

void mySwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
   // defining array size
    int size = 5;
    int arr[size];
    int min=0;
    for (int i = 0; i < size; i++) {
        cout << "Enter a number: ";
        cin >> arr[i];
    }
    
    cout<<"the array elements are :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for(int i=0;i<size-2;i++)
    {
        min=i;
        for(int j=i;j<=size-1;j++)
        {
            if(arr[j]<arr[i])
            min=j;
        }
        mySwap(arr[min], arr[i]);
    }
    
       cout<<"the sorted array elements are :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}

