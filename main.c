/*

    Filename        - main.c

    Description     - Main file of GameBoy template project

*/
#include <gb/gb.h>

void main(void)
{
    // Loop forever
    while(1) {
		// Game main loop processing goes here

		// Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}
