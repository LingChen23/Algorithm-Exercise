//
// Created by 16672 on 2024/9/14.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>

using namespace std;

int n;
int a[110];
int s1, s2;
int sum;
int main(){
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>a[i];
    }
    cin>>s1>>s2;
    for(int i = s1; i <= s2; i++){
        sum += a[i];
    }

    cout<<sum;
}