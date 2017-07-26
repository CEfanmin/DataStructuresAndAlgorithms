#ifndef BOX_H
#define BOX_H

class Box
{
public:
	double length;
	double breadth;
	double height;

	double getVolume(void);
	void setLength(double len);
	void setBreadth(double bre);
	void setHeight(double hei);
};

inline double Box::getVolume(void){
	return length * breadth * height;
}

void Box::setHeight(double hei){
	height =  hei;
}

void Box::setBreadth(double bre){
	breadth = bre;
}

void Box::setLength(double len){
	length = len;
}

#endif
