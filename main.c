#include "src/autoload.h"

int main(int argc, char **argv)
{
	initAllegro();
	initBitmaps();
	initSound();

	while (game)
	{
		while (opening)
			initOpening();

		while (start)
			initStart();

		initObjects();

		while (playing)
			initPlaying();

		guardaRecorde();

		while (end)
			initEnd();
	}

	destroy();
	return 0;
}