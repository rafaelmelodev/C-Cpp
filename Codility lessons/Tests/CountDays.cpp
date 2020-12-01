// you can use includes, for example:
// #include <algorithm>
#include <string>
#include <vector>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

string solution(string &S, int K) {
    // write your code in C++14 (g++ 6.2.0)
    vector<string> Days = {"Mon","Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int size = Days.size(), ind = 0;
    
    for(int i = 0; i < size; i++){
        
        if (Days[i] == S){
            ind = i;
        }
        
    }
    
    return Days[(ind + K) % 7];
    
}