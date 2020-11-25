//Test CESAR: Odd Ocurrences in Array
#include <iostream>
#include <vector>

using namespace std;

int OddOcurrences(vector<int> &A) {
     // write your code in C++14 (g++ 6.2.0)
    int res = 0, size = (int)A.size();

    // We just need to verify the unpaired number
    for(int i = 0; i < size; i++) {
        res ^= A[i];
        cout << res <<endl;
    }
    
    return res;
}

int main ()
{
    auto il = {9, 3, 9, 3, 9, 7, 9};
    vector<int> A(il);

    cout << OddOcurrences(A) <<endl;
  
    return 0;
}


