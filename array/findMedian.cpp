/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void sort(int arr[],int n)
{
 for(int i=0;i<=n-2;i++)
 {
     
     for(int j=i;j<=n-1;j++)
     {
         int min_index=i;
         if(arr[j]<arr[i])
         {
         min_index=j;
         }
         int temp=arr[min_index];
         arr[min_index]=arr[i];
         arr[i]=temp;
     }
 }
}
int main()
{
    int n;
    cin>>n;
    int median_index=((n/2)+1);
    cout<<"median index is"<<median_index<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"before sorting";
    for(int i=0;i<n;i++)
    {
        
        cout<<arr[i]<<" ";
    }
    
    sort(arr,n);
    cout<<"AFter sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        
        cout<<arr[i]<<" ";
    }
    cout<<arr[median_index-1]<<" ";

    return 0;
}