#ifndef SYMM_H
#define SYMM_H

#ifdef SYMM_IMPLEMENTATION
#define SYMM_API extern "C"
#else
#define SYMM_API
#endif

// Define the graphics module
#ifdef SYMM_GRAPHICS_IMPLEMENTATION
namespace symm_graphics {
    SYMM_API void InitGraphics();
    SYMM_API void RenderFrame();
    SYMM_API void createObject();
    SYMM_API void renderShaders();
    SYMM_API void SymmCreateShaders();
}
#endif

// Define the audio module
#ifdef SYMM_AUDIO_IMPLEMENTATION
namespace symm_audio {
    SYMM_API void InitAudio();
    SYMM_API void PlaySound();
    SYMM_API void replayAudio();
    SYMM_API void AudioTimestamp();
}
#endif

#endif // SYMM_H

