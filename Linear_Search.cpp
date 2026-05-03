#include <iostream>
using namespace std;

// Linear Search Function
int linear_search(int A[], int n, int x) {
    int i;

    for(i = 0; i < n; i++) {
        if(A[i] == x) {
            return i;   // if element is found
        }
    }

    return -1;  // if element is not found
}

int main() {
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter value to search: ";
    cin >> x;

    int result = linear_search(A, n, x);

    if(result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
