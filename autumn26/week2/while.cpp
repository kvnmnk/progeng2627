#include <iostream>

int main(){
    int n, q = 0, r, divisor;
    std::cin >> n >> divisor;
    
    while(n > divisor){
        n = n - divisor;
        q = q + 1;
    }
    r = n;

    std::cout << q << " remainder " << r << std::endl;


}
  