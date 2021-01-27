#include<iostream>
#include<cmath>

const int MAX_SIZE = 100;

struct Point{
    double x, y;
};


void createPoint(Point& newPoint){
    std::cout << "X-axis: ";
    std::cin >> newPoint.x;

    std::cout << "Y-axis: ";
    std::cin >> newPoint.y;
}


void showPoint(const Point& pnt){
    std::cout << "Point(" << pnt.x << ", " << pnt.y << ")" << std::endl;
}


double dist(const Point& pnt1, const Point& pnt2){
    return sqrt((pnt2.x - pnt1.x) * (pnt2.x - pnt1.x) +
                (pnt2.y - pnt1.y) * (pnt2.y - pnt1.y));
}


void intputPoints(int n, Point *arr){
    for(int i = 0; i < n ; i++){
        std::cout << "x, y = ";
        std::cin >> arr[i].x >> arr[i].y;

        //Here we can also use createPoint(arr[i]);
    }
}


void outputPoints(int n, Point *arr){
    for(int i = 0; i < n; i++){
        std::cout << "Point(" << arr[i].x << ", " << arr[i].y << ")" << std::endl;
        //Here we can aso use showPoint(arr[i]);
    }
}


double maxDistance(int n, Point *arr){
    double max = 0;

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){

            double tmp = dist(arr[i], arr[j]);

            if(tmp > max){
                max = tmp;
            }
        }
    }

    return max;
}


int main(){
    int size;

    do{
        std::cout << "Enter size between 2 and " << MAX_SIZE << ": ";
        std::cin >> size;
    }while(size < 2 || size > MAX_SIZE);

    Point arr[100];

    intputPoints(size, arr);

    outputPoints(size, arr);

    std::cout << "The max distance between the points is: " << maxDistance(size, arr);

    return 0;
}