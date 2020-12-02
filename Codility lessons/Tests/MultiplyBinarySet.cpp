//Test CESAR: Multiply two integers and return the number of bits set.
#include <iostream>
#include <string>
#include <bitset>
#include <stdint.h>

using namespace std;

int mult_binary(int N, int M);

int main ()
{
    long int a = 100000000, b = 100000000;

    cout << mult_binary(a, b) <<endl;
  
    return 0;
}


int mult_binary(int N, int M) {
    unsigned long long int R;

    unsigned long long int A = static_cast<unsigned long long int>(N);
    unsigned long long int B = static_cast<unsigned long long int>(M);

    R = A*B;

    cout << N <<endl;
    cout << M <<endl;
    cout << R << endl;
    cout << sizeof(R) << endl;

    // Init counters of bits for a multiply result and number of bits set.
    bitset<96> multiply_result(R);
    unsigned int count = 0;

    cout << "The sequence is = " << multiply_result << endl;

    return multiply_result.count();
}
