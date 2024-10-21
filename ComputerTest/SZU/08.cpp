#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;
int t;
int a;

int arr[10010][10010];
int main(){
    cin >> t;

    while(t --) {
        cin >> a;
        if(a == 1){
            cout << 1<<endl;
        }else if(a == 2){
            arr[0][0] = 1;
            arr[0][1] = 2;
            arr[1][1] = 3;
            arr[1][0] = 4;
            for(int i = 0; i < a; i++){
                for(int j = 0; j < a; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}