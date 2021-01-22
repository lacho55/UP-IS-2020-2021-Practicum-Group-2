#include<iostream>
using namespace std;

const int SIZE = 16;
const int SIZE_MAX = 20;

//declaring structure Person
struct Person{
    char firstName[SIZE];
    char lastName[SIZE];
};


//Input data for Person
void readPerson(Person& P){
    cout << "First name: \n" ;
    cin >> P.firstName;

    cout << "Last name: \n";
    cin >> P.lastName;
}

//Output data for Person
void printPerson(const Person& P){
    cout << "First name: " << P.firstName << endl;
    cout << "Last name: " << P.lastName << endl;
}


//declaring structure Client
struct Client{
    Person name;
    double ammount;
};

//Input data for Client
void readClient(Client& C){
    cout << "Name of the client: " << endl;
    readPerson(C.name);

    cout << "Ammount of client: " << endl;
    cin >> C.ammount;
}

//Output data for Client
void printClient(const Client& C){
    cout << "Client name: " << endl;
    printPerson(C.name);

    cout << "Ammount of Client: " << C.ammount << endl;
}

int main(){
    //a)
    // Entering the names and bank accounts of all clients
    int n;
    cout << "Enter n[1 - 10]: \n";
    cin >> n;

    Client allClients[SIZE_MAX];

    for(int i = 0; i < n; i++){
        readClient(allClients[i]);
    }

    //б)
    //Printing the names and the bank accounts of all clients
    cout << "Bank clients: " << endl;
    for(int i = 0; i < n; i++){
        printClient(allClients[i]);
    }

    //в)
    //Finding the sum of all clients ammounts
    double sum = 0;
    for(int i = 0; i < n; i++){
        if(allClients[i].ammount < 0){
            sum += allClients[i].ammount;
        }
    }

    cout << "The sum is " << sum << endl;

    return 0;
}