#include <iostream>
#include <vector>

using namespace std;

vector<int> pares(const vector<int>& vec){
    vector<int> saida;

    for(int i : vec){
        if(i%2 == 0){
            saida.push_back(i);
        }
    }
    return saida;
}

int main(){
    vector<int> v1 = {0, 2, 1, 4, 7};
    vector<int> v2 = pares(v1);
    for(int i : v2){
        cout << i << ", ";
    }
    cout << "\n";
}