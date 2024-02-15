#include <iostream>

double function(double x){

	return x*x;

}

int main() {

	double lower_lim = 1.0;
	double upper_lim = 4.0; 
	double n = 1000000.0;

	double h = (upper_lim - lower_lim)/n;

	double trapezoidal_int = 0.0;

	for (int i=0; i<n; i=i+1){

		double u = ((upper_lim - lower_lim)*i)/n;

		if ((i==0)||(i==n)) {
			trapezoidal_int = trapezoidal_int+function(u + lower_lim);
		}
		else {
			trapezoidal_int = trapezoidal_int+(2.0*function(u + lower_lim));
		}
	}

	trapezoidal_int = (h/2.0)*trapezoidal_int;

	std::cout<<"Trapezoidal Integration Method Answer: "<<trapezoidal_int<<"\n";

	return 0;

}
