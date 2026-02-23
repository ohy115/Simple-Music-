#include <windows.h>
#include <stdio.h>

int main() {
    int duration = 400;

    // Note frequencies
    int notes[14] = {
        0,      // index 0 unused
        261,    // 1 C4
        277,    // 2 C#4
        293,    // 3 D4
        311,    // 4 D#4
        329,    // 5 E4
        349,    // 6 F4
        369,    // 7 F#4
        392,    // 8 G4
        415,    // 9 G#4
        440,    // 10 A4
        466,    // 11 A#4
        493,    // 12 B4
        523     // 13 C5
    };

    int input;

    printf("Enter notes (1-13, 0 to end):\n");

    while (1) {
        scanf("%d", &input);

        if (input == 0)
            break;

        if (input >= 1 && input <= 13) {
            Beep(notes[input], duration);
        } else {
            printf("Invalid note!\n");
        }
    }

    return 0;
}