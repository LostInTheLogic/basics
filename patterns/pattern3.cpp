#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int current_val = 1;


    for(int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout << current_val << " ";
            current_val++;
        }
        cout << endl;
    }
    
    return 0;
}