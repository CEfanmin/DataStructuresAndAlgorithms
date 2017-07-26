#include <iostream>
#include "Box.h"
#include "Line.h"

int pro1(){
	Box Box1(3.3, 1.2, 1.5);
	Box Box2(3.3, 1.2, 1.8);
	double volume =0.0;

    if(Box1.compare(Box2)){
        std::cout <<"Box2 is smaller than Box1"<<std::endl;
    }
    else{
        std::cout << "Box2 is equal to or larger than Box1" <<std::endl;
    }

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
    std::cout << "Total objects: " <<
              Box::getCount() << std::endl;
    return 0;
}

int pro2(){
   Line line(10.0);
   std::cout << "Length of line : " << line.getLength() <<std::endl;
   line.setLength(6.0);
   std::cout << "Length of line : " << line.getLength() <<std::endl;
   return 0;
}

void pro3(){
    Box Box3(10,10,10);
    Box *ptrBox;
    ptrBox = &Box3;
    std::cout<< "Box3 的体积：" << ptrBox->getVolume() <<std::endl;
}

int main(){
    Box fbox;
    pro1();
    //pro2();
    printWidth(fbox);  //friend function

    pro3();
    return 0;

}
