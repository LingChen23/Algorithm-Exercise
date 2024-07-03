//
// Created by 16672 on 2024/7/3.
//

#include <stdio.h>
#include <cmath>

bool composite(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return true;
        }
    }

    return false;
}

int main(){
    int length = 0;
    int len = 0;
    int a = 0, b = 0;
    int t = a;
    scanf("%d %d",&a,&b);
    for(int i = a; i <= b; i++){
        if(composite(i)){
            len++;
        }else{
            len = 0;
        }
        if(len > length){
            length = len;
            t = i - length;
        }

    }

    for(int i = 1; i <= length; i++){
        printf("%d ",t + i);
    }

    return 0;
}