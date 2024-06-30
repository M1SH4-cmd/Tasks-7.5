#include <iostream>
using namespace std;

int main() {
    int width;
    int length;

    printf("Enter width and length: \n");
    cin >> width >> length;

    for(int i = 0; i < length; i++){
        if(i == 0){
            printf("|");
            for(int j = 0; j < width; j++){
                printf(" - ");
            }
            printf("|\n");
        }
        if(i < length - 2) {
            printf("|");
            for (int d = 0; d < width; d++) {
                printf("   ");
            }
            printf("|\n");
        }
        if(i == length - 1){
            printf("|");
            for(int j = 0; j < width; j++){
                printf(" - ");
            }
            printf("|");
        }
    }
}