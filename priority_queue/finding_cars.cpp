#include <bits/stdc++.h>

using namespace std;

class Car
{
public:
    string id;
    int x;
    int y;

    Car(string id, int x, int y)
    {
        this->id = id;
        this->x = x;
        this->y = y;
    }
};

int main()
{
    vector<Car> cars{"C1", 1, 1, "C2", 2, 1, "C3", 3, 2, "C4", 0, 1, "C5", 2, 3};
}