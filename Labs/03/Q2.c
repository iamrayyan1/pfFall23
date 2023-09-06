#include <stdio.h>
 int main()
 {
    int h,l,w,vol;
 
    printf("Enter Height: ");
    scanf(" %d",&h );
    printf("Enter Length: ");
    scanf(" %d",&l );
    printf("Enter Width: ");
    scanf(" %d",&w );
    vol = h*l*w;
    printf("Volume of a container is: %d\n" ,vol);
 
 return 1;
 }
