#include <iostream>
#include <cmath>

int sop(int x, int n){
    int sum = 0;

    while(n > 0){
        sum = sum + std::pow(x,n);
        n = n - 1;
    }
    return sum;
}

int main(){
    int a,b,output;
    std::cin >> a >> b;
    output = sop(a,b);
    std::cout << output;

}