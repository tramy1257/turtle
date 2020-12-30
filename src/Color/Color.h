#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

/** \brief RGB color
 */
class Color
{
private:
  double r;
  double g;
  double b;

public:
  /** \brief Default constructor, default color is black
   *
   */
  Color();

  /** \brief General constructor, set the RGB scale to the arguments values
   *
   * \param _r double
   * \param _g double
   * \param _b double
   *
   */
  Color(double _r, double _g, double _b);

  /** \brief Accessor for r
   *
   * \return double r value of color
   *
   */
  double get_r() const;

  /** \brief Accessor for g
   *
   * \return double g value of color
   *
   */
  double get_g() const;

  /** \brief Accessor for b
   *
   * \return double b value of color
   *
   */
  double get_b() const;

  /** \brief Clamp the color value to be within 0 and 1.
   * If value < 0, clamp value to 0. If value > 1, clamp value to 1.
   *
   * \param value double The number that needs to be clamped
   * \return double The clamped number
   *
   */
  double clamp(double value);

};

#endif // COLOR_H_INCLUDED
