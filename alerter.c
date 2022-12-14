#include <stdio.h>
#include <assert.h>

void formatPrintfInputColorMap (int majorNumberIndex, int minorNumberIndex, const char* recvMajorColor, const char* recvMinorColor)
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    bool isSingleDigit = true;
    
    assert(majorColor[majorNumberIndex] == recvMajorColor);
    assert(minorColor[minorNumberIndex] == recvMinorColor);
    
    isSingleDigit = (majorNumberIndex * minorNumberIndex) / 10;
    
    assert(isSingleDigit == 1);
}

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
            formatPrintfInputColorMap(i, j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
