/*1)
#include <iostream>
using namespace std;

class Vehicle {
public:
    
    virtual void startEngine() = 0;   
    virtual void stopEngine() = 0;   
 
    virtual ~Vehicle() {
        cout << "Vehicle destructor called" << endl;
    }
};


class Car : public Vehicle {
public:
    
    void startEngine() override {
        cout << "Car engine started" << endl;
    }

    void stopEngine() override {
        cout << "Car engine stopped" << endl;
    }

    Car() {
        cout << "Car created" << endl;
    }

    ~Car() {
        cout << "Car destroyed" << endl;
    }
};

class Bus : public Vehicle {
public:
    void startEngine() override {
        cout << "Bus engine started" << endl;
    }

    void stopEngine() override {
        cout << "Bus engine stopped" << endl;
    }

    Bus() {
        cout << "Bus created" << endl;
    }

    ~Bus() {
        cout << "Bus destroyed" << endl;
    }
};

int main() {
    Vehicle* car = new Car();
    car->startEngine();
    car->stopEngine();

    cout << endl;

    Vehicle* bus = new Bus();
    bus->startEngine();
    bus->stopEngine();

    delete car;
    delete bus;

    return 0;
}*/
/*2)
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() = 0;   
    virtual void stopEngine() = 0;    

    virtual ~Vehicle() {
        cout << "Vehicle destructor called" << endl;
    }
};

class Car : public Vehicle {
public:
    
    virtual void startEngine() override {
        cout << "Car engine started" << endl;
    }

    virtual void stopEngine() = 0;  

    Car() {
        cout << "Car created" << endl;
    }

    ~Car() {
        cout << "Car destroyed" << endl;
    }
};

class SportsCar : public Car {
public:
    void stopEngine() override {
        cout << "SportsCar engine stopped" << endl;
    }

    SportsCar() {
        cout << "SportsCar created" << endl;
    }

    ~SportsCar() {
        cout << "SportsCar destroyed" << endl;
    }
};

class Wagon : public Car {
public:
    void stopEngine() override {
        cout << "Wagon engine stopped" << endl;
    }

    Wagon() {
        cout << "Wagon created" << endl;
    }

    ~Wagon() {
        cout << "Wagon destroyed" << endl;
    }
};

class Coupe : public Car {
public:
    void stopEngine() override {
        cout << "Coupe engine stopped" << endl;
    }

    Coupe() {
        cout << "Coupe created" << endl;
    }

    ~Coupe() {
        cout << "Coupe destroyed" << endl;
    }
};

int main() {
    Vehicle* mySportsCar = new SportsCar();
    mySportsCar->startEngine();
    mySportsCar->stopEngine();

    cout << endl;

    Vehicle* myWagon = new Wagon();
    myWagon->startEngine();
    myWagon->stopEngine();

    cout << endl;

    Vehicle* myCoupe = new Coupe();
    myCoupe->startEngine();
    myCoupe->stopEngine();

    delete mySportsCar;
    delete myWagon;
    delete myCoupe;

    return 0;
}
*/
/*3)
#include <iostream>
using namespace std;

class MyClass {
public:
    int normalVar;      
    static int staticVar;

    MyClass(int value) {
        normalVar = value;    
        staticVar++;          
        cout << "Constructor: normalVar = " << normalVar << ", staticVar = " << staticVar << endl;
    }

    ~MyClass() {
        staticVar--; 
        cout << "Destructor: staticVar = " << staticVar << endl;
    }
};

int MyClass::staticVar = 0;

int main() {

    MyClass obj1(5);  
    MyClass obj2(10); 

    return 0;
}
*/