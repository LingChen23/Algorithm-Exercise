#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;
int t;
float a, b, c;
float s, area;

int main(){
    cin >> t;

    while(t --){
        cin>>a>>b>>c;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("%.2f", area);
        if(t != 0){
            cout << endl;
        }
    }

}