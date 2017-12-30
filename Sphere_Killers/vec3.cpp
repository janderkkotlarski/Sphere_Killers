#include "vec3.h"

Vec3::Vec3(const double x,
           const double y,
           const double z)
    : m_x(x), m_y(y), m_z(z),
      m_t(0)
{ absol(); }

Vec3::~Vec3()
{}

Vec3 crossing(const Vec3& vect_a, const Vec3& vect_b) noexcept
{
    const double out_x
    { vect_a.get_y()*vect_b.get_z() - vect_a.get_z()*vect_b.get_y() };

    const double out_y
    { vect_a.get_z()*vect_b.get_x() - vect_a.get_x()*vect_b.get_z() };

    const double out_z
    { vect_a.get_x()*vect_b.get_y() - vect_a.get_y()*vect_b.get_x() };

    return Vec3(out_x, out_y, out_z);
}
