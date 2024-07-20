//
// Created by 16672 on 2024/7/18.
//
//int 2*10^9
//a % b == 0 a能被b整除
/*
 * 一个整数无法被[2, a]范围内的任何整数整除
 * b / a ?
 * 不合群数只能在[max(a+1, b-300), b]这个范围中找
 */

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int a, b;
bool flag = false;

int main(){
    scanf("%d %d", &a, &b);

    for(int i = b; i >= a + 1 && i >= b - 300; i--){
        flag = false;
        for(int j = 2; j <= a && j * j <= i; j++){
            if(i % j == 0){
                flag = true;
                break;
            }
        }
        if(flag == false){
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");
    return 0;
}