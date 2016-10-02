// T. Robert Ward
// June 30, 2013
// Includes, namespace and prototypes
#include "template.h"
using namespace AGK;
app App;

//constants for the screen resolution
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int IMAGE = 1;
const int ON = 1;
const int OFF = 2;

// Begin app, called once at the start
void app::Begin( void )
{
	//set the virtual resolution
	agk::SetVirtualResolution(SCREEN_WIDTH, SCREEN_HEIGHT);
	agk::LoadImage(ON,"mouse.png");
	agk::LoadImage(OFF,"cat.png");
	agk::CreateSprite(IMAGE,ON);
	agk::SetSpritePosition(IMAGE,100,100);
	agk::SetSpriteImage(IMAGE,ON);
	agk::SetWindowTitle("Mouse / Cat .... by Mouse");
	agk::Sync();

}

// Main loop, called every frame
void app::Loop ( void )
{
	float x = agk::GetRawMouseX();
	float y = agk::GetRawMouseY();

	if(agk::GetSpriteHit(x, y) == ON)
	{
		agk::SetSpriteImage(IMAGE,OFF);
	}
	else
		agk::SetSpriteImage(IMAGE,ON);

		agk::Sync();
		
}

// Called when the app ends
void app::End ( void )
{
}
