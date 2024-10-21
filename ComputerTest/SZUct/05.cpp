//
// Created by 16672 on 2024/9/14.
//
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>

using namespace std;
int t,m, n;
int a[10010][10010];

int main(){
    cin>>t;
    while(t --){
        cin>>n>>m;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin>>a[i][j];
            }
        }

        for(int i = m; i >= 1; i --){
            for(int j = 1; j <= n; j ++){
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
    }

}
