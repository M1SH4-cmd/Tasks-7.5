#include <iostream>
using namespace std;

int main() {
    int x;
    int y;

    printf("Enter x and y values: \n");
    cin >> x >> y;

    for(int i = 0; i < y; i++){
        if(i == 0){
            for(int j = 0; j < x; j++){
                printf("   ");
                if(j == x / 2){
                    printf("^");
                }
            }
            printf("\n");
        }
        if(i < y / 2){
            for(int j = 0; j < x; j++){
                printf("   ");
                if(j == x / 2){
                    printf("|");
                }
            }
            printf("\n");
        }
        if(i == y / 2){
            for(int j = 0; j <= x; j++){
                printf(" - ");
                if(j == x / 2){
                    printf("+");
                }
                if(j == x){
                    printf(">");
                }
            }
            printf("\n");
        }
        if(i > y / 2){
            for(int j = 0; j < x; j++){
                printf("   ");
                if(j == x / 2){
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}
