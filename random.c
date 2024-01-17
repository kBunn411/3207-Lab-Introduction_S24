#include "random.h"



char randchar(){

    char letters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int len = sizeof(letters) - 1;

    int random_num = rand() % len;

    char letter = letters[random_num];

    return letter;


}
