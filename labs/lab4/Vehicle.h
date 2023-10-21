#include <string>
#include <Movable.h>
#include <Resizable.h>

class Vehicle: public Movable, public Resizable {
protected:
    std::string name;

public:
    Vehicle(const std::string& name);
    virtual void move() = 0;
    void enlarge(int n);
    void shrink(int n);
    void forward();
    void backward();
};
