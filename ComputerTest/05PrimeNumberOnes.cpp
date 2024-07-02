//
// Created by 16672 on 2024/7/2.
//

#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i  == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n;

    while (cin >> n){
        bool flag = false;
        for(int i = 2; i < n ;i++){
            //个位为 1
            if((i - 1) % 10 == 0 && prime(i)){
                flag = true;
                printf("%d ", i);
            }
        }

        if(!flag){
            printf("-1");
        }

        printf("\n");
    }

    return 0;
}
