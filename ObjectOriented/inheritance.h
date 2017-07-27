#ifndef INHERITANCE
#define INHERITANCE
class Shape{
public:
    void setWidth(int w);
    void setHeight(int h);


protected:
    int wigth;
    int height;
};

class Rectangle:public Shape{
public:
    int getArea(){
        return (wigth * height);
    }
    void setLength(int l);
    int getVolume(int area);

private:
    int length;

};

void Shape::setWidth(int w){
    wigth = w;
}

void Shape::setHeight(int h){
    height = h;
}

void Rectangle::setLength(int l ){
    length = l;
}

int Rectangle::getVolume(int area){
    return area * length;
}

#endif // INHERITANCE
