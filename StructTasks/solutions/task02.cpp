#include<iostream>
#include<cmath>

const double PI = 3.14159265;

struct Polar{
    double mag;
    double ang;
};


struct Rect{
    double x;
    double y;
};


Polar rectToPolar(const Rect& r){
    Polar p;

    p.mag = sqrt(r.x * r.x + r.y * r.y);
    p.ang = atan2(r.y, r.x);

    return p;
}


Rect polarToRect(const Polar& p){
    const double DET_TO_RAD = PI / 180;
    Rect r;

    r.x = p.mag * cos(p.ang * DET_TO_RAD);
    r.y = p.mag * sin(p.ang * DET_TO_RAD);

    return r;
}


void showPolar(const Polar& p){
    const double RAD_TO_DEG = 180 / PI;

    std::cout << "Radius: " << p.mag;
    std::cout << ", angle = " << p.ang * RAD_TO_DEG;
    std::cout << " degrees. " << std::endl;
}


void showRect(const Rect& r){
    std::cout << "X-axis: " << r.x << ", Y-axis: " << r.y << std::endl;
}


int main(){
    Rect r;
    Polar p;

    std::cout << "Choose type of coordinates: " << std::endl;
    std::cout << "r - for rectangle and p - for polar coordinates" << std::endl;

    char ch;
    std::cin >> ch;

    switch(ch){
        case 'r': 
            std::cout << "Enter rectangle coordinates of x and y: " << std::endl;
            while(std::cin >> r.x >> r.y){
                p = rectToPolar(r);
                showPolar(p);
                
                std::cout << "Next rectangle coordinates, for end of the program type end" << std::endl;
            }
            break;

        case 'p':
            std::cout << "Enter polar coordinates mag and ang: " << std::endl;
            while(std::cin >> p.mag >> p.ang){
                r = polarToRect(p);
                showRect(r);

                std::cout << "Next polar coordinates, for end of the program type end" << std::endl;
            }
    }


    return 0;
}