#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
    int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++){
        res = min(res, arr[i]);
    }
        
    return res;
}

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    int m = 0;

    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
    
        if (i == 0 || abs(t) < abs(m)) {
            m = t;
        }
        else if (abs(t) == abs(m)) {
            m = abs(t);
        }
    }



    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    
    cout << m << endl;

    
}