//Test CESAR: Multiply two integers and return the number of bits set.
#include <iostream>
#include <string>
#include <bitset>
#include <stdint.h>

using namespace std;

int mult_binary(int N, int M);

int main ()
{
    long int a = 100000, b = 100000;

    cout << mult_binary(a, b) <<endl;
  
    return 0;
}


int mult_binary(int N, int M) {
    long double A;

    A = N*M;

    cout << N <<endl;
    cout << M <<endl;
    cout << A << endl;
    cout << sizeof(A) << endl;

    // Init counters of bits for a multiply result and number of bits set.
    bitset<96> multiply_result(A);
    unsigned int count = 0;

    cout << "The sequence is = " << multiply_result << endl;

    return multiply_result.count();
}
