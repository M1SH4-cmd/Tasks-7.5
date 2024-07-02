#include <iostream>
using namespace std;

int main() {
    int length;
    int signsAmount;

    printf("Enter the length of kolontitul: ");
    cin >> length;
    printf("Enter signs amount: ");
    cin >> signsAmount;

    length -= signsAmount;

    for(int i = 0; i < length; i++){
        if(i < length / 2 - signsAmount + 1){
            printf("~");
        }
        if(i == length / 2){
            for(int j = 0; j < signsAmount; j++){
                printf("!");
            }
        }
        if(i > length / 2 - signsAmount){
            printf("~");
        }
    }
}