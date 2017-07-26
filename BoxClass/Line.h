#ifndef LINE_H
#define LINE_H

class Line{
public:
    void setLength(double len);
    double getLength(void);
    Line(double len);

private:
    double length;
};

Line::Line( double len)
{
    std::cout << "Object is being created, length = " << len << std::endl;
    length = len;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}



#endif
