// C++ program to implement Bubble Sort
#include <iostream>
using namespace std;
 

void bubbleSort(int arr[],int size)
{  
         // enter your code here
}


void printArray(int arr[], int n)  // function to print elements of array
{
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{   
    int size;
    cin>>size; //size of array
    int arr[size];
    
    for(int i=0;i<size;i++){
       cin>>arr[i]; // elemnents in the array
    }
   
   bubbleSort(arr,size);
   
   printArray(arr, size);
   return 0;
}
