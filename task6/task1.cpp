#include <iostream>


using namespace std;

class Grandfather {

    private:
    string name;
    int age;
    bool healthStatus;

    public:
    Grandfather() {
        name = "Pervaiz Akhter";
        age = 72;
        healthStatus = 1;
    }

    Grandfather(string n, int a, bool hs) {
        name = n;
        age = a;
        healthStatus = hs;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

        if(healthStatus){
            cout << "Health Status: " << "Healthy" << endl;

        } else {
            cout << "Health Status: " << "Ill" << endl;

        }
    }
};

int main() {
    Grandfather obj;
    obj.displayInfo();

    return 0;
}
