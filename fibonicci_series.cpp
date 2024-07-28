#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    if (n <= 0) {
        cout << "Number of terms must be greater than zero." << endl;
        return;
    }
    
    long long first = 0, second = 1, next;

    cout << "Fibonacci series up to " << n << " terms:" << endl;

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << first << ", ";
            continue;
        }
        if (i == 2) {
            cout << second << ", ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        cout << next << (i < n ? ", " : "\n");
    }
}

int main() {
    int num;
    cout << "Enter the number of terms for Fibonacci Series: ";
    cin >> num;
    
    generateFibonacci(num);
    
    return 0;
}
