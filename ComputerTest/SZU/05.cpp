#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;
int t;
string a;
bool flag = true;

int main(){
    cin >> t;

    while(t --){
        cin>>a;
        for(int i = 0; i < a.length() / 2; i++){
            if(a[i] != a[a.length() - i - 1]){
                cout<<"No"<<endl;
                flag = false;
            }
        }

        if(flag == true){
            cout<<"Yes"<<endl;
        }
        flag = true;

    }

}