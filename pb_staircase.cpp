//hacker rank problem solvin:Staircase
#include<bits/stdc++.h>
using namespace std;

// The function accepts INTEGER n as a parameter.
void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print '#' symbols
        for (int k = 1; k <= i; k++) {
            cout << "#";
        }
        cout << endl;
    }
}

int main() {
    int n;
    //cout<<"enter n value:";
    cin >> n;
    staircase(n);
    return 0;
}


