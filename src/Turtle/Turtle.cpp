#include "../Color/Color.h"
#include "../Point/Point.h"
#include "Turtle.h"
#include "math.h"
#include <GL/glut.h>



Turtle::Turtle()
{
  position = Point(0.0, 0.0);
  direction = 180;
  color = Color();
  tail_up = true;
  width = 2;

}
void Turtle::set_position(Point new_point)
{
  position = new_point;
}

void Turtle::set_direction(double new_direction)
{
  direction = fmod(new_direction, 360);
}

void Turtle::set_color(Color new_color)
{
  color = new_color;
}

void Turtle::set_tail_up(bool is_up)
{
  tail_up = is_up;
}

void Turtle::set_width(double new_width)
{
  width = new_width;
}

Point Turtle::get_position() const
{
  return position;
}

double Turtle::get_direction() const
{
  return direction;
}

Color Turtle::get_color() const
{
  return color;
}

bool Turtle::get_tail_up() const
{
  return tail_up;
}

double Turtle::get_width() const
{
  return width;
}

void Turtle::move_forward(double value)
{
  // Find the target point on the canvas
  Point target(position.get_x_coordinate() + value*cos(to_radical(direction)),
               position.get_y_coordinate() + value*sin(to_radical(direction)));
  move_to(target);
}

void Turtle::move_to(Point target)
{
  // If tail is down then draw a line, else just merely move there
  if(!tail_up)
  {
    set_new_color(color);
    glLineWidth(width);
    glBegin(GL_LINE_STRIP);
    glVertex2f(position.get_x_coordinate(), position.get_y_coordinate());
    glVertex2f(target.get_x_coordinate(), target.get_y_coordinate());
    glEnd();
  }
  position = target;
}

void Turtle::turn_left(double degree)
{
  set_direction(direction + degree);
}

void Turtle::turn_right(double degree)
{
  set_direction(direction - degree);
}

void Turtle::pen_up()
{
  tail_up = true;
}

void Turtle:: pen_down()
{
  tail_up = false;
}

double Turtle::to_radical(double degree)
{
  const double PI = atan(1) * 4;
  return degree * PI / 180;
}

void Turtle::set_new_color(Color color)
{
  glColor3f(color.get_r(), color.get_g(), color.get_b());
}
