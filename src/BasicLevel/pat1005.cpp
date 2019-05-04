//
// Created by 张啸宇 on 2019-05-04.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[10000];
bool cmp(int a,int b){ return a>b;}

int main(){
    int k,n,flag=0;
    cin>>k;
    vector<int> v(k);
    for (int i = 0; i < k; ++i) {
        cin>>n;
        v[i]=n;
        while (n!=1){
            if(n%2!=0)n=n*3+1;
            n=n/2;
            if(arr[n]==1)break;
            arr[n]=1;
        }
    }
    sort(v.begin(),v.end(),cmp);
    for (int j = 0; j < v.size(); ++j) {
        if (arr[v[j]]==0){
            if(flag==1)
                cout<<" ";
            cout<<v[j];
            flag=1;
        }
    }
    return 0;
}