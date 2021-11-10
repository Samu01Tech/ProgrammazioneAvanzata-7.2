#include <iostream>
#include <vector>
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

  return 0;
} 