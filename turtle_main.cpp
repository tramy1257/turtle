/**\file
 * \brief  Control a turtle to draw on the canvas
 * \author My Vu
 * \version 12/11/2019
 */

#include <GL/glut.h>
#include "math.h"
#include "./src/Color/Color.h"
#include "./src/Point/Point.h"
#include "./src/Turtle/Turtle.h"


/** \file
* \brief Utility to set world window, an aligned rectangle
* @param left x coordinate of left side
* @param right x coordinate of right side
* @param bottom y coordinate of bottom side
* @param top y coordinate of top side
*/
void set_window (double left, double right, double bottom, double top);

/** \brief Controlling the turtle here
 *
 * \return void
 *
 */
void my_display();

/** \brief Draw one leg of the turtle drawing
 *
 * \param leg_turtle Turtle& The turtle intended to use to draw the leg
 * \return void
 *
 */
void draw_leg(Turtle &leg_turtle);

/** \brief Main program:  initializations and enter loop
* @param  argc a number.  Required but not used
* @param  argv a string pointer.  Required but not used
* @return  0 for normal
*
*/
int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowPosition(0, 0);
  glutInitWindowSize(1200,800);

  glutCreateWindow("Turtle Program");

  glutDisplayFunc(my_display);

  glClearColor (0.7608, 0.702, 0.502, 1.0); // Set background to sand color
  glutMainLoop();
  return 0;
}// end main


void my_display()
{
  set_window (0, 1200, 0, 800);
  glClear(GL_COLOR_BUFFER_BIT);

  const Color DARK_PURPLE(0.3961, 0.3255, 0.3373);
  const Color PURPLE(0.502, 0.2784, 0.3686);
  const Color DARK_GREEN(0.3922, 0.4353, 0.2941);
  const Color GREEN(0.3843, 0.5804, 0.3765);
  const Color LIGHT_GREEN(0.4627, 0.6902, 0.0157);

  Turtle leg;
  Turtle carapace;
  Turtle head;

  carapace.set_color(GREEN);
  carapace.set_width(5);
  carapace.move_to(Point(600, 300));

  // Draw 6 outer carapaces
  carapace.turn_right(90);
  for(int j = 0 ; j < 6 ; ++j)
  {
    carapace.move_forward(80);
    carapace.turn_left(90);
    carapace.move_forward(40);
    carapace.pen_down();
    for(int i = 0 ; i < 6 ; ++i)
    {
      carapace.turn_right(60);
      carapace.move_forward(80);
    }
    carapace.pen_up();
    carapace.move_forward(-40);
    carapace.turn_right(90);
    carapace.move_forward(-80);
    carapace.turn_right(60);
  }

  // Draw the central carapace
  carapace.set_color(LIGHT_GREEN);
  carapace.turn_left(150);
  carapace.move_forward(80);
  carapace.turn_right(60);
  carapace.pen_down();
  for(int i = 0 ; i < 6 ; ++i)
  {
    carapace.turn_right(60);
    carapace.move_forward(80);
  }

  // Draw the outline of the shell
  carapace.set_color(DARK_GREEN);
  carapace.turn_left(60);
  carapace.pen_up();
  carapace.move_forward(185);
  carapace.turn_right(60);
  carapace.pen_down();
  for(int i = 0 ; i < 6 ; ++i)
  {
    carapace.turn_right(60);
    carapace.move_forward(265);
  }

  leg.set_color(PURPLE);
  leg.set_width(5);

  // upper left leg
  leg.move_to(Point(207, 528));
  leg.turn_left(60);
  leg.pen_down();
  draw_leg(leg);

  // Lower left leg
  leg.move_to(Point(207, 72));
  leg.turn_left(105);
  leg.pen_down();
  draw_leg(leg);

  // Lower right leg
  leg.move_to(Point(993, 72));
  leg.turn_left(165);
  leg.pen_down();
  draw_leg(leg);

  // upper right leg
  leg.move_to(Point(993, 528));
  leg.turn_left(105);
  leg.pen_down();
  draw_leg(leg);

  // Draw the head
  head.set_color(DARK_PURPLE);
  head.set_width(5);
  head.move_to(Point(540, 540));
  head.pen_down();
  for(int i = 0 ; i < 5 ; ++i)
  {
    head.turn_right(72);
    head.move_forward(120);
  }

  glutSwapBuffers();

}

void draw_leg(Turtle &leg_turtle)
{
  leg_turtle.turn_left(45);
  leg_turtle.move_forward(75 * pow(2, 0.5));
  leg_turtle.turn_left(65);
  leg_turtle.move_forward(150);
  leg_turtle.turn_left(70);
  leg_turtle.move_forward(47.393957);
  leg_turtle.turn_left(70);
  leg_turtle.move_forward(150);
  leg_turtle.turn_left(65);
  leg_turtle.move_forward(75 * pow(2, 0.5));
  leg_turtle.pen_up();
}

void set_window (double left, double right, double bottom, double top)
{
  glMatrixMode (GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D (left, right, bottom, top);
}
