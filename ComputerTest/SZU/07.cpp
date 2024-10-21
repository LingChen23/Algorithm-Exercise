#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;
long long t1;
long long t2;
long long a1[1000010], a2[1000010];
long long s[1000100];
long long len;

int main(){
    cin >> t1;
    for(long long i = 0; i < t1; i++){
        cin>>a1[i];
    }

    cin >> t2;
    for(long long i = 0; i < t2; i++){
        cin>>a2[i];
    }

    len = t1 + t2;

    for(long long i = 0; i < t1; i++){
        s[i] = a1[i];
    }

    for(long long i = t1; i < len; i++){
        s[i] = a2[i - t1];
    }

    for(long long i = 0; i < len; i++){
        for(long long j = i + 1; j < len; j++){
            if(s[i] == s[j]){
                s[j] = 0;
            }else if(s[i] < s[j]){
                swap(s[i], s[j]);
            }
        }
    }

    for(long long i = 0; i < len; i++){
        if(s[i] == 0){
            continue;
        }else{
            cout<<s[i]<<" ";
        }
    }

}