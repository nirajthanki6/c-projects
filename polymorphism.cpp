/*****************************************************************************
 *  Northwestern Polytechnic University
 *  CS360 - c++
 *****************************************************************************/
/*****************************************************************************
 *  main.c
 *
 *  Description of this source file.
 *
 *  Author:  THANKI NIRAJ and 19376
 *****************************************************************************/
#include<iostream>
using namespace std;
 
class Car{   //declare Car Class
 	protected:
 		int rpm;
 		int gear;
 		int speed;
 	public:
 		 Car(int rpm,int gear,int speed){this->rpm=rpm; this->gear=gear; this->speed=speed;} // Parametric constractor of Car Class
		 Car(){ rpm=0; gear=0; speed=0;	 }
		 void setRpm(int rpm){ this->rpm=rpm;} // set the Rpm
		 void setGear(int gear){ this->gear=gear;} // set the Gear
		 void setSpeed(int speed){ this->speed=speed;} // set the Speed
		 int getRpm(){ return rpm;} // get the Rpm
		 int getGear(){return gear;} // get the Gear
		 int getSpeed(){return speed;} // get the Speed
		 void printDescription(){ // print description
		 cout <<"Rotation Per Minute(RPM) =" << rpm <<endl; 
		 cout <<"Gear = " << gear <<endl;
		 cout <<"Speed =" << speed <<endl;
		 }
};
class SportsCar:public Car{ // Child class SportsCar of Parent Class Car
	protected:
		string suspension;
		public:
			SportsCar(int rpm,int gear,int speed,string suspension):Car(rpm,gear,speed){this->suspension=suspension;} //parametric constractor of SportsCar Class
			SportsCar():Car(){suspension="NOT AVAILABLE";	}
			void setSuspension(string suspension){this->suspension=suspension;} //set the suspension
			string getSuspension(){return suspension;} //get the suspension
			void printDescription(){ //print description
			Car::printDescription();
			cout << "Suspension = " << endl;
			}
};
class RegularCar:public Car{ // Child class RegularCar of Parent Class Car
	protected:
		int tireWidth;
		public:
			RegularCar(int rpm,int gear,int speed,int tireWidth):Car(rpm,gear,speed){this->tireWidth=tireWidth; this->rpm=rpm; this->gear=gear; this->speed=speed;} // parametric constractor of RegularCar Class
			RegularCar():Car(){tireWidth=0;}
			void setTireWidth(int tireWidth){this->tireWidth=tireWidth;} //set the Width of tire
			int getTireWidth(){return tireWidth;} //get the Width of tire
			void printDescription(){ //print description
	         Car::printDescription();
				cout << "TireWidth = " << tireWidth <<endl;
			}
};  

int main(){
	Car *Car01,*Car02,*Car03;
	Car01 = new Car(20,10,1);
	Car02 = new SportsCar(20,100,5,"Dual");
	Car03 = new RegularCar(40,80,5,100);
	Car01->printDescription();
	Car02->printDescription();
	Car03->printDescription();
}

