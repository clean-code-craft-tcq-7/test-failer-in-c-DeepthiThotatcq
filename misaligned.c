#include <stdio.h>
#include <assert.h>
#include <string.h> 

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

typedef struct{
    int colorCode;
    const char *majorColor;
    const char *minorColor;
}colorPair;

colorPair getColorCode(int i, int j){
    colorPair colorPair;
    colorPair.colorCode = i * 5 + j;
    colorPair.majorColor = majorColor[i];
    colorPair.minorColor = minorColor[i];
    return colorPair;
}
int printColorMap() {
    int i = 0, j = 0;
    colorPair colorPair;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            colorPair = getColorCode(i, j);
            printf("%d | %s | %s\n", colorPair.colorCode, colorPair.majorColor, colorPair.minorColor);
        }
    }
    return i * j;
}


int main() {
    colorPair colorPair;
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    colorPair = getColorCode(0, 1);
    assert(colorPair.colorCode == 1);
    assert(strcmp(colorPair.majorColor, majorColor[0]) == 0);
    assert(strcmp(colorPair.minorColor, minorColor[1]) == 0);

    return 0;
}
