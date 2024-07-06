//
// Created by 16672 on 2024/7/5.
//

/*
 * 素数一定是正数
 * */

#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

int prime(int n){
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }

    return n;
}

int N;
int main(){
    scanf("%d", &N);
    if(prime(N)){
        if(prime(N - 6)){
            printf("Yes\n%d", N - 6);
            return 0;
        }else if(prime(N + 6)){
            printf("Yes\n%d", N + 6);
            return 0;
        }
    }

    printf("No\n");
    while(!prime(N) || (!prime(N - 6) && !prime(N + 6))){
        N++;
    }
    printf("%d",N);
    return 0;

}