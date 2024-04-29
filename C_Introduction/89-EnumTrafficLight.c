#include <stdio.h>
#include <unistd.h>

enum TrafficLight { Red, Yellow, Green };

int main() {
    while (1) {
        printf("Red Light\n");
        sleep(5);

        printf("Yellow Light\n");
        sleep(2);

        printf("Green Light\n");
        sleep(5);
    }

    return 0;
}