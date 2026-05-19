#include <iostream>
using namespace std;

string make_sandwich(string ing1,string ing2){
    return "bread\n"+ing1+"\n"+ing2+"\nbread\n";
}

int main(){
    string sandwich1=make_sandwich("peanut butter","jelly");
    cout << sandwich1;
}