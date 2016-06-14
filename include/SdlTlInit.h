#ifndef SDLTLINIT_H
#define SDLTLINIT_H


enum class InitFlags {
    SDL_INIT_TIMER, SDL_INIT_AUDIO, SDL_INIT_VIDEO, SDL_INIT_JOYSTICK,
    SDL_INIT_HAPTIC, SDL_INIT_GAMECONTROLLER, SDL_INIT_EVENTS, SDL_INIT_EVERYTHING,
    SDL_INIT_NOPARACHUTE
};

template <typename T>
class SdlTlInit {
    public:
        SdlTlInit() {

        }
};

#endif


