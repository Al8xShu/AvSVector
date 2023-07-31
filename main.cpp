#include <iostream>
#include "avsvector.h"

using namespace std;

int main(int argc, char *argv[])
{
    avsVector<char> alphabeth;

    for (int i = 97; i < 124; i++) {
        alphabeth.pushBack(i);
    }

    alphabeth.popBack();
    alphabeth.display();

    cout << "Vector size = " << alphabeth.size() << endl;
    cout << "Vector capacity = " << alphabeth.getCapacity() << endl;

    alphabeth.clear();

    for (int i = 65; i < 92; i++) {
        alphabeth.pushBack(i);
    }

    alphabeth.popBack();

    alphabeth.insert(56, 24);
    alphabeth.insert(56, 25);

    alphabeth.display();

    cout << alphabeth.getValue(24) << alphabeth.getValue(25) << endl;

    /*
     *  results:
     *  a b c d e f g h i j k l m n o p q r s t u v w x y z
     *  Vector size = 26
     *  Vector capacity = 32
     *  A B C D E F G H I J K L M N O P Q R S T U V W X 8 8
     *  88
    */

    return EXIT_SUCCESS;

}
