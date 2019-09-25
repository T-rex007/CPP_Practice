#include <iostream>
#include <exception>

float divide(float v1, float v2){
    if(v2 == 0 ){
        throw "Error Division by 0";
    }
    return v1/v2;
}



int main(int argc, char* const argv[]){

    float a = 2;
    float b = 0;
    float z;

    try {
        z = divide(a, b);
        std::cout<< z <<std::endl;
    }
    catch(...){
        std::cout<<"OOOPs something went wrong!"<< std::endl;
    }

    return 0;
}