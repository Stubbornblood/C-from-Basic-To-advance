#include<iostream>
#include<string>
using namespace std;

bool isPal(string str){
    int n = str.length();
    for(int i = 0;i<n/2;i++){
        if(str[i]==str[n-i-1]){
            return true;
        }
}
   
        return false;
  
}



int main()
{

  string str;
  cin>>str;
  if(isPal(str)){
    cout<<"String is palidrome";
  }else{
    cout<<"String is not palidrome";
  }
  
}