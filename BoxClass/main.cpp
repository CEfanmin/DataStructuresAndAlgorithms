#include <iostream>
#include "Box.h"
#include "Line.h"

int pro1(){
	Box Box1;
	Box Box2;
	double volume =0.0;

    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    volume = Box1.getVolume();
    std::cout << "Box1 的体积：" << volume <<std::endl;

    volume = Box2.getVolume();
    std::cout << "Box2 的体积：" << volume <<std::endl;
    return 0;
}

int pro2(){
   Line line(10.0);
   std::cout << "Length of line : " << line.getLength() <<std::endl;
   line.setLength(6.0);
   std::cout << "Length of line : " << line.getLength() <<std::endl;
   return 0;
}

int main(){
    pro1();
    pro2();

}
