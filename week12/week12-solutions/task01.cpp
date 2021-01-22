#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

struct Product{
    char description[32];
    int partNum;
    double cost;
};

int main(){
    //a)
    Product prod1, prod2;

    //Initialize product 1
    strcpy(prod1.description, "screw-driver");
    prod1.partNum = 456;
    prod1.cost = 5.50;

    //Initialize product 2
    strcpy(prod2.description, "hammer");
    prod2.partNum = 324;
    prod2.cost = 8.20;


    //а) Second variant
    Product p1 = {"screw-driver", 456, 5.50},
            p2 = {"hammer", 324, 8.20};

    //б)
    cout << setiosflags(ios::fixed) << setprecision(2);

    cout << "Product 1: " << endl;
    cout << "name: " << prod1.description << endl;
    cout << "partNum: " << prod1.partNum << endl;
    cout << "cost: " << prod1.cost << endl;

    cout << endl;

    cout << "Product 2: " << endl;
    cout << "name: " << prod2.description << endl;
    cout << "partNum: " << prod2.partNum << endl;
    cout << "cost: " << prod2.cost << endl;

    //в)
    Product P[10];

    //г)
    for(int i = 0; i < 10; i++){
        strcpy(P[i].description, " ");
        P[i].partNum = 0;
        P[i].cost = 0.0;
    }

    //д)
    Product Q[5] = { {"screw-driver", 456, 5.50},
                     {"hammer", 324, 8.20},
                     {"socket", 458, 5.75},
                     {"plier", 929, 10.50},
                     {"hand-saw", 536, 7.45}
                    };

    //e)
    for(int i = 0; i < 5; i++){
        cout << "Product[" << i << "]: " << endl;
        cout << Q[i].description << endl;
        cout << Q[i].partNum << endl;
        cout << Q[i].cost << endl;
    }

    return 0;
}