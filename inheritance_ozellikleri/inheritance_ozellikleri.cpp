#include <iostream>
#include "classInheritance.h"

using namespace std;


int main()
{
    baseClass obj1(5);
    derivedClass obj2(4, 19);
    derivedClass obj3(obj2);

    //func overiding
    obj1.print();
    obj2.print();

    /*
   
    cout << "baseClass X: " << obj1.getX() << endl;
    cout << "derivedClass X: " << obj2.getX() << " Y: " << obj2.getY() << endl;

     CClass cObj;
    cObj.a=19;

    cout << "A: " << cObj.a << endl;

    */
    

   

}
