#include <iostream>

using namespace std;

class Grandfather {
    protected:
    string name;
    int age;
    bool healthStatus;

    public:
    Grandfather() {
        name = "Hassam Sohail";
        age = 18;
        healthStatus = true;
    }

    Grandfather(string n, int a, bool hs) {
        name = n;
        age = a;
        healthStatus = hs;
    }

    void displayGrandfatherInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

        if(healthStatus){
            cout << "Health Status: " << "Healthy" << endl;

        } else {
            cout << "Health Status: " << "Ill" << endl;

        }   
    }
};

class Father : public Grandfather {
    private:
    bool maritalStatus;

    public:
    Father() : Grandfather() {
        maritalStatus = true;
    }

    Father(string n, int a, bool hs, bool ms) : Grandfather(n, a, hs) {
        maritalStatus = ms;
    }

    void displayInfo() {
        displayGrandfatherInfo();
        
        if(maritalStatus){
            cout << "Marital Status: " << "Married" << endl;
        } else {
            cout << "Marital Status: " << "Single" << endl;

        }     
    }
};

int main() {
    Father obj;
    obj.displayInfo();

    cout << endl;

    Father obj2("Sohail", 52, true, true);
    obj2.displayInfo();

    return 0;
}
