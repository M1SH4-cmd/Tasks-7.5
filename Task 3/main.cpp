#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 0;
    int maxY = -20;
    int maxX = -20;
    char direction;
    printf("Set start position (x y): \n");
    cin >> x >> y;
    while (true) {
        printf("Set the direction (W, S, A, D and type N to exit): \n");
        cin >> direction;
        if(direction == 'W' && y < abs(maxY)){
            y += 1;
        }else if(direction == 'S' && y > maxY){
            y -= 1;
        }else if(direction == 'A' && x > maxX){
            x -= 1;
        }else if(direction == 'D' && x < abs(maxX)){
            x += 1;
        }else if(y > maxY || x > maxX){
            printf("Borderline reached!\n");
        }
        printf("Drone position: (%d, %d)\n", x, y);
        if (direction == 'N') {
            break;
        }
    }
}
