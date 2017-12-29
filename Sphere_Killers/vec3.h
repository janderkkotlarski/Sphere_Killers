#ifndef VEC3_H
#define VEC3_H

#include <cmath>

class Vec3
{
    double m_x;
    double m_y;
    double m_z;
    double m_t;

public:

    Vec3(const double x,
         const double y,
         const double z);

    ~Vec3();

    void absol() noexcept
    { m_t = sqrt(m_x*m_x + m_y*m_y + m_z*m_z); }

    double get_x() noexcept
    { return m_x;}

    double get_y() noexcept
    { return m_y;}

    double get_z() noexcept
    { return m_z;}

    double get_t() noexcept
    { return m_t;}

};


#endif // VEC3_H
