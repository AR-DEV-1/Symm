#define SYMM
#define SYMM_IMPLEMENTATION
#define SYMM_GRAPHICS_IMPLEMENTATION
#define SYMM_AUDIO_IMPLEMENTATION
#include "include/symm.h"

int main() {
    symm_graphics::InitGraphics();
    symm_audio::InitAudio();
  // I will add other stuff here soon...

    // Main loop
    while (true) {
        symm_graphics::RenderFrame();
        symm_audio::PlaySound();
        // Handle other operations
    }

    return 0;
}
