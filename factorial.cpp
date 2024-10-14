#include <iostream>

using namespace std;

// N! = N * (N - 1)!

int Fact(int N) {
    if (N == 0) {
        return 0;
    } 
    if (N == 1) {
        return 1;
    }

    return N * Fact(N - 1);
}

int main() {
    int N;
    cout << "Enter number: ";
    cin >> N;
    cout << "Factorial N = " << Fact(N) << endl;

}
