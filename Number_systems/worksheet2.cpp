#include <iostream>
#include <cstring>
#include <string>

void signedBin(std::string input){
    std::string neg = "1", pos = "0";
    std::cout<< "Positive: ";
    std::cout<< neg + input<< std::endl;
    std::cout<< "negative: ";
    std::cout<< pos + input<< std::endl;
}

int main(){

    char db [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    for(int i = 1; i =i+1; i == 26){
        std::cout<<db[i];
    } 
    std::cout<<db[-9];



    return 0; 
}