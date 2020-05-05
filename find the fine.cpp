#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,date;
	    cin>>n>>date;
	    vector<int> p;
	    vector<int> c;
	    int i,j,x,y;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        c.push_back(x);
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>y;
	        p.push_back(y);
	    }
	    int fine=0;
	    if(date%2==0)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(c[j]%2!=0)
	            {
	                fine+=p[j];
	            }

	        }
	        cout<<fine<<" ";
	    }
	    else
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(c[j]%2==0)
	            {
	                fine+=p[j];
	            }

	        }
	        cout<<fine<<" ";
	    }
	    cout<<endl;

	}
	return 0;
}
