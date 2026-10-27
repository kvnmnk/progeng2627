#include <iostream>

int main(){
    int n, c, i;
    std::cin >> n;
    for(i = 1; i < n + 1; i++){
        for(c = 1; c < n + 1; c++){
            std::cout << c * i << "\t";
        }

        std::cout << std::endl;

    }

}