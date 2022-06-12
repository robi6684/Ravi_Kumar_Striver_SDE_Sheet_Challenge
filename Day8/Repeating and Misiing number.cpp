#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int> res;
    int v1,v2;
    unordered_set<int> s;
    for(int i=0; i<arr.size(); i++)
    {
        if(s.find(arr[i]) == s.end())
            s.insert(arr[i]);
        else
            v2 = arr[i];
    }
    unordered_set<int> s2;
    for(int i=0; i<arr.size(); i++)
        s2.insert(arr[i]);
    for(int i=1; i<=n; i++)
    {
        if(s2.find(i) == s.end())
            v1 = i;
    }
    
	res.first = v1;
    res.second = v2;
    return res;
}
