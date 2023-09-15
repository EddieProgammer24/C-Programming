# include <stdio.h>
# include <string.h>

int main(){


    int age;
    char name[25]; //bytes

    printf("\nWhat's your name?");
   // scanf("%s",&name);
   fgets(name, 25, stdin);
   name[strlen(name)-1]='\0';H

    printf("\nHow old are you?");
    scanf("%d", &age);

    printf("Hello %s, how are you?", name);
    printf("You are %d years old", age);

    return 0;
}