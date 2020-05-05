#include<bits/stdc++.h>
using namespace std;

int main() {
	//code

	int t,n,d,k,temp;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<int> a;
	    for(int i=0;i<n;i++)
	    {cin>>temp;
	     a.push_back(temp);
	    }
	    cin>>d;
	    while(d!=0)
	    {
	        reverse(a.begin(),a.end());
	        k = a[a.size()-1];
	        a.pop_back();
	        reverse(a.begin(),a.end());
	        a.push_back(k);
	        d--;
	    }

	    for(int i=d;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	    a.clear();
	  }
	return 0;
}
