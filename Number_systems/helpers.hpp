/*
Author: Tyrel Cadogan
Email: shaqc777@yahoo.com
Lab 2: Software systems 2007
*/

#include <iostream>

int sumto(int value){
    if(value<=0) return 0;
    else if (value == 1 ) return 1;
    else return sumto(value-1) + value;
}

int pow(int a, int b){
    if(b == 0) return 1;
    else if (b == 1) return a;
    else return pow(a, b-1)*a;
}

int  decToBaseBelowTen(int input, int base){
    /*
    Convert a Decimal number to any base bellow 10 i.e 2 to 9 
    */
    int i = 0, sum = 0;
    while(input != 0){  
        sum = sum + (pow(10,i)*(input%base));
        input = input/base;
        i = i+1;
    }
    return sum;
} 

// Displays the both signed version of a unsighned binary number
void signedBin(std::string input){
    std::string neg = "1", pos = "0";
    std::cout<< "Positive: ";
    std::cout<< neg + input<< std::endl;
    std::cout<< "negative: ";
    std::cout<< pos + input<< std::endl;
}
