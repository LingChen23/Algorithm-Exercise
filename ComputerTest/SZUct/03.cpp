//
// Created by 16672 on 2024/9/14.
//
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>

using namespace std;

int n;
string s[100010];
int sum[4];

int main(){
    string s1 = "Li";
    string s2 = "Zhang";
    string s3 = "Fu";

    cin>>n;

    for(int i =1; i<= n; i++){
        cin>>s[i];
    }

    for(int i = 1; i <= n; i++){
        if(s[i] == "Li"){
            sum[1] += 1;
        } else if(s[i] == "Zhang"){
            sum[2] += 1;
        }else if(s[i] == "Fu") {
            sum[3] += 1;
        }
    }


        cout<<"Li:"<<sum[1]<<endl;
        cout<<"Zhang:"<<sum[2]<<endl;
        cout<<"Fu:"<<sum[3]<<endl;


}