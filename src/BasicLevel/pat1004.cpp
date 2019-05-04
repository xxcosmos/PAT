//
// Created by 张啸宇 on 2019-05-04.
//

#include <iostream>
#include <string>
using namespace std;

typedef struct node{
    string name;
    string id;
}info;
int main()
{
    int n;
    cin>>n;
    info s[n];
    int max = INT32_MIN;
    int min = INT32_MAX;
    int max_index=0;
    int min_index=0;
    int grade;

    for (int i = 0; i < n; ++i) {
        cin>>s[i].name>>s[i].id;
        cin>>grade;
        if(grade>max){
            max= grade;
            max_index = i;
        }
        if(grade<min){
            min=grade;
            min_index=i;
        }
    }
    cout<<s[max_index].name<<" "<<s[max_index].id<<endl;
    cout<<s[min_index].name<<" "<<s[min_index].id<<endl;
    return 0;
}