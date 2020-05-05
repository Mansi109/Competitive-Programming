// Rearrange the array
// Given an array of integers, task is to print the array in the order – smallest number, Largest number, 2nd smallest number, 2nd largest number, 3rd smallest number, 3rd largest number and so on..
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
	    int i,temp;
	    vector<int> a;
	    for(i=0;i<n;i++)
	    {
	        cin>>temp;
	        a.push_back(temp);
	    }
	    vector<int> b;
	    for(i=0;i<=n/2;i++)
	    {
	        sort(a.begin(),a.end());
	        b.push_back(a[0]);
	        b.push_back(a[a.size()-1]);
	        a.pop_back();
	        reverse(a.begin(),a.end());
	        a.pop_back();

	    }
	    for(i=0;i<n;i++)
	    cout<<b[i]<<" ";
	    cout<<endl;

	}
	return 0;
}
