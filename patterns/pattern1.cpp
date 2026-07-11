#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++) {
            cout << j;
        }
        cout << endl;
    }
    
    return 0;
}

// what do i have to do? . that pattern.. it would take a input. i will have to print lines that much time. and elements on one line should also be input number. i will have to use nested for loop for it, ikuzo!