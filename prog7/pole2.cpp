#include <iostream>
#include <cmath>

using namespace std;

class point
{
    private:
	double x;
	double y;

    public:
	point() = default;
	point (double x, double y): x{x}, y{y} {}
	double pole() const
	{return 0;}
};

class Circle: public point
{
    private:
	double r;

    public:
	Circle() = default;
	Circle(double x, double y, double r): point{x, y}, r(r) {}
	double pole () const
	{return M_PI*r*r;}
};

class Cylinder: public Circle
{
    private:
	double h;

    public:
	Cylinder() = default;
	Cylinder(double X, double Y, double R, double H): Circle{X, Y, R}, h(H) {}
	double pole() const
	{
	    return (Circle::pole())*h;
	}
};

int main()
{
    point*c = new point(2, 4);
    point*c1 = new Circle(2, 4, 3);
    point*c2 = new Cylinder(2, 4, 3, 5);
    
    cout << c->pole()<<endl;
    cout << c1->pole() << endl;
    cout <<c2->pole()<<endl;

    delete c;
    delete c1;
    delete c2;
}
