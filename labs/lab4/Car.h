#include <stdio.h>
#include <Vehicle.h>

class Car final : public Vehicle {
private:
    int seats;
public:
    void turn();
    void move();
    void  enlarge(int n) = 0;
    void  shrink(int n) = 0;
    void  forward() = 0;
    void  backward() = 0;
};
