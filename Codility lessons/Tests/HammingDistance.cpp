#include <iostream>
#include <vector>

using namespace std;

int hammingDistance(vector<int> &a){

int count = 0, count2 = 0;
vector<int> v2, v3;

//Creating alternate vectors
for (int i = 0; i < a.size(); ++i){

    if (i % 2)
        v2.push_back(1);
    else
        v2.push_back(0);

    if (i % 2)
        v3.push_back(0);
    else
        v3.push_back(1);

    count += a.at(i) ^ v2.at(i);
    count2 += a.at(i) ^ v3.at(i);

}

cout << "\nv2 = ";
for (int i = 0; i < v2.size(); ++i){
      cout  << v2.at(i) << " ";
}

cout << "\nv3 = ";
for (int i = 0; i < v3.size(); ++i){
      cout  << v3.at(i) << " ";
}

cout << "\nCount = " << count << endl;
cout << "Count2 = " << count2;

return (count < count2 ? count : count2);
}


int main(){

auto il = {0, 1, 1, 1, 1};
vector<int> v(il);
int result = 0;

//Printing received vector
cout << "v =  ";
for (int i = 0; i < v.size(); ++i){
      cout  << v.at(i) << " ";
}

result = hammingDistance(v);

cout << "\nMin Count = " << result << endl;

return 0;
} 