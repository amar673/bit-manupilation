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


// set the kth bit ;
void set_kth_bit(int bit,int k){
    int mask;
    mask= 1 << k;
    cout<< (bit | mask);
    cout<<endl; 
}
// unset_kth_bite 
void unset_kth_bite(int num,int k)
{
    int mask;
    mask=1<<k;
    cout<< ( num & ~(mask));
    cout<<endl;
}

//toggle the kth bit 
void toggle_kth_bite(int c,int k){
    int mask ;
    mask=1<<k;
    cout<< (c ^ mask);
    cout<<endl;
}

// right_most_setbit examle 10100 ---->> 00100;
void right_most_setbit(int a){
    a= (a & ~(a-1));
    cout<<a<<endl;
}

// no of set bit count;
void no_of_set_bits(int bit){
    int count=0;
    while(bit){
        if(( bit & 1)==1) count++;
        bit=bit>>1;
   }
    cout<< count<< endl;
    cout<<__builtin_popcount(bit);// in built function for no of set bits
    cout<<endl;
        
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int c;
    int k;
    cin>>c;
    cin>>k;
    set_kth_bit(c,k);
    unset_kth_bite(c,2);
    toggle_kth_bite(c,3);
    right_most_setbit(8);
    no_of_set_bits(15);

    int a= 0x5555555;//---> 101010101010101;
    int b= 0xAAAAAAA;// ---> 1010101010101010;
}
