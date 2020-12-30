#include "Point.h"

Point::Point()
{
  x = 0;
  y = 0;
}
Point::Point (double x_coordinate, double y_coordinate)
{
  x = x_coordinate;
  y = y_coordinate;
}
double Point::get_x_coordinate()
{
  return x;
}
double Point::get_y_coordinate()
{
  return y;
}

void Point::set_x_coodinate (double new_x)
{
  x = new_x;
}
void Point::set_y_coordinate (double new_y)
{
  y = new_y;
}
void Point::set_coordinates (double new_x, double new_y)
{
  x = new_x;
  y = new_y;
}
