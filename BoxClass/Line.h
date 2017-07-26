#ifndef LINE_H
#define LINE_H

class Line{
public:
    void setLength(double len);
    double getLength(void);
    Line(double len);
    Line(const Line &obj);
    ~Line();


private:
    double length;
    int *ptr;
};

Line::Line( double len)
{
    std::cout << "Object is being created, length = " << len << std::endl;
    length = len;
}

Line::Line(const Line &obj){
    std::cout << "���ÿ������캯����Ϊָ�� ptr �����ڴ�" << std::endl;
    ptr = new int;
    *ptr = *obj.ptr;
}


Line::~Line(void)
{
    std::cout << "Object is being deleted" << std::endl;
    delete ptr;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return *ptr;
}

#endif
