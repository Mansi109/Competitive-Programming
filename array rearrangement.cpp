// Rearrange array such that even positioned are greater than odd

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> a;
	    int i,x;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        a.push_back(x);
	    }
	    sort(a.begin(),a.end());
	    int b[n];
	    int p=0,q=n-1;
	    for(i=0;i<n;i++)
	    {
	        if((i+1)%2==0)
	        b[i]=a[q--];
	        else
	        b[i]=a[p++];
	    }


	    for(i=0;i<n;i++)
	    cout<<b[i]<<" ";
	    cout<<endl;

	}
	return 0;
}
