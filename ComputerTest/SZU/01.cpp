#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;
int n;
string s;


int main(){
    cin>>n;

    while (n --){
        cin>>s;
        int len = 0;
        for(int i = 0; i < s.length(); i++){
            for(int j = s.length() - i - 1; i > 0; j--){
                if(s[i] == s[j]){
                    len ++;
                    for(int t = j + 1; t < s.length(); t++){
                        if(s[i + t - j] != s[t]){
                            cout<<s.length();
                            break;
                        }

                        if(t = s.length() - 1){
                            cout<<s.length() - len;
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }
}