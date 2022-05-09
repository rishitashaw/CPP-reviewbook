#include <bits/stdc++.h>

using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    // code here.
    unordered_set<int> sa;
    unordered_set<int> sc;
    vector<int> result;

    for (int i = 0; i < n1; i++)
    {
        sa.insert(A[i]);
    }

    for (int i = 0; i < n3; i++)
    {
        sc.insert(C[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        if (sa.find(B[i]) != sa.end() and sc.find(B[i]) != sc.end())
        {
            result.push_back(B[i]);
        }
    }
    if (result.size() == 0)
    {
        return {-1};
    }

    return result;
}

int main()
{
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> result = commonElements(A, B, C, 6, 5, 8);

    for (auto element : result)
    {
        cout << element << " ";
    }
}