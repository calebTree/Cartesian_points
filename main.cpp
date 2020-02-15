//Caleb A.
//Reilly S
//Yuepeng Y
//Adam G.
//Adonteng A.

#include <iostream>
#include <cmath>
using namespace std;

struct cartPoint
{
    double x; //x coordinate
    double y; //y coordinate
};

void setCartPoint(cartPoint *);
void printCartPoint(const cartPoint &);
double cartPointDistance(const cartPoint &, const cartPoint &);

int main()
{
    cartPoint point1, point2;
    //get the points
    setCartPoint(&point1);
    setCartPoint(&point2);
    //cout << "This is point 1 " << "(" << point1.x << ", " << point1.y << ")" << endl;
    //cout << "This is point 2 " << "(" << point2.x << ", " << point2.y << ")" << endl;

    //display the point
    printCartPoint(point1);
    printCartPoint(point2);

    //distance between points
    cout << "Here is the distance " << cartPointDistance(point1, point2);

    return 0;
}

void setCartPoint(cartPoint *p)
{
    /** Prompt the user for the x and y values of a Cartesian coordinate pair and set
* the appropriate fields in the structure pointed to by p to those values. */
    cout << "Enter x: ";
    cin >> p->x;
    cout << "Enter y: ";
    cin >> p->y;
}

void printCartPoint(const cartPoint &p)
{
    /** Print out the contents of a cartPoint in a friendly, human readable way. */
    cout << "This is point " << "(" << p.x << ", " << p.y << ")" << endl;
}

double cartPointDistance(const cartPoint &p1, const cartPoint &p2)
{
    /** Return the distance between two Cartesian coordinates. */
    double distance;
    distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));

    return distance;
}
