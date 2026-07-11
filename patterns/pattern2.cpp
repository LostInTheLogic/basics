#include <iostream>
using namespace std;

int main(){
    
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for(int i = 0; i < number; i++) {
        char ch = 'A';
        for (int j = 0; j < number; j++){
            cout << " " << ch;
            ch += 1;
        }
        cout << endl;
    }
    
    return 0;
}

