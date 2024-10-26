class Wektor2D
{
public:
    Wektor2D() : x_value(0), y_value(0) {}

    Wektor2D(double x, double y) : x_value(x), y_value(y) {}

    Wektor2D operator+(Wektor2D& v1)
    {
        return Wektor2D(x_value + v1.x_value, y_value + v1.y_value);
    }

    double operator*(Wektor2D& v1) { return x_value * v1.x_value + y_value * v1.y_value; }

    void setX(int a) { x_value = a; }

    void setY(int a) { y_value = a; }

    double getX() { return x_value; }

    double getY() { return y_value; }

private:
    double x_value;
    double y_value;
};
