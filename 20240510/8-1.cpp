#include <iostream>

using namespace std;

class Circle {
    private:
        int radius;
    public:
        Circle() { 
            radius = 1;
        }
        Circle(int radius) {
            this->radius = radius;
        }
        double getArea() {
            return 3.14 * radius * radius;
        }

};

void swap(Circle &A, Circle &B) {
    Circle temp = A;
    A = B;
    B = temp;
}



int main() {
    Circle A(3), B(5);

    std::cout << "A의 면적 = "  << A.getArea() << " ";
    std::cout << "B의 면적 = "  << B.getArea() << std::endl;

    swap(A, B);

    std::cout << "A의 면적 = " << A.getArea() << " ";
    std::cout << "B의 면적 = " << B.getArea() << std::endl;

    return 0;
}
