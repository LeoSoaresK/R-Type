// Bibliotecas Allegro

#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

// Includes nativos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Includes de configuracao de ambiente
#include "config/globalVariables.h"
#include "config/allegro.h"
#include "config/random.h"
#include "config/bitmaps.h"
#include "config/sound.h"

// Includes de objetos
#include "objects/nave.h"
#include "objects/bloco.h"
#include "objects/tiro.h"
#include "objects/inimigos.h"
#include "objects/interface.h"

// Includes de sprites
#include "sprites/Asteroide/asteroide.h"
#include "sprites/Tiro/tiro.h"
#include "sprites/Nave/nave.h"
#include "sprites/Inimigos/inimigos.h"
#include "sprites/Explosao/explosao.h"
#include "sprites/Interface/interface.h"
#include "sprites/Abertura/abertura.h"

// Includes de sons
#include "sound/effects/effects.h"

// Includes de execucao do jogo
#include "game/opening.h"