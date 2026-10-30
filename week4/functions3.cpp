#include <iostream>

void int mydiv(int a, int b, int c, int d){
    c = a / b;
    d = a % b;
}

int main(){
    int n1, n2, o1, o2;
    std::cin >> n1 >> n2;
    mydiv(n1, n2, o1, o2);
    std::cout << o1 << o2 << std::endl;
}