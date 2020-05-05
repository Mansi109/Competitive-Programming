#include <bits/stdc++.h>
using namespace std;

int findElement(vector<int> a, int n, int k) 
{

    sort(a.begin(),a.end());

    int i = 0;
    while (i < n)
    {
        int j, count = 1;
        for (j = i + 1; j < n && a[j] == a[i]; j++)
            count++;

        if (count == k)
            return a[i];

        i = j;
    }

    return -1;
}

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a;
        int i,temp;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            a.push_back(temp);
        }
        cout <<findElement(a, n, k);
        cout<<endl;
    }

    return 0;
}
