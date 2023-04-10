#include <iostream>
using namespace std;

const int N = 1e6 + 10;
int arr[N];

void quicksort(int l, int r) {
    if (l > r) return;
    int x = arr[(l + r + 1) >> 1], i = l - 1, j = r + 1;
    while (i < j) {
        do ++ i; while (arr[i] < x);
        do -- j; while (arr[j] > x);
        if (i < j)
            swap(arr[i], arr[j]);
    }
    quicksort(l, i - 1);
    quicksort(i, r);
}

int main() {
   int n;
   cin >> n;
   
   for (int i = 0; i < n; i ++) cin >> arr[i];
   quicksort(0, n - 1);
   for (int i = 0; i < n; i ++) cout << arr[i] << " ";
   
   return 0;
}
