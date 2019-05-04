//
// Created by 张啸宇 on 2019-05-04.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
using namespace std;
string print(char n){
    if (n=='0'){
        return "ling";
    }
    if (n=='1'){
        return "yi";
    }
    if (n=='2'){
        return "er";
    }
    if (n=='3'){
        return "san";
    }
    if(n=='4')return "si";
    if(n=='5')return "wu";
    if(n=='6')return "liu";
    if(n=='7')return "qi";
    if(n=='8')return "ba";
    if (n=='9')return "jiu";
}
int main(){

    string s;
    cin>>s;
    int num = 0;
    for (int i = 0; i < s.length(); ++i) {
        num+=s[i]-'0';
    }
    string n = to_string(num);
    for (int j = 0; j < n.length(); ++j) {
        cout<<print(n[j]);
        if (j==n.length()-1){
            cout<<endl;
        } else
            cout<<" ";
    }

    return 0;
}
