//Test CESAR: Multiply two integers and return the number of bits set.
#include <iostream>
#include <string>
#include <bitset>
#include <stdint.h>

using namespace std;

int mult_binary(int N, int M);

int main ()
{
    int a = 100000000, b = 100000000;

    cout << mult_binary(a, b) <<endl;
  
    return 0;
}


int mult_binary(int N, int M) {

    int res = 0;

    while (M > 0) 
    { 
         // If second number becomes odd, add the first number to result 
         if (M & 1) 
             res = res + N; 
  
         // Double the first number and halve the second number 
         N = N << 1; 
         M = M >> 1; 
     } 

    // Init counters of bits for a multiply result and number of bits set.
    bitset<96> multiply_result(res);
    unsigned int count = 0;

    cout << "The sequence is = " << multiply_result << endl;

    return multiply_result.count();
}
