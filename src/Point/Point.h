#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

/** \brief Cartesian points in 2D
 *
 * @author John Neitzke
 * @version 20 November 2019
 *
 */
class Point
{
private:
  double x;
  double y;
public:
  /** \brief Null constructor, sets to origin
   *
   */
  Point();

  /** \brief general constructor
  * @param x_coordinate
  * @param y_coordinate
  */
  Point (double x_coordinate, double y_coordinate);

  /** \brief accessor for x-coordinate
  * @return x value of point
  */
  double get_x_coordinate();

  /** \brief accessor for y-coordinate
  * @return y value of point
  */
  double get_y_coordinate();

  /** \brief mutator for x-coordinate
  * @param new_x new x value
  */
  void set_x_coodinate (double new_x);

  /** \brief mutator for y-coordinate
  * @param new_y new y value
  */
  void set_y_coordinate (double new_y);

  /** \brief mutator for x and y coordinates
  * @param new_x new x value
  * @param new_y new y value
  */
  void set_coordinates (double new_x, double new_y);
};


#endif // POINT_H_INCLUDED
