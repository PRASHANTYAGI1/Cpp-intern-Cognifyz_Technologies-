#include<iostream>
#include<string>
#include<ctype.h>
using namespace std ;

bool isPalindrom(const string str){
   string filter;
   for(char c : str){
    if(isalnum(c)){
        filter +=tolower(c); 
    }
   }
       int n = filter.size();
    for (int i = 0; i < n / 2; ++i) {
        if (filter[i] != filter[n - 1 - i]) {
            return false;
        }
    }

    return true;
}


int main()
{
  string str;
  cout<<"enter the word or phrase : "<<endl;
  getline(cin,str);
  
  if(isPalindrom(str)){
    cout<<"given word or phrase is plaindrom ";
  }
  else{
    cout<<"given word or phase is 'NOT ' a palindrom ";
  }
  
return 0 ;
}