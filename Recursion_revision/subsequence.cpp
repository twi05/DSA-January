#include<iostream>
using namespace std;
void subsequenceRec(string p,string up){
    if(up.empty()){
        cout<<p<<endl;
        return;
    }
    char ch = up.at(0);
    subsequenceRec(p+" ", up.substr(1));
    subsequenceRec(p + ch, up.substr(1));
}


int main(){

    subsequenceRec("","123");

return 0;
}
