#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vi;
    vi.push_back(11);
    vi.push_back(22);
    vi.push_back(33);

    //stampa auto
    for(auto iter = vi.begin(); iter != vi.end(); ++iter){
        cout << *iter << endl;
    }

    cout << endl;

    //stampa auto reverse
    for(auto riter = vi.rbegin(); riter != vi.rend(); ++riter){
        cout << *riter << endl;
    }

    cout << endl;

    // stampa fast
    for (const auto& it : vi){
        cout << it << endl;
    }

    cout << endl;

    //stampa fast reverse + algorithm: reverse()
    reverse(vi.begin(), vi.end());

    for (const auto& it : vi){
        cout << it << endl;
    }

    cout << endl;

    //modifica nell'itteratore (per copia)
    for (auto it : vi){
        it++;
        cout << it << endl;
    }

    cout << endl;

    //range-based loop (for nuovo)
    for (auto item : vi){
        cout << item << endl;
    }

    cout << endl;

    float a[3] = {3.1, 5.8, -0.5};
    for (float i : a){
        cout << i << endl;
    }
  return 0;
} 