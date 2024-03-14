#include <iostream>
#include <vector>

int main (){
    using namespace std;

    vector<int> v = {1, 2, 3, 4, 5};

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ", ";
    }
    cout << "\n";

    for(int e : v){
        cout << e << ", ";
    }
    cout << "\n";

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << ", ";
    }
    cout << "\n";

}