#include<bits/stdc++.h>
using namespace std;

bool isNumberString(const string &s){
  int len = s.size();
  for(int i = 0; i< len; i++){
    if(s[i] < '0' || s[i] > '9')return false;
  }
  return true;
}
void ifValid(){
  cout<<"Your Card is Valid Card"<<endl;
}
void ifInvalid(){
  cout<<"Your Card Number Is Invalid Please Enter Valid Number"<<endl;
}
int main(){
    cout<<"Please Enter your Credit Card Number "<<endl;
    string creditCardNumber;
    cin>>creditCardNumber;

    if(creditCardNumber == "exit")return 0;
    else if(!isNumberString(creditCardNumber)){
      cout<<"Bad Input"<<endl;
    };

    int length = creditCardNumber.size();
    int doubleEvenSum = 0;

    for(int i = length-1; i >= 0; i = i-2){
      doubleEvenSum +=(creditCardNumber[i]-48);
    }

    for(int i = length-2; i >= 0; i = i-2){
      int doubleNum = ((creditCardNumber[i]-48)*2);
      if(doubleNum > 9){
        doubleNum = (doubleNum/10)+(doubleNum%10);
      }
      doubleEvenSum += doubleNum;
    }

    (doubleEvenSum % 10 == 0 ? ifValid() : ifInvalid());
  return 0;
}
