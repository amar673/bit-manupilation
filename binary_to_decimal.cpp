#include<bits/stdc++.h>
using namespace std;
// binary function--->>
void bin(int n){
    for(int i=5;i>=0;i--){
        cout<<(( n >> i)& 1); //here i represents the number of bits ; by n &1 we will get the rightmost bit;
    }
    cout<<endl;
}

// binary to decimal number conversion ;
void dec(int a){
    int po=0;// here we use po for 0,1,2,3 ie for 2 power po;
    int sum=0;
    while(a){
        int last=a%10;
        if(last)
        sum+= 1<<po; // power function for 2 powers;
        po++;
        a=a/10;
    }
    cout<< sum;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int c;
    int b;
    cin>>c;
    cin>>b;
    bin(c);
    dec(b);
}
