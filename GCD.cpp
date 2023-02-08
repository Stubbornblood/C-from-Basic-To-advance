#include<iostream>
using namespace std;


int gcd(int a,int b){
    if(b==0){
        return a;
    }
    gcd(b,a%b);
}


int LCM(int a,int b){
    return (a*b)/gcd(a,b);
}


int main()
{

 int a, b;
 
 cout<<"Enter element a here : ";
 cin>>a;
 cout<<"Enter element b here : ";
 cin>>b;

 cout<<"LCM IS:"<<LCM(a,b);


}