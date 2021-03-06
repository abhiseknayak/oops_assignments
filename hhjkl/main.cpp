#include<iostream>
#include<cmath>

using namespace std;
class Point_Rectangular;
class Point_Polar
{
    double r;
    double theta;
public:
    void set_coordinates(double,double);
    void show_coordinates();
    Point_Rectangular convert_to_rectangular();

};


void Point_Polar::set_coordinates(double a, double b)
{
    if (a<0)
    {
        while(a<0)
        {
            cout<<"enter a positive value of r\n";
            cin>>a;

        }

        r=a;
        theta=b;
    }
    else
    {
        r=a;
        theta=b;
    }

}


void Point_Polar::show_coordinates()
{
    cout<<"The value of r is  "<<r<<'\n';
    cout<<"The value of theta is "<<theta<<'\n';
}




class Point_Rectangular
{
    double x;
    double y;
public:
    void set_coordinates(double,double);
    void show_coordinates();
    Point_Polar convert_to_polar();

};


void Point_Rectangular::set_coordinates(double a, double b)
{
    x=a;
    y=b;
}

Point_Polar Point_Rectangular::convert_to_polar()
{
    double r_coordinate=sqrt(pow(x,2.0)+pow(y,2.0));
    double the=atan(y/x);
    Point_Polar x;
    x.set_coordinates(r_coordinate,the);
    return x;
}


void Point_Rectangular::show_coordinates()
{
    cout<<"The value of x coordinate is  "<<x<<'\n';
    cout<<"The value of y coordinate is  "<<y<<'\n';
}

Point_Rectangular Point_Polar::convert_to_rectangular()
{
    double x_coor=r*cos(theta);
    double y_coor=r*sin(theta);
    Point_Rectangular n;
    n.set_coordinates(x_coor,y_coor);
    return n;
}

int main()
{
    Point_Polar a,b;
    Point_Rectangular c,d;
    a.set_coordinates(5,3.14);
    a.show_coordinates();
    c=a.convert_to_rectangular();
    c.show_coordinates();
    d.set_coordinates(4,5);
    d.show_coordinates();
    b=d.convert_to_polar();
    b.show_coordinates();


}
