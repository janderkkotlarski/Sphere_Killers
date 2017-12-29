#include "vec3.h"

Vec3::Vec3(const double x,
           const double y,
           const double z)
    : m_x(x), m_y(y), m_z(z),
      m_t(0)
{ absol(); }

Vec3::~Vec3()
{}
