#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i,temp;
	    vector<int> a;
	    vector<int> b;
	    for(i=0;i<n;i++)
	    {
	        cin>>temp;
	        if(temp==0)
	        b.push_back(temp);
	        else
	        a.push_back(temp);
	    }
	   a.insert(a.end(), b.begin(), b.end());
	   for(i=0;i<n;i++)
	   cout<<a[i]<<" ";
		 cout<<endl;
	}

	return 0;
}
