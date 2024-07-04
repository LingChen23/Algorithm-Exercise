//
// Created by 16672 on 2024/7/3.
//

//int 2*10^9

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int prime(int n){
    int count = 0;
    if(n == 1){
        return 1;
    }
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
            if(n % (n / i) == 0 && i * i != n){
                count ++;
            }
        }
    }

    return count;
}

int n;
int a[1010];

int main(){
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", prime(a[i]));
    }


    return 0;
}
