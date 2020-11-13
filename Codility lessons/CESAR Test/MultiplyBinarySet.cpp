//Test CESAR: Multiply two integers and return the number of bits set.
#include <iostream>
#include <string>

using namespace std;

int mult_binary(int N, int M);

int main ()
{
  int a = 1, b = 4;

  cout << mult_binary(a, b) <<endl;
  
  return 0;
}


int mult_binary(int N, int M) {
    
    // Init counters of bits for a multiply result and number of bits set.
    int multiply_result = 0, count = 0;
    

    multiply_result = N * M;

    //if N < 2 it means we have the only bit which may be set to 1.
    if (multiply_result < 2) { return 1; }

    /* N % 2 != 0 only in case we have the first bit set to 1.
     
     N % 2 == 0 only in case we have the first bit set to 0.
     
     Division of N by 2 do the same as right shift operation that is move all the bits right to one position, 
     but integer division operation exists in all programming languages when bit shift operations usually have
     low level languages only so division by 2 is more general solution.
     Thus this line means "repeat while the first bit is 0 right shift all the bits to one position.
    */

    while (multiply_result % 2 == 0) { multiply_result /= 2; }
    
    // Repeat while we have 1th bits in the N variable
    while (multiply_result > 1) {
        
        // if the first bit of the N is 1 it means we have a bit set
        if (multiply_result % 2) {
            
            // Increment the counter 
            count++;
        }
        
        // right shift to work with a next bit
        multiply_result /= 2;
    }

    // In case of multiply_result is 1, we need to increment the count to represent the least significant bit
    if (multiply_result) { count++;}

    return count;
}
