#include <iostream>

using namespace std;

class Employee {
protected:
    string name;
    string dob;
    string doj;
    string cnic;

public:
    Employee() {
        name = "";
        dob = "";
        doj = "";
        cnic = "";
    }

    Employee(string nm, string db, string dj, string cn) {
        name = nm;
        dob = db;
        doj = dj;
        cnic = cn;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Date of Joining: " << doj << endl;
        cout << "CNIC: " << cnic << endl;
    }
};

class Admin : public Employee {
    private:
    int yearsOfExperience;
    string currentPayGrade;

    public:
    Admin() : Employee() {
        yearsOfExperience = 0;
        currentPayGrade = "None";
    }

    Admin(string nm, string db, string dj, string cn, int exp, string pg)
        : Employee(nm, db, dj, cn) {
        yearsOfExperience = exp;
        currentPayGrade = pg;
    }

    void display() {
        Employee::display();
        cout << "Years of Experience: " << yearsOfExperience << endl;
        cout << "Current Pay Grade: " << currentPayGrade << endl;
    }
};

class Faculty : public Employee {
private:
    string highestDegree;
    string lastInstitute;
    int researchPapers;
    string specialization;
    string researchInterests;

public:
    Faculty() : Employee() {
        highestDegree = "";
        lastInstitute = "";
        researchPapers = 0;
        specialization = "";
        researchInterests = "";
    }

    Faculty(string nm, string db, string dj, string cn, string degree, string institute, int papers, string spec, string interests)
        : Employee(nm, db, dj, cn) {
        highestDegree = degree;
        lastInstitute = institute;
        researchPapers = papers;
        specialization = spec;
        researchInterests = interests;
    }

    void display() {
        Employee::display();
        cout << "Highest Degree: " << highestDegree << endl;
        cout << "Last Institute: " << lastInstitute << endl;
        cout << "Number of Research Papers: " << researchPapers << endl;
        cout << "Specialization: " << specialization << endl;
        cout << "Research Interests: " << researchInterests << endl;
    }
};

class HelpStaff : public Employee {
private:
    int yearsOfExperience;
    string currentPayGrade;

public:
    HelpStaff() : Employee() {
        yearsOfExperience = 0;
        currentPayGrade = "";
    }

    HelpStaff(string nm, string db, string dj, string cn, int experience, string payGrade)
        : Employee(nm, db, dj, cn) {
        yearsOfExperience = experience;
        currentPayGrade = payGrade;
    }

    void display() {
        Employee::display();
        cout << "Years of Experience: " << yearsOfExperience << endl;
        cout << "Current Pay Grade: " << currentPayGrade << endl;
    }
};

int main() {
    Admin admin("Hassam", "19-10-2003", "01-12-2021", "12345-6789012-3", 3, "A1");
    Faculty faculty("Fahad", "05-05-2000", "10-10-2020", "98765-4321098-1", "PhD", "Harvard University", 15, "Artificial Intelligence", "Machine Learning, Data Science");
    HelpStaff helpStaff("Mustafa", "08-08-1995", "15-08-2009", "56789-0123456-7", 8, "B2");

    cout << "Admin Information:" << endl;
    admin.display();

    cout << "\nFaculty Information:" << endl;
    faculty.display();

    cout << "\nHelp Staff Information:" << endl;
    helpStaff.display();

    return 0;
}
