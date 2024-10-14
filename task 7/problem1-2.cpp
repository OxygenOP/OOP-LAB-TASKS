#include <iostream>
using namespace std;

class Area {
    private:
        int length;
        int width;
        int area;

    public:
        static int count;

        Area(int l, int w){
            length = l;
            width = w;
            area = l * w;
            count++;
        }

        void display() const {
            cout << "Area = " << area << "\tCount = " << count << endl;
        }
    };

int Area::count = 0;

int main() {

    Area obj1(5, 4);
    obj1.display();
    
    Area obj2(8, 2);
    obj2.display();

    //Using Pointer method for a class // Problem 2
    Area* obj3 = new Area(7, 3);

    obj3->display();

    delete obj3;

    return 0;
}
