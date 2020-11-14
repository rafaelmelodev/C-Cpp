#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> &A, int K) {

    // If vector is empty, return an empty vector
    if (A.size() == 0) {
        return {};    
    }
    
    for (int i = 0; i < K; i++) {
        A.insert(A.begin(), A.back());
        A.pop_back();
    }
    
    return A;
}

int main(){

    auto il1 = {2,3,5,6,7};
    vector<int> A(il1), result;
    int K = 4;

    cout << "Before rotating: " ;
    for (int i = 0; i < A.size(); ++i)
        cout << A[i] << " ";

    result = solution(A, K);

    cout << "\nAfter rotating " << K << " times: ";
    for (int i = 0; i < result.size(); ++i)
        cout << result[i] << " ";

    return 0;
}