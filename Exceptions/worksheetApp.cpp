#include <iostream>

float a, b, r, area;

int main() {
    int x = 0;
    
    while(x != 5){
        try{
            std::cout<<"Square: 1, Rectangle 2, Triangle 3 and  Circle 4"<< std::endl;
            std::cout << "Please enter an integer between 1 and 4 to choose operation and 5 to end program : ";
            std::cin >> x;
            //x = atof(argv[1]);

            switch (x)
            {
                case 1 :
                    std::cout << "Please enter an value of a side: ";
                    std::cin >> a;
                    //a = atof(argv[2]);
                    area = a*a;
                    std::cout << "Area: " << area << std::endl;
                    break; 
                case 2 :
                    std::cout << "Please enter an value of side 1: ";
                    std::cin >> a;
                    std::cout << "Please enter an value of side 2: ";
                    std::cin >> b;
                    //a = atof(argv[2]);
                    //b = atof(argv[3]);
                    area = a*b;
                    std::cout << "Area: " << area << std::endl;
                    break;
                case 3 :
                    std::cout << "Please enter an value of side 1: ";
                    std::cin >> a;
                    std::cout << "Please enter an value of side 2: ";
                    std::cin >> b;
                    //a = atof(argv[2]);
                    //b = atof(argv[3]);
                    area = 0.5*(a*b);
                    std::cout << "Area of Triangle: " << area << std::endl;
                    break;
                case 4 :
                    std::cout << "Please enter an value of radius: "; 
                    std::cin >> r;
                    //r = atof(argv[2]);
                    area = 3.14*r*r;
                    std::cout << "Area of Circle: " << area << std::endl;
                    break;
            }
        }
        catch(...){
            std::cout<< "OOOPS Something went wrong";
        }
    }
    return 0;
} 