#include <iostream>
#include <string>

int main(){
    int num = 1, n;
    std::cin >> n;
    for(int i = 1; i < n + 1; i++){
        num = num * i;
    }

    std::cout << n << "! = " << num << std::endl;
}
