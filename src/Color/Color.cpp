#include "Color.h"

Color::Color()
{
  r = 0.0;
  g = 0.0;
  b = 0.0;
}

Color::Color(double _r, double _g, double _b)
{
  r = clamp(_r);
  g = clamp(_g);
  b = clamp(_b);
}

double Color::get_r() const
{
  return r;
}

double Color::get_g() const
{
  return g;
}

double Color::get_b() const
{
  return b;
}

double Color::clamp(double value)
{
  if (value < 0)
  {
    return 0;
  }
  else if (value > 1)
  {
    return 1;
  }
  else
  {
    return value;
  }
}
