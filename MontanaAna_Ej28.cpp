#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;



int main(){

	double t = 0; 
	double dx=0.01; 
	double dt=0.5; 
	double L = 2; 
	double tmax = 100 ; 
	double k=200.;
	double c=900.;
	double rho=2700.;
	double etha=(k*dt)/(rho*c*dx*dx);
	
	int  Nx = (L/dx) +1 ; 
	double tem_old[Nx];
	double tem_new[Nx];

	ofstream outfile;
	outfile.open("datoscalor.dat");
	

	//iniciales

	for(int i=0; i<Nx; i++){

      if((i>80) && (i<120)){

      		tem_old[i]= 500; 

      }
      else{

      		tem_old[i]=300; 
      }

   }




    while(t<100){

    

	for(int i=1;i<200;i++){
        
		tem_new[i]= tem_old[i] + etha*(tem_old[i+1] + tem_old[i-1] -2*tem_old[i]);
		outfile << tem_old[i] << endl;
    }

    t = t + dt ;
    //fijar extremos

    for(int i=0; i<Nx; i++){

    	tem_old[i]=tem_new[i]; 
    	
    }

   	
		outfile.close();
    }

     


	return 0; 
}