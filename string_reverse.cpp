#include <iostream>
#include <string>
using namespace std;
int main() {
   string string,reverse_string;
   cout<<"enter the string to reversal: ";
//    take string including widespaces;
   getline(cin,string);
    for(int i = string.length()-1;i>=0;i--){
       reverse_string +=string[i];
    }

    cout<<reverse_string<<endl;


    return 0;
}
