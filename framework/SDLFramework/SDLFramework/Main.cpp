#include <iostream>
#include "Config.h"
#include "FWApplication.h"
#include <SDL_events.h>
#include "SDL_timer.h"
#include <time.h>
#include "Cow.h"
#include "Node.h"
#include "Graph.h"

int main(int args[])
{
	//auto window = Window::CreateSDLWindow();
	auto application = new FWApplication();
	if (!application->GetWindow())
	{
		LOG("Couldn't create window...");
		return EXIT_FAILURE;
	}
	
	application->SetTargetFPS(60);
	application->SetColor(Color(255, 10, 40, 255));
	
	Cow * moe = new Cow();
	Graph * graph = new Graph();
	while (application->IsRunning())
	{
		application->StartTick();

		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			switch (event.type)
			{
			case SDL_QUIT:
				application->Quit();
				break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym){
				case false:
					break;

				default:
					break;
				}
			}
		}
		
		application->SetColor(Color(0, 0, 0, 255));
		for (int i = 0; i < graph->getGraphSize(); i++){
			application->AddRenderable(graph->getNode(i));
		}
		for (int i = 0; i < graph->getEdgesSize(); i++){
			Edge * E = graph->getEdge(i);
			application->DrawLine(E->mXA, E->mYA, E->mXB, E->mYB);
		}

		application->AddRenderable(moe);		
		// For the background
		application->SetColor(Color(255, 255, 255, 255));

		application->UpdateGameObjects();
		application->RenderGameObjects();
		application->EndTick();
	}
		
	return EXIT_SUCCESS;
}