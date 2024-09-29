#include <iostream>

using namespace std;

class Grandfather {
protected:
    string name;
    int age;
    bool healthStatus;

public:
    Grandfather() {
        name = "Pervaiz Akhter";
        age = 72;
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
protected:
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

class Child : public Father {
    private:
    string educationLevel;

    public:
    Child() : Father() {
        educationLevel = "High School";
    }

    Child(string n, int a, bool hs, bool ms, string ed) : Father(n, a, hs, ms) {
        educationLevel = ed;
    }

    void displayInfo() {
        displayGrandfatherInfo();
        
        if(maritalStatus){
            cout << "Marital Status: " << "Married" << endl;
        } else {
            cout << "Marital Status: " << "Single" << endl;

        }    

        cout << "Education Level: " << educationLevel << endl;
    }
};

int main() {
    Child child("Hassam", 21, true, false, "University");

    child.displayInfo();

    return 0;
}
