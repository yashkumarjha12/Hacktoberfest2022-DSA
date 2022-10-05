#include<bits/stdc++.h>
using namespace std ; 

// this function uses STL liberary 

int main()
{
    vector<int>v ; 
    int n ; 
    cin >> n ; 
   
   for( int i=0 ; i < n ; i++)
   {
    int x ; 
    cin >> x ; 
    v.push_back(x) ; 
   }

   sort(v.begin() , v.end()) ; // predefine function for sort 

   for( int i = 0 ; i < n ; i++)
   {
    cout << v[i] ; 
   }
}

// predefine function without stl 

int main()
{
    int n ; 
    cin >> n ; 

    int arr[n] ; 

    for( int i=0 ; i < n ; i++)
    {
        cin >> arr[i] ; 
    }

    sort(arr,arr+n) ; 

    for( int i = 0 ; i < n ;i++)
    {
        cout << arr[i] ; 
    }
}