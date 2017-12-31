#include "qube.h"

Qube::Qube(const Vec3 &pos, const Vec3 &dir)
    : m_pos(pos), m_dir(dir)
{
    assert(std::abs(0.000001*m_pos.get_t()*m_dir.get_t()) >=
           std::abs(dotting(m_pos, m_dir)));
}

Qube::~Qube()
{}
