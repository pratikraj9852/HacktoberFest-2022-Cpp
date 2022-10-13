//program to swap two numbers
#include<iostream>
using namespace std;
 
void swap(int &x,int &y){
   //Enter your code here
   x = x ^ y; 
    y = x ^ y; 
    x = x ^ y; 
    
 
}

//Driver Code
int main()
{   
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}
