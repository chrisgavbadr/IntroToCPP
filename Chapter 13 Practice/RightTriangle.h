#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

class RightTriangle {
private:
    double m_leg1;
    double m_leg2;
    double m_hypotenuse;

public:
    RightTriangle();

    void setLeg1(double);

    void setLeg2(double);

    void setHypotenuse(double);

    bool verifyRightTriangle(double, double, double);

    double getLeg1() const { return m_leg1; }

    double getLeg2() const { return m_leg2; }

    double getHypotenuse() const { return m_hypotenuse; }

    double getArea() const { return (m_leg1 * m_leg2) / 2; }

    double getPerimeter() const { return m_leg1 + m_leg2 + m_hypotenuse; }
};

#endif
