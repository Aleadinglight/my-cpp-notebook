#include <cstdlib>
#include <iostream>
#include <memory>

using namespace std;

class Entity {
private:
    int id;

public:
    Entity(int id) {
        this->id = id;
        cout << "New entity: " << id << endl;
    }

    void print() {
        cout << "Hi" << endl;
    }

    ~Entity() {
        cout << "Deleted entity: " << this->id << endl;
    }
};

int main() {
    unique_ptr<Entity> a = nullptr;
    {
        unique_ptr<Entity> e = make_unique<Entity>(1);
        e->print();
        //Entity c = Entity(2);
        a = make_unique<Entity>(Entity(2));
    }

    a->print();
}