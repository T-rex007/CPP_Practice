#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
  const char * what () const throw ()
  {
    return "C++ Exception";
  }
};
 
int main()
{
  try
  {
    throw MyException();
  }
  catch(MyException& e)
  {
    std::cout << "MyException caught" << std::endl;
    std::cout << e.what() << std::endl;
	// what() is a public method provided by the exception class
	// Overridden by all child exception classes
	// Returns the cause of an exception
  }
  catch(std::exception& e)
  {
    //Other errors
	  std::cout<< "Other error found" <<std::endl;
  }
}