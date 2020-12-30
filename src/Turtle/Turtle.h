#ifndef TURTLE_H_INCLUDED
#define TURTLE_H_INCLUDED

/** \brief A turtle that draws on the canvas as it move forward with its
 * tail down
 */
class Turtle
{
private:
  Point position;
  double direction;
  Color color;
  bool tail_up;
  double width;

public:
  /** \brief Default constructor. New turtle with tail up, position at origin,
   * facing left, default color black, and width 2
   *
   */
  Turtle();

  /** \brief Mutator for position
   *
   * \param new_point Point The new position
   * \return void
   *
   */
  void set_position(Point new_point);

  /** \brief Mutator for direction
   *
   * \param new_direction double The new direction the turtle will face
   * \return void
   *
   */
  void set_direction(double new_direction);

  /** \brief Mutator for color
   *
   * \param new_color Color The new color of this turtle
   * \return void
   *
   */
  void set_color(Color new_color);

  /** \brief Mutator for tail_up
   *
   * \param is_up bool The new state of tail_up
   * \return void
   *
   */
  void set_tail_up(bool is_up);

  /** \brief Mutator for width
   *
   * \param new_width double The new width
   * \return void
   *
   */
  void set_width(double new_width);


  /** \brief Accessor for position
   *
   * \return Point Current position
   *
   */
  Point get_position() const;

  /** \brief Accessor for direction
   *
   * \return Point Current direction
   *
   */
  double get_direction() const;

  /** \brief Accessor for color
   *
   * \return Point Current color
   *
   */
  Color get_color() const;

  /** \brief Accessor for tail_up
   *
   * \return Point Current state of turtle's tail
   *
   */
  bool get_tail_up() const;

  /** \brief Accessor for width
   *
   * \return Point Current line width
   *
   */
  double get_width() const;


  /** \brief Turtle move forward leaving a line if tail is down
   *
   * \param value double How far the turtle will move forward
   * \return void
   *
   */
  void move_forward(double value);

  /** \brief Turtle move to a specified point leaving a line if tail is down
   *
   * \param target Point The point the turtle need to move to
   * \return void
   *
   */
  void move_to(Point target);

  /** \brief Turtle turn to the left
   *
   * \param degree double How many degree the turtle should turn
   * \return void
   *
   */
  void turn_left(double degree);

  /** \brief Turtle turn to the right
   *
   * \param degree double How many degree the turtle should turn
   * \return void
   *
   */
  void turn_right(double degree);

  /** \brief Change turtle tail state to up
   *
   * \return void
   *
   */
  void pen_up();

  /** \brief Change turtle tail state to down
   *
   * \return void
   *
   */
  void pen_down();


  /** \brief Convert an angle value from degree to radian
   *
   * \param degree double The angle value needed to be convert
   * \return double The converted radical value
   *
   */
  double to_radical(double degree);

  /** \brief Set the new drawing color of GLUT. More convenient to use
   *
   * \param color Color The new color
   * \return void
   *
   */
  void set_new_color(Color color);

};

#endif // TURTLE_H_INCLUDED
