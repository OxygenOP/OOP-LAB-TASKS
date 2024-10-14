#include <iostream>

using namespace std;

class Addition {
    public:
        int num1, num2;

        void input_sum() {
            cout << "Enter two numbers for addition: ";
            cin >> num1 >> num2;
        }

        int sum() {
            return num1 + num2;
        }
};

class Subtraction {
    public:
        int num1, num2;

        void input_sub() {
            cout << "Enter two numbers for subtraction: ";
            cin >> num1 >> num2;
        }

        int sub() {
            return num1 - num2;
        }
};

class Calculation : public Addition, public Subtraction {
    public:
        void display() {
            cout << "Sum: " << sum() << endl;

            cout << "Subtraction: " << sub() << endl;
        }
};

int main() {
    Calculation calc;

    calc.input_sum();  
    calc.input_sub();  
    calc.display();    

    return 0;
}
