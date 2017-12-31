#include <cassert>
#include <iostream>

#include "vec3.h"
#include "qube.h"

int main()
{
    Vec3 vector_1(2.0, 2.0, 2.0);

    Vec3 vector_2(-2.0, 4.0, -2.0);

    std::cout << vector_1.get_t() << '\n';
    std::cout << vector_2.get_t() << '\n';

    Qube qube_1(vector_1, vector_2);

    std::cout << "Hello World!\n";
    return 0;
}
