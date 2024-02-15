#include <iostream>

unsigned int facto(unsigned int n){

    unsigned int N=n;

    if ((n==0)||(n==1)) {
        
        return 1;
    
    }

    else{

        for(unsigned int i=1 ; i<n ; i=i+1){
            N = N*(n-i);
            //std::cout << "Loop " << i << "\t" << N <<"\n";
        }

    }

    return N;

}

int main(){
  
    std::cout << "n"  << "\t"<< "n!" << "\n";
    for(unsigned int i = 1; i<10 ; i++){
        std::cout << i  << "\t"<< facto(i) << "\n";
    }
    
    return 0;

}
