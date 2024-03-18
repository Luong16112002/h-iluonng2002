#include <iostream>
using namespace std;
class Rectangle {
private:
     double width;
     double height;
public:
	Rectangle(double w, double h) {
        width = w;
        height = h;
    }  
	 double  getPerimeter()  {
	     return 2 * (width + height);
    } 
    double getrea() {
	    return (width * height);
    } 
};
int main () {
    Rectangle myRectangle(5,10);
    cout << "Perimeter: " << myRectangle.getPerimeter() << endl;
    Rectangle hinhcn2( 3,4);
    cout << "chu vi;"  << hinhcn2.getPerimeter()  << endl; 
    cout <<"dien tich:" << hinhcn2.getPerimeter() << endl;
    return 0; 
}
