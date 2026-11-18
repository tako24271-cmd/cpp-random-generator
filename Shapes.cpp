#include <iostream>
using namespace std;
 namespace shapes{
    class Square{
        
        private:
           int sidelength;
           int getLength() const;
        public:
        Square(): sidelength(0) {}
        Square(int sidelength): sidelength(6){}
        ~Square() {}
    };
    class Triangle{
        Triangle();
        private:
            int base;
            int height;
        int getBase() const;
        int getHeight() const;
        Triangle(): base(0), height(0){}
        Triangle(int base, int height): base(7), height(10){}
        ~Triangle() {}
    };
    class Circle{
        Circle();
        private:
        int radius;
        int getRadius() const;
    };
 }