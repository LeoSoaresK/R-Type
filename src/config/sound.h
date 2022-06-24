ALLEGRO_SAMPLE *somTiro;
ALLEGRO_SAMPLE *somTiroCarregado;
ALLEGRO_SAMPLE *somCharge;

ALLEGRO_SAMPLE *somEnter;

ALLEGRO_SAMPLE *explosao;

ALLEGRO_SAMPLE *musicaAbertura;
ALLEGRO_SAMPLE_INSTANCE *musicaAbertura_Instance;
ALLEGRO_SAMPLE *musicaJogo;
ALLEGRO_SAMPLE_INSTANCE *musicaJogo_Instance;
ALLEGRO_SAMPLE *musicaEnd;
ALLEGRO_SAMPLE_INSTANCE *musicaEnd_Instance;

// ALLEGRO_SAMPLE *explosaoInimigo;

void initSound()
{
    al_reserve_samples(5);

    somTiro = al_load_sample("src/sound/effects/laser.wav");
    somTiroCarregado = al_load_sample("src/sound/effects/laser5.wav");
    somCharge = al_load_sample("src/sound/effects/laser2.wav");

    somEnter = al_load_sample("src/sound/music/enter.mp3");

    explosao = al_load_sample("src/sound/effects/explosaoNave.wav");

    // explosaoInimigo = al_load_sample("explosaoInimigo.wav");

    musicaAbertura = al_load_sample("src/sound/music/musicaAbertura.mp3");
    musicaAbertura_Instance = al_create_sample_instance(musicaAbertura);
    al_set_sample_instance_playmode(musicaAbertura_Instance, ALLEGRO_PLAYMODE_LOOP);
    al_attach_sample_instance_to_mixer(musicaAbertura_Instance, al_get_default_mixer());

    musicaJogo = al_load_sample("src/sound/music/musicaJogo.mp3");
    musicaJogo_Instance = al_create_sample_instance(musicaJogo);
    al_set_sample_instance_playmode(musicaJogo_Instance, ALLEGRO_PLAYMODE_LOOP);
    al_set_sample_instance_gain(musicaJogo_Instance, 0.3);
    al_attach_sample_instance_to_mixer(musicaJogo_Instance, al_get_default_mixer());

    musicaEnd = al_load_sample("src/sound/music/musicaEnd.mp3");
    musicaEnd_Instance = al_create_sample_instance(musicaEnd);
    al_set_sample_instance_playmode(musicaAbertura_Instance, ALLEGRO_PLAYMODE_ONCE);
    al_set_sample_instance_gain(musicaEnd_Instance, 2.0);
    al_attach_sample_instance_to_mixer(musicaEnd_Instance, al_get_default_mixer());
}