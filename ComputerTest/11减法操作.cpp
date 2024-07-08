//
// Created by 16672 on 2024/7/8.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

#define ll long long

using namespace std;

ll prime(ll n){
    for(long long i = 3; i <= sqrt(n); i+=2){
        if(n % i == 0 && prime(i)){
            return i;
        }
    }

    return n;
}

ll n, d;
ll count;

int main(){
    scanf("%lld", &n);
    if(n % 2 == 0){
        count = n / 2;
    }else{
        d = prime(n);
        n -= d;
        count = n / 2 + 1;
    }


    printf("%lld", count);

    return 0;
}
