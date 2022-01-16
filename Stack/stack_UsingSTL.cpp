#include<iostream>
#include<stack>

using namespace std;
int main(){

stack <int> s;
s.push(5);
s.push(6);
s.push(7);
s.push(8);

cout<<"Top element :"<<s.top()<<endl;
s.pop();

cout<<s.size();
s.emplace();
cout<<"Top element :"<<s.top()<<endl;
s.pop();
cout<<"Top element :"<<s.top()<<endl;
s.pop();
cout<<"Top element :"<<s.top()<<endl;
s.pop();

s.pop();
s.pop();
s.swap
cout<<"Top element :"<<s.top()<<endl;
return 0;
}