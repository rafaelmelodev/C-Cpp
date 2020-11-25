//Frog Jumps
#include <iostream>

using namespace std;

int FrogJmp(int X, int Y, int D) {
    int count = (Y - X) / D;
    
    return (Y - X) % D == 0 ? count : ++count;
}

int main ()
{
    int A = 10, B = 85, C = 30;

    cout << FrogJmp(A, B, C) <<endl;
  
    return 0;
}