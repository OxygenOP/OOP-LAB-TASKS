#include <iostream>

using namespace std;


class Vehicle{
	public:
		Vehicle(){
			cout << "Vehicle Constructor called" << endl;
		}
		~Vehicle(){
			cout << "Vehicle Destructor called" << endl;
		}
		virtual void startEngine() {
			cout << "Starting the vehicle engine." << endl;
		}
};


class LandVehicle: virtual public Vehicle {
	public:
		LandVehicle(){
			cout << "Land Vehicle Constructor called" << endl;
		}
		~LandVehicle(){
			cout << "Land Vehicle Destructor called" << endl;
		}
		void startEngine() override {
		cout << "Starting the land vehicle engine." << endl;
		}
		
};

class WaterVehicle: virtual public Vehicle {
	public:
		WaterVehicle(){
			cout << "Water Vehicle Constructor called" << endl;
		}
		~WaterVehicle(){
			cout << "Water Vehicle Destructor called" << endl;
		}
		void startEngine() override {
		cout << "Starting the water vehicle engine." << endl;
		}
		
};

class AmphibiousVehicle: public LandVehicle, public WaterVehicle {
	public:
		AmphibiousVehicle(){
			cout << "Amphibious Vehicle Constructor called" << endl;
		}
		~AmphibiousVehicle(){
			cout << "Amphibious Vehicle Destructor called" << endl;
		}
				
		void startEngine() override {
			cout << "Starting the amphibious vehicle engine." << endl;
			LandVehicle::startEngine();
			WaterVehicle::startEngine();

		}
};


int main(){
	
	AmphibiousVehicle obj1;
	
	obj1.startEngine();
	
}
