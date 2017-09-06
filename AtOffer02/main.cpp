#include <iostream>

using namespace std;

void replaceSpace(char str[],int length) {
    if (str == NULL || length<=0){
        return;
    }
    int originalLength =0;
    int numberofBlack = 0;
    int i =0;
    while (str[i] != '\0'){
        ++originalLength;
        if (str[i] == ' '){
            ++numberofBlack;
        }
        ++i;
    }

    int newLength = originalLength+2*numberofBlack;
    if(newLength > length){
        return;
    }
    int indexOriginal = originalLength;
    int indexNew = newLength;
    while(indexOriginal >=0 && indexNew >indexOriginal){
        if (str[indexOriginal] == ' '){
            str[indexNew--] = '0';
            str[indexNew--] = '2';
            str[indexNew--] = '%';
        }else{
            str[indexNew--] = str[indexOriginal];
        }
        --indexOriginal;

    }
}


int main()
{   char a[20] = "Hello world! ";
    replaceSpace(a, 20);
    for (int i=0;i <20; i++){
      cout << a[i];
    }

    return 0;
}
