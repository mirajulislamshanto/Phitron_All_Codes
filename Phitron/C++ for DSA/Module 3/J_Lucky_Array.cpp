#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int A[N];

    for(int i =0; i<N;i++) {
        cin >> A[i];
    }

    // Step 1: find minimum element
    int mn = A[0];
    for(int i = 1; i < N; i++) 
    {
        if(A[i] < mn) 
        {
            mn = A[i];
        }
    }

    // Step 2: count frequency of minimum
    int freq = 0;
    for(int i = 0; i < N; i++) 
    {
        if(A[i] == mn) freq++;
    }

    // Step 3: check odd or even
    if(freq % 2 == 1) 
    {
        cout << "Lucky\n";
    } else 
    {
        cout << "Unlucky\n";
    }

    return 0;
}
