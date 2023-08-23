#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Employee {
private:
    string name;
    int item;
public:
    Employee(string name, int item) : name(name), item(item) {}
    friend ostream& operator<<(ostream&, Employee&);
};

ostream& operator<<(ostream& o, Employee& m) {
    o << m.name << " " << m.item << " pide almak istiyorum ";
    return o;
}

class Pizzeria {
    queue<Employee*> queue;
public:
    void sellMuffin() {
        if (queue.empty()) {
            cout << "The customer waiting to order is none!!" << endl;
        } else {
            Employee* customer = queue.front();
            queue.pop();
            cout << "Serving customer: " << *customer << endl;
            delete customer; // Deallocated the memory for the served customer
        }
    }

    void enterQueue(Employee* m) {
        if (m) {
            queue.push(m);
        }
    }
    friend ostream& operator<<(ostream&,Pizzeria&);
};
ostream& operator<<(ostream& o,Pizzeria& p){
    if (p.queue.empty())
        o << "No customers waiting in queue" << endl;
    else{
        int i = 1;
        o << "Customers waiting in queue: " << endl;
        queue<Employee*> queue = p.queue;
        while (!queue.empty()){
            Employee m = *queue.front();
            cout << i << " -> " << m << endl;
            queue.pop(); 
            i++;
        }
        o << endl;
    }
    return o;
}

int main() {
    Pizzeria pizzeria;
  //  Employee* m = new Employee("Arif", 3); // Created on the heap using 'new'
    Employee m("Arif", 3);
    Employee m2("Arif", 4);

  //  cout << *m << endl;
  //  pizzeria.sellMuffin();
    pizzeria.enterQueue(&m);
    pizzeria.enterQueue(&m2);
    cout << pizzeria;
    return 0;
}