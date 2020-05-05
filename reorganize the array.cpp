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
	    int i,temp;
	    int b[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>temp;
	        a.push_back(temp);
	        b[i]=-1;
	    }

	    for(i=0;i<n;i++)
	    {
	       // for(int j=i+1;j<n&&a[j]==a[i];j++)
	        {
	            if(a[i]!=-1)
	            {
	                b[a[i]]=a[i];
	            }


	       }
	    }
	    for(i=0;i<n;i++)
	    cout<<b[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
