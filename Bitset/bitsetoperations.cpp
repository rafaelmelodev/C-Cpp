#include <iostream>
#include <bitset>

using namespace std;

int main(){

size_t const n = 4;

bitset<n> bset;
hash<bitset<n>> hash_fun;

for (int i = 0; i < n; i++){

    if (i % 2)
        bset[i] = 1;
    else
        bset[i] = 0;
}

cout << "The sequence is = " << bset << endl;

cout << "The alternate sequence is = " << bset.flip() << endl;

cout << "The number of bit set is = " << bset.count() << endl;

cout << "Decimal representation of " << bset << " = " << bset.to_ullong() << endl;

cout << "Hash function for bset = " << hash_fun(bset) << endl;

return 0;
}