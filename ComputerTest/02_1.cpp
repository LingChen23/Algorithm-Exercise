//
// Created by 16672 on 2024/6/28.
//

#include<bits/stdc++.h>
using namespace std;
bool prime(int x){
    if(x == 1)
        return 0;
    for(int i = 2;i <= x / i; i++)
        if(x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    cin>>n;
    if(prime(n)){
        cout<<n;
        return 0;
    }
    while(n++){
        if(prime(n)){
            cout<<n;
            return 0;
        }
    }
}

