//
// Created by 16672 on 2024/6/26.
//

/*
 * sqrt(n)的值有问题
 *
 * */
#include <iostream>
#include <stdio.h>
#include <cmath>

int main(){
    int n;
    bool flag = false;
    scanf("%d", &n);
    if(n == 1 || n == 2){
        printf("%d", 2);
        return 0;
    }

//    printf("%d\n", n);
//    printf("%d\n", n / 2);
    //2的倍数
    if(n % 2 == 0){
        n += 1;
    }


    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
          //  printf("%d\n", i);
            flag = true;
        }
    }

    //是素数
    if(flag == false){
        printf("%d", n);
        return 0;
    }

    while(1){
        flag = false;
        n += 2;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                  flag = true;
            }
        }

        if(flag == false){
            printf("%d", n);
            return 0;
        }
    }
}