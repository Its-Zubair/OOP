
#include <iostream>
	using namespace std;

	  class Shape
	  {
	  public:

		  virtual double getArea() = 0;
	  };

	  class Triangle : public Shape
	  {
	  private:
		  double base;
		  double height;

	  public:
		  Triangle(double b, double h)
		  {
			  base = b;
			  height = h;
		  }

		  double getArea()
		  {
			  return 0.5 * base * height;
		  }
	  };

	  class Rectangle : public Shape
	  {
	  private:
		  double length;
		  double width;

	  public:
		  Rectangle(double l, double w)
		  {
			  length = l;
			  width = w;
		  }

		  double getArea()
		  {
			  return length * width;
		  }
	  };

	  class Square : public Shape
	  {
	  private:
		  double side;

	  public:
		  Square(double s)
		  {
			  side = s;
		  }

		  double getArea()
		  {
			  return side * side;
		  }
	  };

	  class Circle : public Shape
	  {
	  private:
		  double radius;

	  public:
		  Circle(double r)
		  {
			  radius = r;
		  }

		  double getArea()
		  {
			  return 3.14 * (radius * radius);
		  }
	  };

	  int main()
	  {
		  Triangle t(2.8, 69.9);
		  Rectangle r(89.0, 6.8);
		  Square s(7.7);
		  Circle c(29.5);

		  cout << "Area of Triangle: " << t.getArea() << endl;
		  cout << "Area of Rectangle: " << r.getArea() << endl;
		  cout << "Area of Square: " << s.getArea() << endl;
		  cout << "Area of Circle: " << c.getArea() << endl;

		  double largest;

		  if (t.getArea() > r.getArea())

			  largest = t.getArea();
		  else
			  largest = r.getArea();

		  if (s.getArea() > largest)
			  largest = s.getArea();

		  if (c.getArea() > largest)
			  largest = c.getArea();

		  cout << "Largest area between 4 of them : " << largest << endl;

		  system("pause");
		  return 0;
	  }