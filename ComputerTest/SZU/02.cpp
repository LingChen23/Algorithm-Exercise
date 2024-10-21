#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;
float m;
float n;
string big = "bigger";
string small = "smaller";
string s;

int main(){
    cin>>m>>n;
    cin>>s;

   if(s == big){
       m = n * m;
   }else if(s == small){
       m /= n;
   }

    printf("%.1f", m);
}