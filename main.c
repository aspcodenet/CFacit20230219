#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

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

void titleCase(char *txt){
    bool beforeWasSpace = true;

    for(int i = 0; i < strlen(txt); i++){
        if(beforeWasSpace)
            txt[i] = toupper(txt[i]);
        if(txt[i] == ' ')
            beforeWasSpace = true;
        else
            beforeWasSpace = false;
    }
}

void main(){
    char s[100] = "stefan holmberg heter jag";
    titleCase(s);
    printf("%s\n",s);

    int salary = 39000;
    bool b = addBonus(&salary,52);


    int tal1 = 99;
    int tal2 = 100;
    Swap(&tal1,&tal2);

}


