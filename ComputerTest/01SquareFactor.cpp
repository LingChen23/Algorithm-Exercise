//
// Created by 16672 on 2024/6/26.
//


#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int main(){
    bool flag;
    int n;
    while(cin >> n){
        flag = false;
        for(int j = 2; j <= sqrt(n); j++){
            int k = j * j;
            if(n % k == 0){
                flag = true;
                break;
            }
        }
        if(flag == false){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
    }
}
