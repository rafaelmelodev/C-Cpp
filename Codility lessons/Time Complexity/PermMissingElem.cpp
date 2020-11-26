//Perm Missing Element 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int PermMissingElem(vector<int> &A) {
    int size = A.size();

    sort(A.begin(), A.end());

    // We just need to verify the unpaired number
    for(int i = 0; i < size; i++) {
        
        if (A[i] != (i + 1))
        {
            return (i+1);
        }
        
    }

    return size + 1;
}

int main ()
{
    vector<int> A = {2, 3, 1, 5};

    cout << PermMissingElem(A) <<endl;
  
    return 0;
}


