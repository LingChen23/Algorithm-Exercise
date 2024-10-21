#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;
long long a;
string s;
string ans;

int main(){
    cin >> s;
    cin >> a;
    if(a == 1){
        for(long long i = 0; i < s.length(); i++){
            if(s[i] == 'p'){
                s[i] = 'q';
            }else if(s[i] == 'q'){
                s[i] = 'p';
            }
        }
        cout<<s;

    }else if(a ==2){
        for(long long i = 0; i < s.length(); i++){
            if(s[i] == 'g'){
                s[i] = 'd';
            }
        }
        cout<<s;

    } else if(a == 3){
        int c = 0;

        long long len = 0;
        for(long long i = 0; i < s.length(); i++){


            if(c == 3){
                i += 2;
                c = 0;
            }
            c++;
            s[len] = s[i];
            len++;
        }
        for(long long i = 0; i < len; i++){
            cout<<s[i];
        }
    }

}