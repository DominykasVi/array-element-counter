#include <stdio.h>

int main() {
    int n =5;
    int array[5] = {10, 7, 3 ,3, 8 };

    int number[n];//puts element
    int howMany[n];//puts how many repetitions
    howMany [0] = array[0];
    int counter = 0;

    for(int i = 0; i < n; i++){
        int savePosition = -1;
        if(i == 0){
            number[0] = array[0];
            howMany [0] = 1;
            ++counter;
        } else {
            for (int j = 0; j < counter; ++j) {
                if (array[i] == number[j]) {
                    savePosition = j;
                }
            }


            if (savePosition >= 0) {
                howMany[savePosition]++;
            } else {
                number[counter] = array[i];
                howMany[counter] = 1;
                ++counter;
            }
        }
    }

    for (int i =0; i< counter; i++){
       printf("%d %d\n", number[i], howMany[i]);
    }
}
