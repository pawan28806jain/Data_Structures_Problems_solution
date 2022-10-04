#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

const int N = 1e3+10;
int t[N][N];

int knapsack(int weight[],int value[],int n,int cap){
    if(cap == 0 || n==0){
        return 0;
    }
    int ans = 0;
    if(weight[n-1]<=cap){
        ans = max(value[n-1] + knapsack(weight,value,n-1,cap-weight[n-1]) , knapsack(weight,value,n-1,cap));

    }
    else{
        ans = knapsack(weight,value,n-1,cap);
    }
    return ans;
}

int main()
{
    int weight[] = {1,2,4,5};
    int value[] = {1,3,5,7};
    int n = 4;
    int bag = 10;
    cout<<knapsack(weight, value, n,bag);
}