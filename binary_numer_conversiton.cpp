#include<bits/stdc++.h>
using namespace std;
// binary function--->>
void bin(int n){
    for(int i=5;i>=0;i--){
        cout<<(( n >> i)& 1); //here i represents the number of bits ; by n &1 we will get the rightmost bit;
    }
}


int main(){
    int c;
    cin>>c;
    bin(c); // Binary function which prints the binary representation of decimal number

}
