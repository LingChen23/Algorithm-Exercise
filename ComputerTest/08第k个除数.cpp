//
// Created by 16672 on 2024/7/4.
//

#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;

long long n, k;
long long a[100000010];

int main(){
    int count = 1;
    bool flag = false;
    scanf("%lld %lld", &n, &k);

    int q = (int)sqrt(n);
    int t = n % q;
    if(k == 1){
        printf("%d",1);
        return 0;
    }
    a[1] = 1;
    long long i = 2;
    for(; i <= sqrt(n); i++){
        if(n % i == 0){
            a[count + 1] = i;
            count++;
        }
        if(count == k){
            printf("%d",i);
            return 0;
        }
    }
    if(floor(sqrt(n)) * floor(sqrt(n)) == n){
        if(k > count * 2 - 1){
            printf("%d", -1);
            return 0;
        }
    } else if(k > count * 2){
        printf("%d", -1);
        return 0;
    }

    int j = count + 1;
    if(floor(sqrt(n)) * floor(sqrt(n)) == n){
        --j;
    }
    for(long long i = count + 1; i <= k; i++){
        a[i] = n / a[--j];
    }

    printf("%lld", a[k]);
    return 0;
}