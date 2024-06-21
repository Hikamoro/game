#include "libs.h"

void draw();

int main(){
    int kx = 17;
    int ky = 9;

    int x = 7;
    int y = 4;

    char g = getch();
    if (g == 'e'){
        draw(x, y);
    }else{
        printf("nahui idi");
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