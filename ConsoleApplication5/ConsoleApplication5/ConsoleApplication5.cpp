#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть кількість чисел n: ";
    cin >> n;

    vector<long long> a(n);
    cout << "Введіть масив чисел: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool possible = true;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1] - 1) {
            possible = false;
            break;
        }
        if (a[i] == a[i - 1] - 1)
            a[i]++;
    }

    if (possible)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}