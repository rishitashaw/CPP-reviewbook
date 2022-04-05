#include <bits/stdc++.h>

using namespace std;
void selectionSort(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int kthSmallest(int arr[], int l, int r, int k)
{
    int n = r + 1;
    selectionSort(arr, n);
    return arr[k - 1];
}

int main()
{
}