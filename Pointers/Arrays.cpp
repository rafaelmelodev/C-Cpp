#include <stdio.h>
#include <iostream>

using namespace std; 

// Driver program 
int main() 
{ 
    // Declare an array 
    int v[3] = {10, 100, 200}; 
    int nums[2][3]  =  { {16, 18, 20}, {25, 26, 27} };
  
    // Declare pointer variable 
    int *ptr; 
  
    // Assign the address of v[0] to ptr 
    ptr = v; 
  
    for (int i = 0; i < 3; i++) 
    { 
        printf("Value of *ptr = %d\n", *ptr); 
        printf("Value of ptr = %p\n\n", ptr); 
  
        // Increment pointer ptr by 1 
        ptr++; 
    } 

    ptr = v;

    cout << "Elements of the array v are: "; 
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];

    cout << "\nElements of the array nums are: "; 
    cout << *(*(nums)) << " " << *(*(nums)+1) << " " << *(*(nums)+2) << "\n" << *(*(nums+1)) << " " << *(*(nums+1)+1) << " " << *(*(nums+1)+2);
} 