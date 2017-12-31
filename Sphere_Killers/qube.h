#ifndef QUBE_H
#define QUBE_H

#include <cassert>
#include <cmath>

#include "vec3.h"

class Qube
{
    Vec3 m_pos;
    Vec3 m_dir;

public:

    Qube(const Vec3& pos,
         const Vec3& dir);

    ~Qube();
};

#endif // QUBE_H
