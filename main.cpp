#include <iostream>
#include "vehicule.h"
using namespace std;

int main()
{
    Vehicule v1("Civic");
    cout << "v1 est une : "<< v1.toString() << endl;
    return 0;
}
