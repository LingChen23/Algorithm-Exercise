//
// Created by 16672 on 2024/6/28.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

/**
 * int 2^10
 *
 * 质（素数）因数：
 *      先判断小的质数有多少个
 *      判断自己是不是素数 直接跳出循环
**/

//判断素数
bool prime(int n){
    for(int i = 3; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;   //是质数
}

int main(){
    int n;
    int count;
    while(cin >> n){
        count = 0;
        //2为质数的个数
        while(n % 2 == 0){
            count ++;
            n /= 2;
           // printf("%d\n", n);
        }

        //包括自己
        for(int i = 3; i <= sqrt(n); i += 2){
            //是质因数
            while(n % i == 0){
                if(prime(i)){
                    n /= i;
                    count++;
                    //printf("%d\n", n);
                }

            }
        }
        if(n != 1 && n % 2 != 0 && prime(n)){
            count ++;
        }

        printf("%d\n", count);
    }


    return 0;
}