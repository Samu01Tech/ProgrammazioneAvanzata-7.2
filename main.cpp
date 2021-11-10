#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vi;
    vi.push_back(11);
    vi.push_back(22);
    vi.push_back(33);

    for(auto iter = vi.begin(); iter != vi.end(); ++iter){
        cout << *iter << endl;
    }

    cout << endl;

    for(auto riter = vi.rbegin(); riter != vi.rend(); ++riter){
        cout << *riter << endl;
    }

    cout << endl;

    for (auto& it : vi){
        cout << it << endl;
    }

    cout << endl;

    reverse(vi.begin(), vi.end());

    for (auto& it : vi){
        cout << it << endl;
    }
  return 0;
} 