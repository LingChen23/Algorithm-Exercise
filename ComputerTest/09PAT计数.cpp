//
// Created by 16672 on 2024/7/4.
//

#include <stdio.h>
#include <iostream>

using namespace std;

const int mod = 1e9 + 7;
long long count = 0;
long long res = 0;
long long ans = 0;

int main(){

    string str = "";
    cin>>str;

    f9or(auto s : str ){
        if(s == 'P'){
            count++;
        }else if(s == 'A'){
            res+=count;
        } else {
            ans =(ans +res) % mod;
        }
    }

    printf("%lld", ans);
}