#include<iostream>

using namespace std;

int main()
{
    int a,flag=0;
    cin>>a;


    for(int i=a+1;i<a;i++){
        if(i%a==0){
            flag=1;
            break;
        }
    }

    if(flag==1) cout<<"Non Prime";
    else cout<<"Prime";

    return 0;
}
