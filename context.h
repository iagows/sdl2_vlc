#ifndef CONTEXT_H
#define CONTEXT_H

extern "C"
{
    #include <SDL.h>
}

class Context
{
public:
    Context();
    ~Context();

    SDL_Renderer *renderer;
    SDL_Texture *texture;
    SDL_mutex *mutex;
    int n;
};

#endif // CONTEXT_H
