//
// Created by 张啸宇 on 2019-05-04.
//

#include <iostream>
#include <string>

using namespace std;

string fun(string s){
    int cnta = 0;
    int i=0;
    for (; i < s.length()&&s[i]!='P'; ++i) {
        if(s[i]=='A'){
            cnta++;
        } else {
            return "NO";
        }
    }
    if (s[i]!='P')return "NO";
    int cntb=0;
    for (i=i+1;  i<s.length()&&s[i]!='T' ; i++) {
        if (s[i]=='A'){
            cntb++;
        } else{
            return "NO";
        }
    }
    if (s[i]!='T'||cntb==0){
        return "NO";
    }
    int cntc=0;
    for (i=i+1;  i<s.length() ; i++) {
        if (s[i]=='A'){
            cntc++;
        } else{
            return "NO";
        }
    }
    if(cnta==cntc)
        return "YES";
    if (cntc%cnta==0&&cntc/cnta==cntb){
        return "YES";
    }
    return "NO";
}

int main() {

    int n;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        cout<<fun(s)<<endl;

    }
    return 0;
}