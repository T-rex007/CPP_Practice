#include <iostream>
#include <exception>

struct MyException : public std::exception {
    const char * what () const throw()
    {
        return "C++ Exception!";
    }
};
struct InvalidArgument : public std::exception{
    const char* what() const throw(){
        return "The number of parameters are not what there supposed to be";
    }
};




int main(int argc, const char* argv[]){
    int a,b, c;
    
    try{
        if(argc != 3){
            throw InvalidArgument();
        }
    }

    catch(...){
        std::cout<<"OOPs";
        return 0; 
    }

    a = std::atoi(argv[1]);
    b = std::atoi(argv[2]);
    try{
        if (a>b){
            throw MyException();
        }
    }
    catch(MyException& e){
        std::cout<< "MyException caught"<<std::endl;
        std::cout<< e.what() << std::endl;
    }
       

    
    return 0;
}