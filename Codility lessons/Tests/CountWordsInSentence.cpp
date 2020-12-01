// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int aux = 0, count = 0;
    
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == ' ')
            aux++;    
        
        if (S[i] == '.' || S[i] == '?' || S[i] == '!'){
            
            if(aux >= count){
                count = aux; 
                aux = 0;
            }
        }
    }
    
    return count;
}