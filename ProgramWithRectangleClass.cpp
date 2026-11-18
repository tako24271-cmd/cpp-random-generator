#include <iostream>
using namespace std;

class Rectangle{
    
    private:
        float length;
        float width;
        
    public:
        
       Rectangle();
        ~Rectangle() {}
        void setLength(float l);
        void setWidth(float w);
        float getLength() const;
        float getWidth() const;
        float getArea() const{
            return length * width;
        }
};
Rectangle::Rectangle(){
    length = 0.0;
    width = 0.0;
}void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}
int main(){
    Rectangle rectangle;
    float l;
    cout << "Enter the length of the rectangle: "<< endl;
    cin >> l;
    rectangle.setLength(l);
    float w;
    cout << "enter the width of the rectangle: "<< endl;
    cin >> w;
    rectangle.setWidth(w);
    cout << "The area of the rectangle is: " << rectangle.getArea() << endl;
    return 0;
}
