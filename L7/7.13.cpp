#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <cmath>

#include "test.h"

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

void rect_to_polar(rect* point_rect,polar* point_polar);
void show_polar(const polar* point_polar);

int main(int argc, const char *argv[]){
    using namespace std;
    rect point_rect;
    polar point_polar;

    cout << "Enter x and y:" << endl;
    while (cin >> point_rect.x >> point_rect.y)
    {
        rect_to_polar(&point_rect,&point_polar);
        show_polar(&point_polar);
        cout << "Enter next number:" << endl;
    }

    cout << "done!" << endl;
    return 0;
}

void rect_to_polar(rect* point_rect,polar* point_polar){

    using namespace std;

    point_polar->distance = sqrt(point_rect->x * point_rect->x + point_rect->y * point_rect->y);
    point_polar->angle = atan2(point_rect->y, point_rect->x);

    //cout<<"test:"<<point_rect.x<<'|'<<point_rect.y<<'|'<<result.distance<<endl;

}

void show_polar(const polar* point_polar){
    using namespace std;
    const double rad_to_deg=57.29577951;

    cout<<"distance="<<point_polar->distance;
    cout<<"  ,angle="<<point_polar->angle*rad_to_deg;
    cout<<" degrees"<<endl;
}