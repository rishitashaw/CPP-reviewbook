#include <bits/stdc++.h>

using namespace std;
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    // Your code here
    // return vector with correct order of elements
    vector<int> result;
    int i = 0;
    int j = 0;

    while (i < n and j < m)
    {
        if (arr1[i] == arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            result.push_back(arr2[j]);
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            result.push_back(arr1[i]);
            result.push_back(arr2[j]);
            i++;
            j++;
        }
    }

    if (i < n)
    {
        result.push_back(arr1[i++]);
    }
    if (j < m)
    {
        result.push_back(arr2[j++]);
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int a[] = {1, 2, 3};
    vector<int> result = findUnion(arr, a, 5, 3);
    for (auto idx : result)
    {
        cout << idx << " ";
    }
}