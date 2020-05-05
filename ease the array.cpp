#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int l=*a;
    *a=*b;
    *b=l;
}

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
	    int k=-1;
	    for(i=0;i<n;i++)
	    {
	        cin>>temp;
	        a.push_back(temp);
	    }
	   // vector<int> b;
	    for(i=0;i<n;i++)
	    {

	        if(a[i]==a[i+1]&&a[i]!=0)
	        {
	            a[i]*=2;
	            a[i+1]=0;
	        }
	        if(a[i]!=0)
	        {
	            k++;
	            swap(&a[k],&a[i]);
	        }

	    }
	    for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;

	}
	return 0;
}
