#include <SDL.h>
#include <iostream>
#include <string>

using namespace std;

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

int  main(int argc , char **argv)
{

	
	\

		/* initiate SDL with the subsystem you want to use ie SDL_INIT_VIDEO*/
		if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
		{
			cout << "SDL Fail initialized!!!\n";
			return -1;  // fail dont countinue.......
		}

		else
		{
			cout << "SDL initialized success!!!\n";
		}

		// create window , params are : window title  , window pos x , window pos y , width , height , window flags

		window = SDL_CreateWindow("007", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN  /* |  SDL_WINDOW_FULLSCREEN*/);


		if (window != NULL)
		{
			cout << "Window created!" << endl;

		}

		else
		{
			cout << "Failed to create the window!" << endl;
			return -1;
		}

		// create renderer to help[ draw stuff to the screen

	
		
		
		
		
		
		
		
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		if (renderer != NULL)
		{
			cout << " Renderer created!" << endl;
		}

		else {
			cout << " Renderer  Failed!" << endl;
			return -1;
		}
		// set drawing colour for the renderer , number are : RGBA( alfa , or transpararency ) .
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//set drawing colour
		SDL_SetRenderDrawColor(renderer, 100, 145, 165, 255);

		// clear screen with current draw color 
		SDL_RenderClear(renderer);


		// to do  draw stuff to renderer here , like game images , colours , ui whatever then get renderer to output to the window

		// change color to baby blue 

		SDL_SetRenderDrawColor(renderer, 0, 228, 255, 255);

		// make a SDL_React , to describe a rectangle  x , y , w , h
		SDL_Rect rect = { 100, 50, 300, 240 };
		SDL_RenderFillRect(renderer, &rect);


		SDL_RenderPresent(renderer);

		// SDL_Delay pause game for x many milliseconds

	
		
		

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		SDL_Delay(5000);


		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);





		// SHut down subsystems and clean up any it earlier in sdl_init

		SDL_Quit();
		
	system("pause");
	return 0;
}