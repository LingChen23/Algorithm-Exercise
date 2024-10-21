//
// Created by 16672 on 2024/9/14.
//
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>

using namespace std;

int isPrime(int m){
    for(int i = 2; i <= sqrt(m); i++){
        if(m % i == 0){
            return 0;
        }
    }

    return 1;
}

int n;

int main(){
    cin>>n;

    for(int i =2; i <= n; i++){
        if(n % i == 0 && isPrime(i)){
            n /= i;

            cout<<i<<" ";
            i = 1;
        }
    }
}