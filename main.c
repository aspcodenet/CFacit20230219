#include <stdio.h>
#include <stdbool.h>

// COPY BY VALUE
void Swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2=temp;
}

bool addBonus(int *salary, int age){
    if(age > 50 && *salary > 30000){
        *salary *= 1.1;
        return true;
    }
    return false;
}

void main(){
    int salary = 39000;
    bool b = addBonus(&salary,52);


    int tal1 = 99;
    int tal2 = 100;
    Swap(&tal1,&tal2);

}


