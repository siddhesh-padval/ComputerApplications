#include<iostream>

int main(){

    int x=1234567;

    std::cout << sizeof(int) << std::endl;

    int rev = x%10;
    x = (x - (x%10))/10;
    std::cout << x << "," << rev << "\n";

   /* rev = rev*10 + x%10;
    x = (x - (x%10))/10;
    std::cout << x << "," << rev << "\n";

    rev = rev*10 + x%10;
    x = (x - (x%10))/10;
    std::cout << x << "," << rev << "\n";

    rev = rev*10 + x%10;
    x = (x - (x%10))/10;
    std::cout << x << "," << rev << "\n";
    */

    while(x!=0){

    rev = rev*10 + x%10;
    x = (x - (x%10))/10;
    std::cout << x << "," << rev << "\n";

    }

    //std::cout << rev<< std::endl;


    return 0;

}
