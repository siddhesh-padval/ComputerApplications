/* Learn how to optimize 
start with brute force (don't worry about efficiency)
then optimize
*/

#include<iostream>
#include<vector>

int main(){

	std::cout << "Program: isPal\n";
	
	//int k=01;
	//std::cout << k << "\n";

	/*int i = 52323;
	
	std::cout << i <<"\t" << (i%10) << "\n";	
	
	i = (i - i%10)/10;
	std::cout << i <<"\t" << (i%10) << "\n";

	i = (i - i%10)/10;
	std::cout << i <<"\t" << (i%10) << "\n";

	i = (i - i%10)/10;
	std::cout << i <<"\t" << (i%10) << "\n";

	i = (i - i%10)/10;
	std::cout << i <<"\t" << (i%10) << "\n";

	i = (i - i%10)/10;
	std::cout << i <<"\t" << (i%10) << "\n";*/
	
	std::vector<int> digits;
	
	int i1 = 1235305321;
	while(i1 != 0){
	std::cout << i1 <<"\t" << (i1%10) << "\n";		
	digits.push_back(i1%10);
	i1 = (i1 - i1%10)/10;
	}
	
	/*std::cout << digits.size() << "\n";
	std::cout << digits[0] << "," << digits[1] << "," << digits[2] << "," << digits[3] << "," << digits[4] << "," << digits[5] << "\n";*/
	
	for(int i=0; i<digits.size(); i++){
	std::cout << digits[i] << " ";
	}
	std::cout << "\n";

	/*int pal=0;
	for(int i=0; i<digits.size(); i++){
	std::cout << i << "," << digits.size()-i-1 << "\n";
	}*/

	/*int pal=0;
	for(int i=0; i<digits.size(); i++){
	if(digits[i]==digits[digits.size()-i-1]) std::cout << "match" << "\n";
	else std::cout << "No match" << "\n";
	}*/

	/*for(int i=0; i<(digits.size())/2; i++){
	if(digits[i]==digits[digits.size()-i-1]) std::cout << "match" << "\n";
	else std::cout << "No match" << "\n";
	}*/

	int pal=0;
	for(int i=0; i<(digits.size())/2; i++){	
	if(digits[i] != digits[digits.size()-i-1]) pal++;
	}	

	if(pal==0) std::cout<< "isPal\n";
	else std::cout<< "noPal\n";	

	return 0;

}
