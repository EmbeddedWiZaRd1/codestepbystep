/*
#
##
###
####
#####
######
or

 1
 1 2
 1 2 3*/

 #include <iostream>
 using namespace std;
 int main() {
     int rows;
         cout<<"enter the no of rows : "<<endl;
         cin>>rows;  
      for(int i=0;i<rows;i++)
         {
             for(int j=1;j<i;j++)
             {
             cout<<" "<<j;
             }
             cout<<endl;
         }
 
     return 0;
 }