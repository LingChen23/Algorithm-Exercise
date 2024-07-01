//
// Created by 16672 on 2024/6/28.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstring>

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            printf("因数i = %d\n", i);
            return 0;
        }
    }

    return 1;
}

int main(){
    int t;
    int x;
    scanf("%d", &t);    //t组测试数据
    while(t --){
        scanf("%d", &x);
        int x1 = 0;
        int n = 1;
        int n1 = 1; //x后面添加的数
        while(1){
            if(n > 10){ //n = 9
                n = 1;
                if(n1 == 1){
                    x = x * 10 + n1;
                }
                if(n1 >= 1 && n1 < 10){
                    x = x / 10 * 10 + n1;    //x后加数 891 892 893 899 8911
                }
                else if(n1 >= 10 && n1 <= 100){
                    x = x / 10 * 10 + n1;
                }else if(n1 >= 100 && n1 < 1000){
                    x = x /100 * 100 + n1;
                }else if(n1 >= 1000 && n1 < 10000){
                    x = x /1000 * 1000 + n1;
                }

//                else if(n1 >= 10){
//                    n1 = 1;
//                    x = x * 10 + n1;
//                }
                n1 += 1;    //1 - 9
                printf("x = %d\n", x);
            }

            printf("x1 = %d\n", x1);
            x1 = x * 10 + n;
            if(prime(x1)){
                break;
            }else{
                printf("n = %d\n", n);
                n+=2;
            }
        }
        printf("%d\n", x1);
    }
    return 0;
}

