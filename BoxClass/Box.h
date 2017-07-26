#ifndef BOX_H
#define BOX_H

class Box
{
public:
	double getVolume(void);
	void setLength(double len);
	void setBreadth(double bre);
	void setHeight(double hei);
    int compare(Box box);
	Box(double l, double b, double h);

	static int objectCount;
    static int getCount();
	//~Box();

    friend void printWidth(Box fbox);

private:
    double length;
    double breadth;
    double height;
};

inline double Box::getVolume(void){
	return length * breadth * height;
}

int Box::objectCount = 0;

Box::Box(double l=2, double b=2, double h=2){
    std::cout <<"Constructor called" <<std::endl;
    length = l;
    breadth = b;
    height = h;

    objectCount++;
}

int Box::compare(Box box){
    return this->getVolume() > box.getVolume(); //ÿһ��������ͨ�� this ָ���������Լ��ĵ�ַ,
                                                //����������ָ����ö���
}

int Box::getCount(){
    return objectCount;
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

void printWidth(Box fbox){
    std::cout << "Length of box : "
            << fbox.length <<std::endl;
}

#endif
