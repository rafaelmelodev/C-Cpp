//Test CESAR: Odd Ocurrences in Array
#include <iostream>
#include <vector>
#include <gtest/gtest>

using namespace std;

int OddOcurrences(vector<int> &A) {
     // write your code in C++14 (g++ 6.2.0)
    int res = 0, size = (int)A.size();

    // We just need to verify the unpaired number
    for(int i = 0; i < size; i++) {
        //A ^ A = 0, A 
        res ^= A[i];
    }
    
    return res;
}

int main ()
{
    auto il = {9, 3, 9, 3, 9, 7, 9};
    vector<int> A(il);

    cout << (7^9) <<endl;
  
    return 0;
}


