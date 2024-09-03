#include <bits/stdc++.h>
using namespace std;

int secondSmallest(vector<int>& arr){
    int smallest = arr[0], ssmallest = INT_MAX;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }else if(arr[i] < ssmallest && arr[i] != smallest){
            ssmallest = arr[i];
        }
    }
}

int main()
{
    
    return 0;
}