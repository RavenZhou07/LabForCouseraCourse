#include <iostream>
using namespace std;

//check if the input number is a odd prime;
bool is_prime(int n){
    if (n < 2){
        return false;
    }
    //check if the number is even
    if (n % 2 == 0){
        return false;
    }
    //check if it have other divisor
    for(int i = 3; i * i <= n; i ++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    for(int p = 0; p <= 103; p ++){
        if(is_prime(p)){
            for(int x = 0; x < p; x ++){
                //check if x^2 = -1 mod p
                if(((x * x) + 1) % p == 0){
                    cout << "For "<< p << ", it has a solution " << endl;
                    break;
                }
            }
        }
    }  

    return 0;
}