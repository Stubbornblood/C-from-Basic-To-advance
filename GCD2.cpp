#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

cout<<"Enter you string here : ";
string str;
getline(cin,str);


int n = str.length();

for(int i = 0; i<n/2 ; i++){
swap(str[i],str[n-i-1]);    
}




cout<<str;


}

