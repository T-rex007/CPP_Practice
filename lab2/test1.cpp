#include <iostream>
#include <sstream>
#include <string>


int main(){
    //using stringstream 
    int num = 12134;
    std::string s = "1213";
    std::stringstream ss;
    ss<< num;
    s = ss.str();
    std::cout<<s;
    return 0;
}