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

    double get_x() const noexcept
    { return m_x;}

    double get_y() const noexcept
    { return m_y;}

    double get_z() const noexcept
    { return m_z;}

    double get_t() const noexcept
    { return m_t;}

};

Vec3 crossing(const Vec3& vect_a, const Vec3& vect_b) noexcept;

double dotting(const Vec3& vect_a, const Vec3& vect_b) noexcept;

#endif // VEC3_H
