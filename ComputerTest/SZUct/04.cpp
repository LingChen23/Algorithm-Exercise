//
// Created by 16672 on 2024/9/14.
//
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>

using namespace std;

char s[1010];
int n;
int ans;
string ss;
int len;

int fig(char s){
    if(s == '1'){return 1;}
    else if(s == '2'){return 2;}
    else if(s == '3'){return 3;}
    else if(s == '4'){return 4;}
    else if(s == '5'){return 5;}
    else if(s == '6'){return 6;}
    else if(s == '7'){return 7;}
    else if(s == '8'){return 8;}
    else if(s == '9'){return 9;}
    else if(s == 'A'){return 10;}
    else if(s == 'B'){return 11;}
    else if(s == 'C'){return 12;}
    else if(s == 'D'){return 13;}
    else if(s == 'E'){return 14;}
    else if(s == 'F'){return 15;}
}


long change(char s[]){
    long sum = 0;
    for(int i = 1 ; i <= len; i++){
        int t = fig(s[i]);
        sum += t * pow(16, len - i);
    }

    return sum;
}

int main() {
    cin>>n;
    while(n--){
        cin>>ss;
        len = ss.length();
        for(int i = 1; i <= len; i++){
            s[i] = ss[i - 1];
        }
        cout<<change(s)<<endl;

    }
}

