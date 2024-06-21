#include "libs.h"

void draw();

int main(){
    int kx = 17;
    int ky = 9;

    int x = 7;
    int y = 4;

    char g = getch();

    while (g != 'e'){
        draw(x, y);
        g = getch();
        if(g == 'w'){
            if(y != 0){
                y--;
            }
        }
        if(g == 's'){
            if(y != ky){
                y++;
            }
        }
        if(g == 'a'){
            if(x != 0){
                x--;
            }
        }
        if(g == 'd'){
            if(x != kx){
                x++;
            }
        }
        system("cls");
    }

    //draw(x, y);
    printf("\n");
    system("pause");
    return 0;
}

void draw(int x, int y){
    for(int i = 0;i < 20;i++){
        printf("#");
    }
    printf("\n");
    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 19;j++){
            if(j == 0 || j == 18){
                printf("#");
            }
            if(i == y && j == x){
                printf("@");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i = 0;i < 20;i++){
        printf("#");
    }
}