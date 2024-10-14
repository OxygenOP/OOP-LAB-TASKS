#include <iostream>

using namespace std;

class Animal{
	public:
		Animal(){
			cout << "Animal is created" << endl;
		}
		
		~Animal(){
			cout << "Animal is destroyed" << endl;
		}
		
		virtual void move(){
			cout << "Animal is moving" << endl;
		}
};

class Mammal: virtual public Animal{
	
		public:
		Mammal(){
			cout << "Mammal is created" << endl;
		}
		
		~Mammal(){
			cout << "Mammal is destroyed" << endl;
		}
		
		void move() override{
			cout << "Mammal is walking" << endl;
		}
	
};
	
class Bird: virtual public Animal{
		public:
		Bird(){
			cout << "Bird is created" << endl;
		}
		
		~Bird(){
			cout << "Bird is destroyed" << endl;
		}
		
		void move() override{
			cout << "Bird is Flying" << endl;
		}
};


class Bat: public Mammal, public Bird {
	public:
		Bat(){
			cout << "Bat obj created" << endl;
		}
		
		~Bat(){
			cout << "Bat obj destructed" << endl;
		}
		
		void move() override {
			cout << "Bat is flying and walking" << endl;
		}
};

int main(){
	Bat bat;
	bat.move();

	
	return 0;
}



