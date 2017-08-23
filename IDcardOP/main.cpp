#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    while(cin>>s){
        int length=s.size();
        if(length<=6)
            cout<<s<<endl;
        else
        {
            if(length<=14)
            {
                string tmp1=s.substr(0,6);
                string tmp2=s.substr(6,length-6);
                cout<<tmp1<<" "<<tmp2<<endl;
            }
            else if(length<=18)
            {
                string tmp1=s.substr(0,6);
                string tmp2=s.substr(6,8);
                string tmp3=s.substr(14,length-14);
                cout<<tmp1<<" "<<tmp2<<" "<<tmp3<<endl;
            }
            else{
                cout <<"error"<<endl;
            }
        }
    }
    return 0;
}
