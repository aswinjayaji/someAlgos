#include<iostream>
#include<vector>

using namespace std;

int main(int argc,char** argv){
    vector<int> g1;
    int argval=atoi(argv[1]);
    for(int i=0;i<argval;i++){
        g1.push_back(i);
    }
    cout<<wctype(g1.end());
    auto i =g1.end();
    cout<<"g1: "<<*i<<endl;

}