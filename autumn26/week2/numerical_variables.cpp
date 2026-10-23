#include <iostream>


int main(){
    double height, weight, bmi;

    std::cout << "what is your height" << std::endl;
    std::cin >> height;

    std::cout << "what is your weight" << std::endl;
    std::cin >> weight;

    bmi = height * height / weight;

    std::cout << "your bmi is " << bmi << std::endl;


}
