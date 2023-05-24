#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main () {
char fullword[200] ="Hello World";
int count;
int spacecount = 0;
for (count = 0 ; count < strlen(fullword) ; count++) {
        if (fullword[count] == ' ') {
                spacecount++;
        }
}
printf("The number of spaces in the string '%s' is %d\n",fullword,spacecount);
return 0;
}
