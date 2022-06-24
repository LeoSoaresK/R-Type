#include "src/autoload.h"

// MAIN ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main(int argc, char **argv)
{

	initAllegro();

	// BITMAPS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// Abertura --------------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *abertura0 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-0.png");
	ALLEGRO_BITMAP *abertura1 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-1.png");
	ALLEGRO_BITMAP *abertura2 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-2.png");
	ALLEGRO_BITMAP *abertura3 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-3.png");
	ALLEGRO_BITMAP *abertura4 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-4.png");
	ALLEGRO_BITMAP *abertura5 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-5.png");
	ALLEGRO_BITMAP *abertura6 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-6.png");
	ALLEGRO_BITMAP *abertura7 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-7.png");
	ALLEGRO_BITMAP *abertura8 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-8.png");
	ALLEGRO_BITMAP *abertura9 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-9.png");
	ALLEGRO_BITMAP *abertura10 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-10.png");
	ALLEGRO_BITMAP *abertura11 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-11.png");
	ALLEGRO_BITMAP *abertura12 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-12.png");
	ALLEGRO_BITMAP *abertura13 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-13.png");
	ALLEGRO_BITMAP *abertura14 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-14.png");
	ALLEGRO_BITMAP *abertura15 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-15.png");
	ALLEGRO_BITMAP *abertura16 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-16.png");
	ALLEGRO_BITMAP *abertura17 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-17.png");
	ALLEGRO_BITMAP *abertura18 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-18.png");
	ALLEGRO_BITMAP *abertura19 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-19.png");
	ALLEGRO_BITMAP *abertura20 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-20.png");
	ALLEGRO_BITMAP *abertura21 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-21.png");
	ALLEGRO_BITMAP *abertura22 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-22.png");
	ALLEGRO_BITMAP *abertura23 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-23.png");
	ALLEGRO_BITMAP *abertura24 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-24.png");
	ALLEGRO_BITMAP *abertura25 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-25.png");
	ALLEGRO_BITMAP *abertura26 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-26.png");
	ALLEGRO_BITMAP *abertura27 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-27.png");
	ALLEGRO_BITMAP *abertura28 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-28.png");
	ALLEGRO_BITMAP *abertura29 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-28.png");
	ALLEGRO_BITMAP *abertura30 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-30.png");
	ALLEGRO_BITMAP *abertura31 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-31.png");
	ALLEGRO_BITMAP *abertura32 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-32.png");
	ALLEGRO_BITMAP *abertura33 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-33.png");
	ALLEGRO_BITMAP *abertura34 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-34.png");
	ALLEGRO_BITMAP *abertura35 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-35.png");
	ALLEGRO_BITMAP *abertura36 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-36.png");
	ALLEGRO_BITMAP *abertura37 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-37.png");
	ALLEGRO_BITMAP *abertura38 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-38.png");
	ALLEGRO_BITMAP *abertura39 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-39.png");
	ALLEGRO_BITMAP *abertura40 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-40.png");
	ALLEGRO_BITMAP *abertura41 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-41.png");
	ALLEGRO_BITMAP *abertura42 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-42.png");
	ALLEGRO_BITMAP *abertura43 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-43.png");
	ALLEGRO_BITMAP *abertura44 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-44.png");
	ALLEGRO_BITMAP *abertura45 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-45.png");
	ALLEGRO_BITMAP *abertura46 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-46.png");
	ALLEGRO_BITMAP *abertura47 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-47.png");
	ALLEGRO_BITMAP *abertura48 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-48.png");
	ALLEGRO_BITMAP *abertura49 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-49.png");
	ALLEGRO_BITMAP *abertura50 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-50.png");
	ALLEGRO_BITMAP *abertura51 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-51.png");
	ALLEGRO_BITMAP *abertura52 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-52.png");
	ALLEGRO_BITMAP *abertura53 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-53.png");
	ALLEGRO_BITMAP *abertura54 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-54.png");
	ALLEGRO_BITMAP *abertura55 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-55.png");
	ALLEGRO_BITMAP *abertura56 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-56.png");
	ALLEGRO_BITMAP *abertura57 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-57.png");
	ALLEGRO_BITMAP *abertura58 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-58.png");
	ALLEGRO_BITMAP *abertura59 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-59.png");
	ALLEGRO_BITMAP *abertura60 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-60.png");
	ALLEGRO_BITMAP *abertura61 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-61.png");
	ALLEGRO_BITMAP *abertura62 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-62.png");
	ALLEGRO_BITMAP *abertura63 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-63.png");
	ALLEGRO_BITMAP *abertura64 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-64.png");
	ALLEGRO_BITMAP *abertura65 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-65.png");
	ALLEGRO_BITMAP *abertura66 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-66.png");
	ALLEGRO_BITMAP *abertura67 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-67.png");
	ALLEGRO_BITMAP *abertura68 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-68.png");
	ALLEGRO_BITMAP *abertura69 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-69.png");
	ALLEGRO_BITMAP *abertura70 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-70.png");
	ALLEGRO_BITMAP *abertura71 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-71.png");
	ALLEGRO_BITMAP *abertura72 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-72.png");
	ALLEGRO_BITMAP *abertura73 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-73.png");
	ALLEGRO_BITMAP *abertura74 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-74.png");
	ALLEGRO_BITMAP *abertura75 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-75.png");
	ALLEGRO_BITMAP *abertura76 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-76.png");
	ALLEGRO_BITMAP *abertura77 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-77.png");
	ALLEGRO_BITMAP *abertura78 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-78.png");
	ALLEGRO_BITMAP *abertura79 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-79.png");
	ALLEGRO_BITMAP *abertura80 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-80.png");
	ALLEGRO_BITMAP *abertura81 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-81.png");
	ALLEGRO_BITMAP *abertura82 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-82.png");
	ALLEGRO_BITMAP *abertura83 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-83.png");
	ALLEGRO_BITMAP *abertura84 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-84.png");
	ALLEGRO_BITMAP *abertura85 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-85.png");
	ALLEGRO_BITMAP *abertura86 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-86.png");
	ALLEGRO_BITMAP *abertura87 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-87.png");
	ALLEGRO_BITMAP *abertura88 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-88.png");
	ALLEGRO_BITMAP *abertura89 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-89.png");
	ALLEGRO_BITMAP *abertura90 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-90.png");
	ALLEGRO_BITMAP *abertura91 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-91.png");
	ALLEGRO_BITMAP *abertura92 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-92.png");

	void desenhaAbertura()
	{
		int frameAbertura = al_get_timer_count(timerAbertura) % 93;

		switch (frameAbertura)
		{
		case 0:
			al_draw_bitmap(abertura0, 0, 0, 0);
			break;
		case 1:
			al_draw_bitmap(abertura1, 0, 0, 0);
			break;
		case 2:
			al_draw_bitmap(abertura2, 0, 0, 0);
			break;
		case 3:
			al_draw_bitmap(abertura3, 0, 0, 0);
			break;
		case 4:
			al_draw_bitmap(abertura4, 0, 0, 0);
			break;
		case 5:
			al_draw_bitmap(abertura5, 0, 0, 0);
			break;
		case 6:
			al_draw_bitmap(abertura6, 0, 0, 0);
			break;
		case 7:
			al_draw_bitmap(abertura7, 0, 0, 0);
			break;
		case 8:
			al_draw_bitmap(abertura8, 0, 0, 0);
			break;
		case 9:
			al_draw_bitmap(abertura9, 0, 0, 0);
			break;
		case 10:
			al_draw_bitmap(abertura10, 0, 0, 0);
			break;
		case 11:
			al_draw_bitmap(abertura11, 0, 0, 0);
			break;
		case 12:
			al_draw_bitmap(abertura12, 0, 0, 0);
			break;
		case 13:
			al_draw_bitmap(abertura13, 0, 0, 0);
			break;
		case 14:
			al_draw_bitmap(abertura14, 0, 0, 0);
			break;
		case 15:
			al_draw_bitmap(abertura15, 0, 0, 0);
			break;
		case 16:
			al_draw_bitmap(abertura16, 0, 0, 0);
			break;
		case 17:
			al_draw_bitmap(abertura17, 0, 0, 0);
			break;
		case 18:
			al_draw_bitmap(abertura18, 0, 0, 0);
			break;
		case 19:
			al_draw_bitmap(abertura19, 0, 0, 0);
			break;
		case 20:
			al_draw_bitmap(abertura20, 0, 0, 0);
			break;
		case 21:
			al_draw_bitmap(abertura21, 0, 0, 0);
			break;
		case 22:
			al_draw_bitmap(abertura22, 0, 0, 0);
			break;
		case 23:
			al_draw_bitmap(abertura23, 0, 0, 0);
			break;
		case 24:
			al_draw_bitmap(abertura24, 0, 0, 0);
			break;
		case 25:
			al_draw_bitmap(abertura25, 0, 0, 0);
			break;
		case 26:
			al_draw_bitmap(abertura26, 0, 0, 0);
			break;
		case 27:
			al_draw_bitmap(abertura27, 0, 0, 0);
			break;
		case 28:
			al_draw_bitmap(abertura28, 0, 0, 0);
			break;
		case 29:
			al_draw_bitmap(abertura29, 0, 0, 0);
			break;
		case 30:
			al_draw_bitmap(abertura30, 0, 0, 0);
			break;
		case 31:
			al_draw_bitmap(abertura31, 0, 0, 0);
			break;
		case 32:
			al_draw_bitmap(abertura32, 0, 0, 0);
			break;
		case 33:
			al_draw_bitmap(abertura33, 0, 0, 0);
			break;
		case 34:
			al_draw_bitmap(abertura34, 0, 0, 0);
			break;
		case 35:
			al_draw_bitmap(abertura35, 0, 0, 0);
			break;
		case 36:
			al_draw_bitmap(abertura36, 0, 0, 0);
			break;
		case 37:
			al_draw_bitmap(abertura37, 0, 0, 0);
			break;
		case 38:
			al_draw_bitmap(abertura38, 0, 0, 0);
			break;
		case 39:
			al_draw_bitmap(abertura39, 0, 0, 0);
			break;
		case 40:
			al_draw_bitmap(abertura40, 0, 0, 0);
			break;
		case 41:
			al_draw_bitmap(abertura41, 0, 0, 0);
			break;
		case 42:
			al_draw_bitmap(abertura42, 0, 0, 0);
			break;
		case 43:
			al_draw_bitmap(abertura43, 0, 0, 0);
			break;
		case 44:
			al_draw_bitmap(abertura44, 0, 0, 0);
			break;
		case 45:
			al_draw_bitmap(abertura45, 0, 0, 0);
			break;
		case 46:
			al_draw_bitmap(abertura46, 0, 0, 0);
			break;
		case 47:
			al_draw_bitmap(abertura47, 0, 0, 0);
			break;
		case 48:
			al_draw_bitmap(abertura48, 0, 0, 0);
			break;
		case 49:
			al_draw_bitmap(abertura49, 0, 0, 0);
			break;
		case 50:
			al_draw_bitmap(abertura50, 0, 0, 0);
			break;
		case 51:
			al_draw_bitmap(abertura51, 0, 0, 0);
			break;
		case 52:
			al_draw_bitmap(abertura52, 0, 0, 0);
			break;
		case 53:
			al_draw_bitmap(abertura53, 0, 0, 0);
			break;
		case 54:
			al_draw_bitmap(abertura54, 0, 0, 0);
			break;
		case 55:
			al_draw_bitmap(abertura55, 0, 0, 0);
			break;
		case 56:
			al_draw_bitmap(abertura56, 0, 0, 0);
			break;
		case 57:
			al_draw_bitmap(abertura57, 0, 0, 0);
			break;
		case 58:
			al_draw_bitmap(abertura58, 0, 0, 0);
			break;
		case 59:
			al_draw_bitmap(abertura59, 0, 0, 0);
			break;
		case 60:
			al_draw_bitmap(abertura60, 0, 0, 0);
			break;
		case 61:
			al_draw_bitmap(abertura61, 0, 0, 0);
			break;
		case 62:
			al_draw_bitmap(abertura62, 0, 0, 0);
			break;
		case 63:
			al_draw_bitmap(abertura63, 0, 0, 0);
			break;
		case 64:
			al_draw_bitmap(abertura64, 0, 0, 0);
			break;
		case 65:
			al_draw_bitmap(abertura65, 0, 0, 0);
			break;
		case 66:
			al_draw_bitmap(abertura66, 0, 0, 0);
			break;
		case 67:
			al_draw_bitmap(abertura67, 0, 0, 0);
			break;
		case 68:
			al_draw_bitmap(abertura68, 0, 0, 0);
			break;
		case 69:
			al_draw_bitmap(abertura69, 0, 0, 0);
			break;
		case 70:
			al_draw_bitmap(abertura70, 0, 0, 0);
			break;
		case 71:
			al_draw_bitmap(abertura71, 0, 0, 0);
			break;
		case 72:
			al_draw_bitmap(abertura72, 0, 0, 0);
			break;
		case 73:
			al_draw_bitmap(abertura73, 0, 0, 0);
			break;
		case 74:
			al_draw_bitmap(abertura74, 0, 0, 0);
			break;
		case 75:
			al_draw_bitmap(abertura75, 0, 0, 0);
			break;
		case 76:
			al_draw_bitmap(abertura76, 0, 0, 0);
			break;
		case 77:
			al_draw_bitmap(abertura77, 0, 0, 0);
			break;
		case 78:
			al_draw_bitmap(abertura78, 0, 0, 0);
			break;
		case 79:
			al_draw_bitmap(abertura79, 0, 0, 0);
			break;
		case 80:
			al_draw_bitmap(abertura80, 0, 0, 0);
			break;
		case 81:
			al_draw_bitmap(abertura81, 0, 0, 0);
			break;
		case 82:
			al_draw_bitmap(abertura82, 0, 0, 0);
			break;
		case 83:
			al_draw_bitmap(abertura83, 0, 0, 0);
			break;
		case 84:
			al_draw_bitmap(abertura84, 0, 0, 0);
			break;
		case 85:
			al_draw_bitmap(abertura85, 0, 0, 0);
			break;
		case 86:
			al_draw_bitmap(abertura86, 0, 0, 0);
			break;
		case 87:
			al_draw_bitmap(abertura87, 0, 0, 0);
			break;
		case 88:
			al_draw_bitmap(abertura88, 0, 0, 0);
			break;
		case 89:
			al_draw_bitmap(abertura89, 0, 0, 0);
			break;
		case 90:
			al_draw_bitmap(abertura90, 0, 0, 0);
			break;
		case 91:
			al_draw_bitmap(abertura91, 0, 0, 0);
			break;
		case 92:
			al_draw_bitmap(abertura92, 0, 0, 0);
			break;
		}
	}

	// Logo --------------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *logo = al_load_bitmap("src/sprites/Abertura/logo.bmp");
	al_convert_mask_to_alpha(logo, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *by = al_load_bitmap("src/sprites/Abertura/by.png");
	al_convert_mask_to_alpha(by, al_map_rgb(255, 255, 255));

	// Start --------------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *abertura93 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-93.png");
	ALLEGRO_BITMAP *abertura94 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-94.png");
	ALLEGRO_BITMAP *abertura95 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-95.png");
	ALLEGRO_BITMAP *abertura96 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-96.png");
	ALLEGRO_BITMAP *abertura97 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-97.png");
	ALLEGRO_BITMAP *abertura98 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-98.png");
	ALLEGRO_BITMAP *abertura99 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-99.png");
	ALLEGRO_BITMAP *abertura100 = al_load_bitmap("src/sprites/Abertura/ezgif-3-70355ecc25-100.png");

	void desenhaStart(int frameStart)
	{
		switch (frameStart)
		{
		case 0:
			al_draw_bitmap(abertura92, 0, 0, 0);
			break;
		case 1:
			al_draw_bitmap(abertura93, 0, 0, 0);
			break;
		case 2:
			al_draw_bitmap(abertura94, 0, 0, 0);
			break;
		case 3:
			al_draw_bitmap(abertura95, 0, 0, 0);
			break;
		case 4:
			al_draw_bitmap(abertura96, 0, 0, 0);
			break;
		case 5:
			al_draw_bitmap(abertura97, 0, 0, 0);
			break;
		case 6:
			al_draw_bitmap(abertura98, 0, 0, 0);
			break;
		case 7:
			al_draw_bitmap(abertura98, 0, 0, 0);
			break;
		case 8:
			al_draw_bitmap(abertura98, 0, 0, 0);
			break;
		case 9:
			al_draw_bitmap(abertura98, 0, 0, 0);
			break;
		case 10:
			al_draw_bitmap(abertura98, 0, 0, 0);
			break;
		case 11:
			al_draw_bitmap(abertura98, 0, 0, 0);
			break;
		case 13:
			al_draw_bitmap(abertura98, 0, 0, 0);
			break;
		}
	}

	// Background --------------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *background[40];
	background[0] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-0.png");
	background[1] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-1.png");
	background[2] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-2.png");
	background[3] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-3.png");
	background[4] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-4.png");
	background[5] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-5.png");
	background[6] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-6.png");
	background[7] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-7.png");
	background[8] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-8.png");
	background[9] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-9.png");
	background[10] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-10.png");
	background[11] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-11.png");
	background[12] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-12.png");
	background[13] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-13.png");
	background[14] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-14.png");
	background[15] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-15.png");
	background[16] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-16.png");
	background[17] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-17.png");
	background[18] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-18.png");
	background[19] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-19.png");
	background[20] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-20.png");
	background[21] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-21.png");
	background[22] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-22.png");
	background[23] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-23.png");
	background[24] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-24.png");
	background[25] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-25.png");
	background[26] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-26.png");
	background[27] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-27.png");
	background[28] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-28.png");
	background[29] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-29.png");
	background[30] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-30.png");
	background[31] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-31.png");
	background[32] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-32.png");
	background[33] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-33.png");
	background[34] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-34.png");
	background[35] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-35.png");
	background[36] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-36.png");
	background[37] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-37.png");
	background[38] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-38.png");
	background[39] = al_load_bitmap("src/sprites/Background/ezgif.com-gif-maker-39.png");
	int frameBackground = 0;

	/*
	Parei de usar vetores para as animacoes pois estava tendo muitos problemas com invasao de memoria
	O switch nao apresentou problemas
	*/

	// Asteroide --------------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *asteroide0 = al_load_bitmap("src/sprites/Asteroide/asteroide0.png");
	al_convert_mask_to_alpha(asteroide0, al_map_rgb(255, 255, 255));

	ALLEGRO_BITMAP *asteroide1 = al_load_bitmap("src/sprites/Asteroide/asteroide1.png");
	al_convert_mask_to_alpha(asteroide1, al_map_rgb(255, 255, 255));

	ALLEGRO_BITMAP *asteroide2 = al_load_bitmap("src/sprites/Asteroide/asteroide2.png");
	al_convert_mask_to_alpha(asteroide2, al_map_rgb(255, 255, 255));

	ALLEGRO_BITMAP *asteroide3 = al_load_bitmap("src/sprites/Asteroide/asteroide3.png");
	al_convert_mask_to_alpha(asteroide3, al_map_rgb(255, 255, 255));

	void desenhaAsteroide(Bloco bloco)
	{
		int frameAsteroide = al_get_timer_count(timerAsteroide) % 4;

		switch (frameAsteroide)
		{
		case 0:
			al_draw_bitmap(asteroide0, bloco.x - 90, bloco.y - 200, 0);
			break;
		case 1:
			al_draw_bitmap(asteroide1, bloco.x - 90, bloco.y - 200, 0);
			break;
		case 2:
			al_draw_bitmap(asteroide2, bloco.x - 90, bloco.y - 200, 0);
			break;
		case 3:
			al_draw_bitmap(asteroide3, bloco.x - 90, bloco.y - 200, 0);
			break;
		}
	}

	// Tiro --------------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *tiro0 = al_load_bitmap("src/sprites/Tiro/ezgif-3-4a53529086-0.png");
	al_convert_mask_to_alpha(tiro0, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *tiro1 = al_load_bitmap("src/sprites/Tiro/ezgif-3-4a53529086-1.png");
	al_convert_mask_to_alpha(tiro1, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *tiro2 = al_load_bitmap("src/sprites/Tiro/ezgif-3-4a53529086-2.png");
	al_convert_mask_to_alpha(tiro2, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *tiro3 = al_load_bitmap("src/sprites/Tiro/ezgif-3-4a53529086-3.png");
	al_convert_mask_to_alpha(tiro3, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *tiro4 = al_load_bitmap("src/sprites/Tiro/ezgif-3-4a53529086-4.png");
	al_convert_mask_to_alpha(tiro4, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *tiro5 = al_load_bitmap("src/sprites/Tiro/ezgif-3-4a53529086-5.png");
	al_convert_mask_to_alpha(tiro5, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *tiro6 = al_load_bitmap("src/sprites/Tiro/ezgif-3-4a53529086-6.png");
	al_convert_mask_to_alpha(tiro6, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *tiro7 = al_load_bitmap("src/sprites/Tiro/ezgif-3-4a53529086-7.png");
	al_convert_mask_to_alpha(tiro7, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *tiro8 = al_load_bitmap("src/sprites/Tiro/ezgif-3-4a53529086-8.png");
	al_convert_mask_to_alpha(tiro8, al_map_rgb(0, 0, 0));

	ALLEGRO_BITMAP *TIRO0 = al_load_bitmap("src/sprites/Tiro/TIRO0.png");
	al_convert_mask_to_alpha(TIRO0, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *TIRO1 = al_load_bitmap("src/sprites/Tiro/TIRO1.png");
	al_convert_mask_to_alpha(TIRO1, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *TIRO2 = al_load_bitmap("src/sprites/Tiro/TIRO2.png");
	al_convert_mask_to_alpha(TIRO2, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *TIRO3 = al_load_bitmap("src/sprites/Tiro/TIRO3.png");
	al_convert_mask_to_alpha(TIRO3, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *TIRO4 = al_load_bitmap("src/sprites/Tiro/TIRO4.png");
	al_convert_mask_to_alpha(TIRO4, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *TIRO5 = al_load_bitmap("src/sprites/Tiro/TIRO5.png");
	al_convert_mask_to_alpha(TIRO5, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *TIRO6 = al_load_bitmap("src/sprites/Tiro/TIRO6.png");
	al_convert_mask_to_alpha(TIRO6, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *TIRO7 = al_load_bitmap("src/sprites/Tiro/TIRO7.png");
	al_convert_mask_to_alpha(TIRO7, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *TIRO8 = al_load_bitmap("src/sprites/Tiro/TIRO8.png");
	al_convert_mask_to_alpha(TIRO8, al_map_rgb(0, 0, 0));

	ALLEGRO_BITMAP *charge0 = al_load_bitmap("src/sprites/Tiro/charge1-0.png");
	al_convert_mask_to_alpha(charge0, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge1 = al_load_bitmap("src/sprites/Tiro/charge1-1.png");
	al_convert_mask_to_alpha(charge1, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge2 = al_load_bitmap("src/sprites/Tiro/charge1-2.png");
	al_convert_mask_to_alpha(charge2, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge3 = al_load_bitmap("src/sprites/Tiro/charge1-3.png");
	al_convert_mask_to_alpha(charge3, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge4 = al_load_bitmap("src/sprites/Tiro/charge1-4.png");
	al_convert_mask_to_alpha(charge4, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge5 = al_load_bitmap("src/sprites/Tiro/charge1-5.png");
	al_convert_mask_to_alpha(charge5, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge6 = al_load_bitmap("src/sprites/Tiro/charge1-6.png");
	al_convert_mask_to_alpha(charge6, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge7 = al_load_bitmap("src/sprites/Tiro/charge1-7.png");
	al_convert_mask_to_alpha(charge7, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge8 = al_load_bitmap("src/sprites/Tiro/charge1-8.png");
	al_convert_mask_to_alpha(charge8, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge9 = al_load_bitmap("src/sprites/Tiro/charge1-9.png");
	al_convert_mask_to_alpha(charge9, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge10 = al_load_bitmap("src/sprites/Tiro/charge1-10.png");
	al_convert_mask_to_alpha(charge10, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge11 = al_load_bitmap("src/sprites/Tiro/charge1-11.png");
	al_convert_mask_to_alpha(charge11, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge12 = al_load_bitmap("src/sprites/Tiro/charge1-12.png");
	al_convert_mask_to_alpha(charge12, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge13 = al_load_bitmap("src/sprites/Tiro/charge1-13.png");
	al_convert_mask_to_alpha(charge13, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge14 = al_load_bitmap("src/sprites/Tiro/charge1-14.png");
	al_convert_mask_to_alpha(charge14, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge15 = al_load_bitmap("src/sprites/Tiro/charge1-15.png");
	al_convert_mask_to_alpha(charge15, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge16 = al_load_bitmap("src/sprites/Tiro/charge1-16.png");
	al_convert_mask_to_alpha(charge16, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge17 = al_load_bitmap("src/sprites/Tiro/charge1-17.png");
	al_convert_mask_to_alpha(charge17, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *charge18 = al_load_bitmap("src/sprites/Tiro/charge1-18.png");
	al_convert_mask_to_alpha(charge18, al_map_rgb(0, 0, 0));

	ALLEGRO_BITMAP *CHARGE0 = al_load_bitmap("src/sprites/Tiro/charge2-0.png");
	al_convert_mask_to_alpha(CHARGE0, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE1 = al_load_bitmap("src/sprites/Tiro/charge2-1.png");
	al_convert_mask_to_alpha(CHARGE1, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE2 = al_load_bitmap("src/sprites/Tiro/charge2-2.png");
	al_convert_mask_to_alpha(CHARGE2, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE3 = al_load_bitmap("src/sprites/Tiro/charge2-3.png");
	al_convert_mask_to_alpha(CHARGE3, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE4 = al_load_bitmap("src/sprites/Tiro/charge2-4.png");
	al_convert_mask_to_alpha(CHARGE4, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE5 = al_load_bitmap("src/sprites/Tiro/charge2-5.png");
	al_convert_mask_to_alpha(CHARGE5, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE6 = al_load_bitmap("src/sprites/Tiro/charge2-6.png");
	al_convert_mask_to_alpha(CHARGE6, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE7 = al_load_bitmap("src/sprites/Tiro/charge2-7.png");
	al_convert_mask_to_alpha(CHARGE7, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE8 = al_load_bitmap("src/sprites/Tiro/charge2-8.png");
	al_convert_mask_to_alpha(CHARGE8, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE9 = al_load_bitmap("src/sprites/Tiro/charge2-9.png");
	al_convert_mask_to_alpha(CHARGE9, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE10 = al_load_bitmap("src/sprites/Tiro/charge2-10.png");
	al_convert_mask_to_alpha(CHARGE10, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE11 = al_load_bitmap("src/sprites/Tiro/charge2-11.png");
	al_convert_mask_to_alpha(CHARGE11, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE12 = al_load_bitmap("src/sprites/Tiro/charge2-12.png");
	al_convert_mask_to_alpha(CHARGE12, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE13 = al_load_bitmap("src/sprites/Tiro/charge2-13.png");
	al_convert_mask_to_alpha(CHARGE13, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE14 = al_load_bitmap("src/sprites/Tiro/charge2-14.png");
	al_convert_mask_to_alpha(CHARGE14, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE15 = al_load_bitmap("src/sprites/Tiro/charge2-15.png");
	al_convert_mask_to_alpha(CHARGE15, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE16 = al_load_bitmap("src/sprites/Tiro/charge2-16.png");
	al_convert_mask_to_alpha(CHARGE16, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE17 = al_load_bitmap("src/sprites/Tiro/charge2-17.png");
	al_convert_mask_to_alpha(CHARGE17, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE18 = al_load_bitmap("src/sprites/Tiro/charge2-18.png");
	al_convert_mask_to_alpha(CHARGE18, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *CHARGE19 = al_load_bitmap("src/sprites/Tiro/charge2-19.png");
	al_convert_mask_to_alpha(CHARGE19, al_map_rgb(0, 0, 0));

	void desenhoTiro(Tiro tiro[], int tamanho)
	{
		int frameTiro;

		for (int i = 0; i < tamanho; i++)
		{
			if (!tiro[i].ativo && tiro[i].carregando && !tiro[i].carregado)
			{
				frameTiro = al_get_timer_count(timerBackground) % 19;

				switch (frameTiro)
				{
				case 0:
					al_draw_bitmap(charge0, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 1:
					al_draw_bitmap(charge1, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 2:
					al_draw_bitmap(charge2, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 3:
					al_draw_bitmap(charge3, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 4:
					al_draw_bitmap(charge4, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 5:
					al_draw_bitmap(charge5, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 6:
					al_draw_bitmap(charge6, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 7:
					al_draw_bitmap(charge7, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 8:
					al_draw_bitmap(charge8, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 9:
					al_draw_bitmap(charge9, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 10:
					al_draw_bitmap(charge10, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 11:
					al_draw_bitmap(charge11, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 12:
					al_draw_bitmap(charge12, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 13:
					al_draw_bitmap(charge13, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 14:
					al_draw_bitmap(charge14, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 15:
					al_draw_bitmap(charge15, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 16:
					al_draw_bitmap(charge16, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 17:
					al_draw_bitmap(charge17, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				case 18:
					al_draw_bitmap(charge18, tiro[i].x - 5, tiro[i].y - 5, 0);
					break;
				}
			}

			if (!tiro[i].ativo && tiro[i].carregando && tiro[i].carregado)
			{
				frameTiro = al_get_timer_count(timerBackground) % 20;

				switch (frameTiro)
				{
				case 0:
					al_draw_bitmap(CHARGE0, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 1:
					al_draw_bitmap(CHARGE1, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 2:
					al_draw_bitmap(CHARGE2, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 3:
					al_draw_bitmap(CHARGE3, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 4:
					al_draw_bitmap(CHARGE4, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 5:
					al_draw_bitmap(CHARGE5, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 6:
					al_draw_bitmap(CHARGE6, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 7:
					al_draw_bitmap(CHARGE7, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 8:
					al_draw_bitmap(CHARGE8, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 9:
					al_draw_bitmap(CHARGE9, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 10:
					al_draw_bitmap(CHARGE10, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 11:
					al_draw_bitmap(CHARGE11, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 12:
					al_draw_bitmap(CHARGE12, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 13:
					al_draw_bitmap(CHARGE13, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 14:
					al_draw_bitmap(CHARGE14, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 15:
					al_draw_bitmap(CHARGE15, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 16:
					al_draw_bitmap(CHARGE16, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 17:
					al_draw_bitmap(CHARGE17, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 18:
					al_draw_bitmap(CHARGE18, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				case 19:
					al_draw_bitmap(CHARGE19, tiro[i].x - 5, tiro[i].y - 17, 0);
					break;
				}
			}

			if (tiro[i].ativo && !tiro[i].carregado)
			{
				frameTiro = al_get_timer_count(timerBackground) % 8;

				switch (frameTiro)
				{
				case 0:
					al_draw_bitmap(tiro0, tiro[i].x - 35, tiro[i].y - 18, 0);
					break;
				case 1:
					al_draw_bitmap(tiro1, tiro[i].x - 35, tiro[i].y - 18, 0);
					break;
				case 2:
					al_draw_bitmap(tiro2, tiro[i].x - 35, tiro[i].y - 18, 0);
					break;
				case 3:
					al_draw_bitmap(tiro3, tiro[i].x - 35, tiro[i].y - 18, 0);
					break;
				case 4:
					al_draw_bitmap(tiro4, tiro[i].x - 35, tiro[i].y - 18, 0);
					break;
				case 5:
					al_draw_bitmap(tiro5, tiro[i].x - 35, tiro[i].y - 18, 0);
					break;
				case 6:
					al_draw_bitmap(tiro6, tiro[i].x - 35, tiro[i].y - 18, 0);
					break;
				case 7:
					al_draw_bitmap(tiro7, tiro[i].x - 35, tiro[i].y - 18, 0);
					break;
				case 8:
					al_draw_bitmap(tiro8, tiro[i].x - 35, tiro[i].y - 18, 0);
					break;
				}
			}

			if (tiro[i].ativo && tiro[i].carregado)
			{
				frameTiro = al_get_timer_count(timerBackground) % 9;

				switch (frameTiro)
				{
				case 0:
					al_draw_bitmap(TIRO0, tiro[i].x - 70, tiro[i].y - 37, 0);
					break;
				case 1:
					al_draw_bitmap(TIRO1, tiro[i].x - 70, tiro[i].y - 37, 0);
					break;
				case 2:
					al_draw_bitmap(TIRO2, tiro[i].x - 70, tiro[i].y - 37, 0);
					break;
				case 3:
					al_draw_bitmap(TIRO3, tiro[i].x - 70, tiro[i].y - 37, 0);
					break;
				case 4:
					al_draw_bitmap(TIRO4, tiro[i].x - 70, tiro[i].y - 37, 0);
					break;
				case 5:
					al_draw_bitmap(TIRO5, tiro[i].x - 70, tiro[i].y - 37, 0);
					break;
				case 6:
					al_draw_bitmap(TIRO6, tiro[i].x - 70, tiro[i].y - 37, 0);
					break;
				case 7:
					al_draw_bitmap(TIRO7, tiro[i].x - 70, tiro[i].y - 37, 0);
					break;
				case 8:
					al_draw_bitmap(TIRO8, tiro[i].x - 70, tiro[i].y - 37, 0);
					break;
				}
			}
		}
	}

	// Nave --------------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *nave0 = al_load_bitmap("src/sprites/Nave/nave0.png");
	al_convert_mask_to_alpha(nave0, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *nave2 = al_load_bitmap("src/sprites/Nave/nave2.png");
	al_convert_mask_to_alpha(nave2, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *nave5 = al_load_bitmap("src/sprites/Nave/nave5.png");
	al_convert_mask_to_alpha(nave5, al_map_rgb(255, 255, 255));

	void atualizaDesenhoNave(Nave nave, int movimentoNave)
	{
		if (movimentoNave == 0)
		{
			al_draw_bitmap(nave0, nave.x, nave.y - 16, 0);
		}
		if (movimentoNave == 1)
		{
			al_draw_bitmap(nave2, nave.x, nave.y - 16, 0);
		}
		if (movimentoNave == -1)
		{
			al_draw_bitmap(nave5, nave.x, nave.y - 16, 0);
		}
	}

	// Inimigos --------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// Gemeos
	ALLEGRO_BITMAP *gemeos0 = al_load_bitmap("src/sprites/Inimigos/gemeos0.png");
	al_convert_mask_to_alpha(gemeos0, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *gemeos1 = al_load_bitmap("src/sprites/Inimigos/gemeos1.png");
	al_convert_mask_to_alpha(gemeos1, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *gemeos2 = al_load_bitmap("src/sprites/Inimigos/gemeos2.png");
	al_convert_mask_to_alpha(gemeos2, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *gemeos3 = al_load_bitmap("src/sprites/Inimigos/gemeos3.png");
	al_convert_mask_to_alpha(gemeos3, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *gemeos4 = al_load_bitmap("src/sprites/Inimigos/gemeos4.png");
	al_convert_mask_to_alpha(gemeos4, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *gemeos5 = al_load_bitmap("src/sprites/Inimigos/gemeos5.png");
	al_convert_mask_to_alpha(gemeos5, al_map_rgb(255, 255, 255));

	ALLEGRO_BITMAP *cobra0 = al_load_bitmap("src/sprites/Inimigos/cobra0.png");
	al_convert_mask_to_alpha(cobra0, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *cobra1 = al_load_bitmap("src/sprites/Inimigos/cobra1.png");
	al_convert_mask_to_alpha(cobra1, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *cobra2 = al_load_bitmap("src/sprites/Inimigos/cobra2.png");
	al_convert_mask_to_alpha(cobra2, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *cobra3 = al_load_bitmap("src/sprites/Inimigos/cobra3.png");
	al_convert_mask_to_alpha(cobra3, al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *cobra4 = al_load_bitmap("src/sprites/Inimigos/cobra4.png");
	al_convert_mask_to_alpha(cobra4, al_map_rgb(255, 255, 255));

	void desenhoInimigo(Inimigo inimigo[], int quantidade)
	{
		int frameGemeo = al_get_timer_count(timerInimigo) % 6;

		// Gemeos
		if (quantidade == 2)
		{
			for (int i = 0; i < quantidade; i++)
			{
				if (inimigo[i].vivo)
				{
					switch (frameGemeo)
					{
					case 0:
						al_draw_bitmap(gemeos0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
						break;
					case 1:
						al_draw_bitmap(gemeos1, inimigo[i].x - 10, inimigo[i].y - 10, 0);
						break;
					case 2:
						al_draw_bitmap(gemeos2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
						break;
					case 3:
						al_draw_bitmap(gemeos3, inimigo[i].x - 10, inimigo[i].y - 10, 0);
						break;
					case 4:
						al_draw_bitmap(gemeos4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
						break;
					case 5:
						al_draw_bitmap(gemeos5, inimigo[i].x - 10, inimigo[i].y - 10, 0);
						break;
					}
				}
			}
		}

		// Movimentar cobra
		if (quantidade == 6)
		{
			for (int i = 0; i < quantidade; i++)
			{
				if (inimigo[i].vivo)
				{
					if (inimigo[i].x > SCREEN_W - 50)
						al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 100)
						al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 150)
						al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 200)
						al_draw_bitmap(cobra3, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 250)
						al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 300)
						al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 350)
						al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 400)
						al_draw_bitmap(cobra1, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 450)
						al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 500)
						al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 550)
						al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 600)
						al_draw_bitmap(cobra3, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 650)
						al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 700)
						al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 750)
						al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 800)
						al_draw_bitmap(cobra1, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 850)
						al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 900)
						al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 950)
						al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 1000)
						al_draw_bitmap(cobra3, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 1050)
						al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 1100)
						al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 1150)
						al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 1200)
						al_draw_bitmap(cobra1, inimigo[i].x - 10, inimigo[i].y - 10, 0);
					else if (inimigo[i].x > SCREEN_W - 1250)
						al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
				}
			}
		}
	}

	// Explosao --------------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *explosao0 = al_load_bitmap("src/sprites/Explosao/ezgif-3-6d3dafe057-0.png");
	al_convert_mask_to_alpha(explosao0, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *explosao1 = al_load_bitmap("src/sprites/Explosao/ezgif-3-6d3dafe057-1.png");
	al_convert_mask_to_alpha(explosao1, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *explosao2 = al_load_bitmap("src/sprites/Explosao/ezgif-3-6d3dafe057-2.png");
	al_convert_mask_to_alpha(explosao2, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *explosao3 = al_load_bitmap("src/sprites/Explosao/ezgif-3-6d3dafe057-3.png");
	al_convert_mask_to_alpha(explosao3, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *explosao4 = al_load_bitmap("src/sprites/Explosao/ezgif-3-6d3dafe057-4.png");
	al_convert_mask_to_alpha(explosao4, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *explosao5 = al_load_bitmap("src/sprites/Explosao/ezgif-3-6d3dafe057-5.png");
	al_convert_mask_to_alpha(explosao5, al_map_rgb(0, 0, 0));
	ALLEGRO_BITMAP *explosao6 = al_load_bitmap("src/sprites/Explosao/ezgif-3-6d3dafe057-6.png");
	al_convert_mask_to_alpha(explosao6, al_map_rgb(0, 0, 0));

	void desenhaExplosao(Inimigo inimigo[], int quantidade, Tiro tiro[], Bloco bloco)
	{
		int frameExplosao = al_get_timer_count(timerAsteroide) % 2;

		// Explosao para inimigos atingidos
		for (int i = 0; i < quantidade; i++)
		{
			{
				for (int j = 0; j < NUM_BALAS; j++)
				{
					if (tiro[j].x + tiro[j].w >= inimigo[i].x && tiro[j].x <= inimigo[i].x + inimigo[i].w) // Testar igualdade no eixo x
					{
						if (tiro[j].y + tiro[j].h >= inimigo[i].y && tiro[j].y <= inimigo[i].y + inimigo[i].h) // Testar igualdade no eixo y
						{
							switch (frameExplosao)
							{
							case 1:
								al_draw_bitmap(explosao5, inimigo[i].x, inimigo[i].y, 0);
								break;
							case 0:
								al_draw_bitmap(explosao6, inimigo[i].x, inimigo[i].y, 0);
								break;
							}
						}
					}
				}
			}

			// Explosao para inimigos que colidiram com blocos
			if (bloco.x + bloco.w >= inimigo[i].x && bloco.x <= inimigo[i].x + inimigo[i].w) // Testar igualdade no eixo x
			{
				if (bloco.y + bloco.h >= inimigo[i].y && bloco.y <= inimigo[i].y + inimigo[i].h) // Testar igualdade no eixo y
				{
					switch (frameExplosao)
					{
					case 1:
						al_draw_bitmap(explosao5, inimigo[i].x, inimigo[i].y, 0);
						break;
					case 0:
						al_draw_bitmap(explosao6, inimigo[i].x, inimigo[i].y, 0);
						break;
					}
				}
			}
		}
	}

	// Tiro inimigo --------------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *tiroinimigo0 = al_load_bitmap("src/sprites/Inimigos/tiroinimigo0.png");
	al_convert_mask_to_alpha(tiroinimigo0, al_map_rgb(255, 255, 255));

	void desenhaTiroInimigo(Inimigo inimigo[], int quantidade)
	{
		for (int i = 0; i < quantidade; i++)
		{
			if (quantidade == 2 && inimigo[i].t1ativo)
			{
				al_draw_bitmap(tiroinimigo0, inimigo[i].t1x, inimigo[i].t1y, 0);
			}

			if (quantidade == 2 && inimigo[i].t2ativo)
			{
				al_draw_bitmap(tiroinimigo0, inimigo[i].t2x, inimigo[i].t2y, 0);
			}
		}
	}

	// Interface -------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *interface = al_load_bitmap("src/sprites/Interface/interface.png");

	void desenhoInterface()
	{
		al_draw_bitmap(interface, 0, 750, 0);
	}

	ALLEGRO_BITMAP *N1 = al_load_bitmap("src/sprites/Interface/N1.png");
	ALLEGRO_BITMAP *N2 = al_load_bitmap("src/sprites/Interface/N2.png");
	ALLEGRO_BITMAP *N3 = al_load_bitmap("src/sprites/Interface/N3.png");
	ALLEGRO_BITMAP *N4 = al_load_bitmap("src/sprites/Interface/N4.png");
	ALLEGRO_BITMAP *N5 = al_load_bitmap("src/sprites/Interface/N5.png");
	ALLEGRO_BITMAP *N6 = al_load_bitmap("src/sprites/Interface/N6.png");
	ALLEGRO_BITMAP *N7 = al_load_bitmap("src/sprites/Interface/N7.png");
	ALLEGRO_BITMAP *N8 = al_load_bitmap("src/sprites/Interface/N8.png");
	ALLEGRO_BITMAP *N9 = al_load_bitmap("src/sprites/Interface/N9.png");
	ALLEGRO_BITMAP *N0 = al_load_bitmap("src/sprites/Interface/N0.png");

	ALLEGRO_BITMAP *V1 = al_load_bitmap("src/sprites/Interface/V1.png");
	ALLEGRO_BITMAP *V2 = al_load_bitmap("src/sprites/Interface/V2.png");

	void desenhaPontuacao(int pontos)
	{
		int x = 168;
		int y = 766;

		for (int i = 5; i > 0; i--)
		{
			switch (pontos % 10)
			{
			case 0:
				al_draw_bitmap(N0, x, y, 0);
				break;
			case 1:
				al_draw_bitmap(N1, x, y, 0);
				break;
			case 2:
				al_draw_bitmap(N2, x, y, 0);
				break;
			case 3:
				al_draw_bitmap(N3, x, y, 0);
				break;
			case 4:
				al_draw_bitmap(N4, x, y, 0);
				break;
			case 5:
				al_draw_bitmap(N5, x, y, 0);
				break;
			case 6:
				al_draw_bitmap(N6, x, y, 0);
				break;
			case 7:
				al_draw_bitmap(N7, x, y, 0);
				break;
			case 8:
				al_draw_bitmap(N8, x, y, 0);
				break;
			case 9:
				al_draw_bitmap(N9, x, y, 0);
				break;
			}

			x += -16;
			pontos = pontos / 10;
		}
	}

	void desenhaRecorde(int recorde)
	{
		int x = 1169;
		int y = 766;

		for (int i = 5; i > 0; i--)
		{
			switch (recorde % 10)
			{
			case 0:
				al_draw_bitmap(N0, x, y, 0);
				break;
			case 1:
				al_draw_bitmap(N1, x, y, 0);
				break;
			case 2:
				al_draw_bitmap(N2, x, y, 0);
				break;
			case 3:
				al_draw_bitmap(N3, x, y, 0);
				break;
			case 4:
				al_draw_bitmap(N4, x, y, 0);
				break;
			case 5:
				al_draw_bitmap(N5, x, y, 0);
				break;
			case 6:
				al_draw_bitmap(N6, x, y, 0);
				break;
			case 7:
				al_draw_bitmap(N7, x, y, 0);
				break;
			case 8:
				al_draw_bitmap(N8, x, y, 0);
				break;
			case 9:
				al_draw_bitmap(N9, x, y, 0);
				break;
			}

			x += -16;
			recorde = recorde / 10;
		}
	}

	void desenhaVidas(int vidas)
	{
		int x = 826;
		int y = 767;

		switch (vidas)
		{
		case 1:
			// desenha nada
			break;
		case 2:
			al_draw_bitmap(V1, x, y, 0);
			break;
		case 3:
			al_draw_bitmap(V2, x, y, 0);
			break;
		}
	}

	// Game Over -------------------------------------------------------------------------------------------------------------------------------------------------------------

	ALLEGRO_BITMAP *gameOver = al_load_bitmap("src/sprites/Interface/gameOver.png");
	al_convert_mask_to_alpha(gameOver, al_map_rgb(127, 127, 127));

	ALLEGRO_BITMAP *gameOver2 = al_load_bitmap("src/sprites/Interface/gameOver2.png");
	al_convert_mask_to_alpha(gameOver2, al_map_rgb(127, 127, 127));

	void desenhaGameOver()
	{
		al_draw_bitmap(gameOver, 140, -180, 0);
	}

	void desenhaGameOver2()
	{
		al_draw_bitmap(gameOver2, 140, -180, 0);
	}

	// SONS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	/*
	Para efeitos sonoros
		ALLEGRO_SAMPLE *NOME = al_load_sample("NOME.FORMATO");

		al_play_sample(NOME, VOLUME, L/R, VELOCIDADE, ALLEGRO_PLAYMODE [ONCE ou LOOP], 0)

	Para musicas
		ALLEGRO_SAMPLE *NOME = al_load_sample("NOME.FORMATO");
		ALLEGRO_SAMPLE_INSTANCE *NOME_INSTANCE = al_create_sample_instance(NOME);
		al_set_sample_instance_playmode(NOME_INSTANCE, ALLEGRO_PLAYMODE_LOOP);
		al_attach_sample_instance_to_mixer(NOME_INSTANCE, al_get_default_mixer());

		al_play_sample_instance(NOME_INSTANCE)
	*/

	al_reserve_samples(5);

	ALLEGRO_SAMPLE *somTiro = al_load_sample("src/sound/effects/laser.wav");
	ALLEGRO_SAMPLE *somTiroCarregado = al_load_sample("src/sound/effects/laser5.wav");
	ALLEGRO_SAMPLE *somCharge = al_load_sample("src/sound/effects/laser2.wav");

	void tocaTiro(Tiro tiro[], int tamanho)
	{
		for (int i = 0; i < tamanho; i++)
		{
			if (!tiro[i].carregando && tiro[i].ativo && !tiro[i].carregado)
			{
				al_play_sample(somTiro, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
				break;
			}
			if (!tiro[i].carregando && tiro[i].ativo && tiro[i].carregado)
			{
				al_play_sample(somTiroCarregado, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
				break;
			}
		}
	}

	ALLEGRO_SAMPLE *somEnter = al_load_sample("src/sound/music/enter.mp3");

	// ALLEGRO_SAMPLE *explosaoInimigo = al_load_sample("explosaoInimigo.wav");

	ALLEGRO_SAMPLE *explosao = al_load_sample("src/sound/effects/explosaoNave.wav");

	void explosaoNave(Nave nave, Bloco bloco, Inimigo inimigo[], int quantidade)
	{
		if (!nave.ivulneravel)
		{
			for (int i = 0; i < quantidade; i++)
			{
				// Contato com inimigo
				if (inimigo[i].vivo)
				{
					if (nave.x + NAVE_W >= inimigo[i].x && nave.x <= inimigo[i].x + inimigo[i].w) // Testar igualdade no eixo x
					{
						if (nave.y + NAVE_H >= inimigo[i].y && nave.y <= inimigo[i].y + inimigo[i].h) // Testar igualdade no eixo y
						{
							al_play_sample(explosao, 0.7, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
						}
					}
				}

				// Contato com tiros do inimigo
				if (quantidade == 2)
				{
					if (inimigo[i].t1ativo && inimigo[i].x <= SCREEN_W * 4 / 5)
					{
						if (nave.x + NAVE_W >= inimigo[i].t1x && nave.x <= inimigo[i].t1x + inimigo[i].tw) // Testar igualdade no eixo x
						{
							if (nave.y + NAVE_H >= inimigo[i].t1y && nave.y <= inimigo[i].t1y + inimigo[i].th) // Testar igualdade no eixo y
							{
								al_play_sample(explosao, 0.7, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
							}
						}
					}

					if (inimigo[i].t2ativo && inimigo[i].x <= SCREEN_W * 4 / 5)
					{
						if (nave.x + NAVE_W >= inimigo[i].t2x && nave.x <= inimigo[i].t2x + inimigo[i].tw) // Testar igualdade no eixo x
						{
							if (nave.y + NAVE_H >= inimigo[i].t2y && nave.y <= inimigo[i].t2y + inimigo[i].th) // Testar igualdade no eixo y
							{
								al_play_sample(explosao, 0.7, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
							}
						}
					}
				}
			}

			// Contato com bloco
			if (nave.x + NAVE_W >= bloco.x && nave.x <= bloco.x + BLOCO_W) // Testar igualdade no eixo x
			{
				if (nave.y + NAVE_H >= bloco.y && nave.y <= bloco.y + BLOCO_H) // Testar igualdade no eixo y
				{
					al_play_sample(explosao, 0.7, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
				}
			}
		}
	}

	ALLEGRO_SAMPLE *musicaAbertura = al_load_sample("src/sound/music/musicaAbertura.mp3");
	ALLEGRO_SAMPLE_INSTANCE *musicaAbertura_Instance = al_create_sample_instance(musicaAbertura);
	al_set_sample_instance_playmode(musicaAbertura_Instance, ALLEGRO_PLAYMODE_LOOP);
	al_attach_sample_instance_to_mixer(musicaAbertura_Instance, al_get_default_mixer());

	ALLEGRO_SAMPLE *musicaJogo = al_load_sample("src/sound/music/musicaJogo.mp3");
	ALLEGRO_SAMPLE_INSTANCE *musicaJogo_Instance = al_create_sample_instance(musicaJogo);
	al_set_sample_instance_playmode(musicaJogo_Instance, ALLEGRO_PLAYMODE_LOOP);
	al_set_sample_instance_gain(musicaJogo_Instance, 0.3);
	al_attach_sample_instance_to_mixer(musicaJogo_Instance, al_get_default_mixer());

	ALLEGRO_SAMPLE *musicaEnd = al_load_sample("src/sound/music/musicaEnd.mp3");
	ALLEGRO_SAMPLE_INSTANCE *musicaEnd_Instance = al_create_sample_instance(musicaEnd);
	al_set_sample_instance_playmode(musicaAbertura_Instance, ALLEGRO_PLAYMODE_ONCE);
	al_set_sample_instance_gain(musicaEnd_Instance, 2.0);
	al_attach_sample_instance_to_mixer(musicaEnd_Instance, al_get_default_mixer());

	while (game)
	{
		// TELA DE ABERTURA ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		while (opening)
		{
			ALLEGRO_EVENT ev;					 // Espera por um evento e o armazena na variavel de evento ev
			al_wait_for_event(event_queue, &ev); // Pausa o loop, aguardando pelo evento
			al_play_sample_instance(musicaAbertura_Instance);

			// Caso ocorra um evento de timer, ou seja, o tempo passou de t para t+1
			if (ev.type == ALLEGRO_EVENT_TIMER)
			{
				desenhaAbertura();
				al_draw_bitmap(logo, SCREEN_W / 2 - 380, 35, 0);
				al_draw_bitmap(by, SCREEN_W - 150, SCREEN_H - 20, 0);

				al_flip_display(); // Atualiza a tela (quando houver algo para mostrar)
			}

			// Caso ocorra um evento de fechar a tela
			else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
			{
				opening = 0; // Encerra o jogo
				game = 0;
			}

			// Caso ocorra um evento de tecla pressionada
			else if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
			{
				// printf("\nCodigo tecla: %d", ev.keyboard.keycode); // Imprime qual tecla foi

				switch (ev.keyboard.keycode)
				{
				case ALLEGRO_KEY_ENTER:
					al_set_timer_count(pararAbertura, 0);
					opening = 0;
					start = 1;
					break;
				}
			}
		}

		// START ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		while (start)
		{
			ALLEGRO_EVENT ev;					 // Espera por um evento e o armazena na variavel de evento ev
			al_wait_for_event(event_queue, &ev); // Pausa o loop, aguardando pelo evento
			al_start_timer(pararAbertura);

			al_play_sample(somEnter, 0.5, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);

			int frameStart = al_get_timer_count(pararAbertura) % 14;

			// Caso ocorra um evento de timer, ou seja, o tempo passou de t para t+1
			if (ev.type == ALLEGRO_EVENT_TIMER)
			{
				if (al_get_timer_count(pararAbertura) == 8)
				{
					al_stop_sample_instance(musicaAbertura_Instance);
				}

				if (al_get_timer_count(pararAbertura) == 14)
				{
					playing = 1;
					start = 0;
				}

				// Desenha start
				desenhaStart(frameStart);
				al_draw_bitmap(logo, SCREEN_W / 2 - 380, 35, 0);
				al_draw_bitmap(by, SCREEN_W - 150, SCREEN_H - 20, 0);

				// Atualiza a tela (quando houver algo para mostrar)
				al_flip_display();
			}

			// Caso ocorra um evento de fechar a tela
			else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
			{
				start = 0; // Encerra o jogo
				game = 0;
			}
		}

		// INICIO DO JOGO ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		// Cria nave
		Nave nave;
		initNave(&nave);
		int vidas = 3;
		bool naveAtingida = false;

		// Cria bloco
		Bloco bloco;
		initBloco(&bloco);

		// Cria tiro
		Tiro tiro[NUM_BALAS];
		initTiro(tiro, nave, NUM_BALAS);
		bool carregando = false;

		// Cria inimigos
		int relogio;
		int quantidade = 6;
		int *ponteiroQuantidade;
		ponteiroQuantidade = &quantidade;
		Inimigo inimigo[quantidade];
		initInimigo(inimigo, quantidade);

		// Cria interface
		Interface interface;
		initInterface(&interface);
		int pontos = 0;
		int recorde = 0;
		bool armazenar = false;

		// Ler recorde
		FILE *topScore;
		topScore = fopen("topScore.txt", "r");
		fscanf(topScore, "%d", &recorde);
		fclose(topScore);

		void armazenaRecorde(int pontos, int *recorde, bool *armazenar)
		{
			bool highScore = false;

			if (pontos >= *recorde)
			{
				highScore = true;
				*armazenar = true;
			}

			if (highScore)
			{
				*recorde = pontos;
			}
		}

		// Animar movimento da nave
		int movimentoNave = 0;

		// Variaveis para controlar a dificuldade
		al_start_timer(timerDificuldade);
		float xTimer = 1.0;
		float xBackground = 3.0;

		printf("\nVidas: %d", vidas);

		/*
		As funcoes desenhaNave(), desenhaBloco(), desenhaTiro(), desenhaInimigo() comentadas no evento de timer abaixo servem apenas para desenhar
		a hitbox, uma vez que foram desenhados sprites para cobrir os retangulos utilizados na implementacao dos objetos.
		*/

		while (playing)
		{
			ALLEGRO_EVENT ev;					 // Espera por um evento e o armazena na variavel de evento ev
			al_wait_for_event(event_queue, &ev); // Pausa o loop, aguardando pelo evento
			al_play_sample_instance(musicaJogo_Instance);

			// Caso ocorra um evento de timer, ou seja, o tempo passou de t para t+1
			if (ev.type == ALLEGRO_EVENT_TIMER)
			{
				// Aumentar a dificuldade a cada 15s de jogo
				if (al_get_timer_count(timerDificuldade) % 700 == 0)
				{
					xTimer += -0.015;
					xBackground += -0.045;
					al_set_timer_speed(timer, xTimer / FPS);
					al_set_timer_speed(timerBackground, xBackground / FPS);
					printf("\nDificuldade aumentada!");
				}

				// Desenhar background
				frameBackground = al_get_timer_count(timerBackground) % 39;
				al_draw_bitmap(background[frameBackground], 0, 0, 0);

				// Atualizar e desenhar nave
				atualizaNave(&nave);
				// desenhaNave(nave);
				atualizaDesenhoNave(nave, movimentoNave);

				// Atualizar e desenhar bloco
				atualizaBloco(&bloco);
				// desenhaBloco(bloco);
				desenhaAsteroide(bloco);

				// Atualizar e desenhar tiro

				atualizaTiro(tiro, NUM_BALAS, bloco, nave);
				// desenhaTiro(tiro, NUM_BALAS);
				desenhoTiro(tiro, NUM_BALAS);
				if (carregando)
					carregaTiro(tiro, NUM_BALAS);

				// Atualizar e desenhar inimigo
				aleatorizaInimigo(&*ponteiroQuantidade, inimigo, timerBackground);
				atualizaInimigo(inimigo, quantidade, relogio, tiro, bloco, nave, &pontos);
				// desenhaInimigo(inimigo, quantidade);
				desenhoInimigo(inimigo, quantidade);
				desenhaTiroInimigo(inimigo, quantidade);

				// Desenhar interface
				atualizaInterface(&interface, tiro, quantidade);
				desenhoInterface();
				desenhaInterface(interface);
				desenhaPontuacao(pontos);
				armazenaRecorde(pontos, &recorde, &armazenar);
				desenhaRecorde(recorde);
				desenhaVidas(vidas);

				// Teste colisoes
				explosaoNave(nave, bloco, inimigo, quantidade);
				contarIvulnerabilidade(timerIvulneravel, &nave, &naveAtingida);
				colisaoNave(nave, bloco, inimigo, quantidade, &vidas, timerIvulneravel, &naveAtingida);
				// desenhaExplosao(inimigo, quantidade, tiro, bloco);

				if (vidas == 0)
				{
					end = 1;
					playing = 0;
					al_stop_sample_instance(musicaJogo_Instance);
					xTimer = 1.0;
					xBackground = 3.0;
					al_set_timer_speed(timer, xTimer / FPS);
					al_set_timer_speed(timerBackground, xBackground / FPS);
					al_stop_timer(timerIvulneravel);
					al_set_timer_count(timerIvulneravel, 0);
					al_stop_sample_instance(musicaJogo_Instance);
					al_rest(0.5);
					printf("\nFim de jogo");
				}

				al_flip_display(); // Atualiza a tela (quando houver algo para mostrar)
			}

			// Caso ocorra um evento de tecla pressionada
			else if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
			{
				switch (ev.keyboard.keycode)
				{
					// Pilotar

				case ALLEGRO_KEY_W:
					movimentoNave = 1;
					paraCima(&nave);
					break;
				case ALLEGRO_KEY_S:
					movimentoNave = -1;
					paraBaixo(&nave);
					break;
				case ALLEGRO_KEY_D:
					paraDireita(&nave);
					break;
				case ALLEGRO_KEY_A:
					paraEsquerda(&nave);
					break;

					// Atirar

				case ALLEGRO_KEY_SPACE:
					carregando = true;
					segura(tiro, nave, NUM_BALAS);
					carregaTiro(tiro, NUM_BALAS);
					ativaInterface(&interface);
					break;
				}

				// printf("\nCodigo tecla: %d", ev.keyboard.keycode); // Imprime qual tecla foi
			}

			// Caso ocorra um evento de tecla levantada
			else if (ev.type == ALLEGRO_EVENT_KEY_UP)
			{
				switch (ev.keyboard.keycode)
				{
				case ALLEGRO_KEY_W:
					movimentoNave = 0;
					paraBaixo(&nave);
					break;

				case ALLEGRO_KEY_S:
					movimentoNave = 0;
					paraCima(&nave);
					break;
				case ALLEGRO_KEY_D:
					paraEsquerda(&nave);
					break;
				case ALLEGRO_KEY_A:
					paraDireita(&nave);
					break;

					// Atirar

				case ALLEGRO_KEY_SPACE:
					carregando = false;
					atira(tiro, nave, NUM_BALAS);
					tocaTiro(tiro, NUM_BALAS);
					desativaInterface(&interface);
					break;
				}
			}

			// Caso ocorra um evento de fechar a tela
			else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
			{
				playing = 0; // Encerra o jogo
				game = 0;
			}
		}

		// End ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		// Armazenar recorde
		if (armazenar)
		{
			topScore = fopen("topScore.txt", "w");
			fprintf(topScore, "%d", recorde);
			fclose(topScore);
		}

		while (end)
		{
			ALLEGRO_EVENT ev;					 // Espera por um evento e o armazena na variavel de evento ev
			al_wait_for_event(event_queue, &ev); // Pausa o loop, aguardando pelo evento

			al_start_timer(timerEnd);

			al_play_sample_instance(musicaEnd_Instance);

			// Caso ocorra um evento de timer, ou seja, o tempo passou de t para t+1
			if (ev.type == ALLEGRO_EVENT_TIMER)
			{
				if (armazenar)
					desenhaGameOver2();
				else
				{
					desenhaGameOver();
				}

				if (al_get_timer_count(timerEnd) == 5)
				{
					al_stop_timer(timerEnd);
					al_set_timer_count(timerEnd, 0);
					al_stop_sample_instance(musicaEnd_Instance);
					end = 0;
					opening = 1;
				}

				// Atualiza a tela (quando houver algo para mostrar)
				al_flip_display();
			}

			// Caso ocorra um evento de fechar a tela
			else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
			{
				end = 0; // Encerra o jogo
				game = 0;
			}
		}
	}

	al_destroy_display(display); // Encerra a tela

	al_destroy_event_queue(event_queue); // Encerra a fila de eventos

	al_destroy_bitmap(nave0);
	al_destroy_bitmap(nave2);
	al_destroy_bitmap(nave5);

	al_destroy_bitmap(abertura0);
	al_destroy_bitmap(abertura1);
	al_destroy_bitmap(abertura2);
	al_destroy_bitmap(abertura3);
	al_destroy_bitmap(abertura4);
	al_destroy_bitmap(abertura5);
	al_destroy_bitmap(abertura6);
	al_destroy_bitmap(abertura7);
	al_destroy_bitmap(abertura8);
	al_destroy_bitmap(abertura9);
	al_destroy_bitmap(abertura10);
	al_destroy_bitmap(abertura11);
	al_destroy_bitmap(abertura12);
	al_destroy_bitmap(abertura13);
	al_destroy_bitmap(abertura14);
	al_destroy_bitmap(abertura15);
	al_destroy_bitmap(abertura16);
	al_destroy_bitmap(abertura17);
	al_destroy_bitmap(abertura18);
	al_destroy_bitmap(abertura19);
	al_destroy_bitmap(abertura20);
	al_destroy_bitmap(abertura21);
	al_destroy_bitmap(abertura22);
	al_destroy_bitmap(abertura23);
	al_destroy_bitmap(abertura24);
	al_destroy_bitmap(abertura25);
	al_destroy_bitmap(abertura26);
	al_destroy_bitmap(abertura27);
	al_destroy_bitmap(abertura28);
	al_destroy_bitmap(abertura29);
	al_destroy_bitmap(abertura30);
	al_destroy_bitmap(abertura31);
	al_destroy_bitmap(abertura32);
	al_destroy_bitmap(abertura33);
	al_destroy_bitmap(abertura34);
	al_destroy_bitmap(abertura35);
	al_destroy_bitmap(abertura36);
	al_destroy_bitmap(abertura37);
	al_destroy_bitmap(abertura38);
	al_destroy_bitmap(abertura39);
	al_destroy_bitmap(abertura40);
	al_destroy_bitmap(abertura41);
	al_destroy_bitmap(abertura42);
	al_destroy_bitmap(abertura43);
	al_destroy_bitmap(abertura44);
	al_destroy_bitmap(abertura45);
	al_destroy_bitmap(abertura46);
	al_destroy_bitmap(abertura47);
	al_destroy_bitmap(abertura48);
	al_destroy_bitmap(abertura49);
	al_destroy_bitmap(abertura50);
	al_destroy_bitmap(abertura51);
	al_destroy_bitmap(abertura52);
	al_destroy_bitmap(abertura53);
	al_destroy_bitmap(abertura54);
	al_destroy_bitmap(abertura55);
	al_destroy_bitmap(abertura56);
	al_destroy_bitmap(abertura57);
	al_destroy_bitmap(abertura58);
	al_destroy_bitmap(abertura59);
	al_destroy_bitmap(abertura60);
	al_destroy_bitmap(abertura61);
	al_destroy_bitmap(abertura62);
	al_destroy_bitmap(abertura63);
	al_destroy_bitmap(abertura64);
	al_destroy_bitmap(abertura65);
	al_destroy_bitmap(abertura66);
	al_destroy_bitmap(abertura67);
	al_destroy_bitmap(abertura68);
	al_destroy_bitmap(abertura69);
	al_destroy_bitmap(abertura70);
	al_destroy_bitmap(abertura71);
	al_destroy_bitmap(abertura72);
	al_destroy_bitmap(abertura73);
	al_destroy_bitmap(abertura74);
	al_destroy_bitmap(abertura75);
	al_destroy_bitmap(abertura76);
	al_destroy_bitmap(abertura77);
	al_destroy_bitmap(abertura78);
	al_destroy_bitmap(abertura79);
	al_destroy_bitmap(abertura80);
	al_destroy_bitmap(abertura81);
	al_destroy_bitmap(abertura82);
	al_destroy_bitmap(abertura83);
	al_destroy_bitmap(abertura84);
	al_destroy_bitmap(abertura85);
	al_destroy_bitmap(abertura86);
	al_destroy_bitmap(abertura87);
	al_destroy_bitmap(abertura88);
	al_destroy_bitmap(abertura89);
	al_destroy_bitmap(abertura90);
	al_destroy_bitmap(abertura91);
	al_destroy_bitmap(abertura92);
	al_destroy_bitmap(abertura93);
	al_destroy_bitmap(abertura94);
	al_destroy_bitmap(abertura95);
	al_destroy_bitmap(abertura96);
	al_destroy_bitmap(abertura97);
	al_destroy_bitmap(abertura98);
	al_destroy_bitmap(abertura99);
	al_destroy_bitmap(abertura100);

	al_destroy_bitmap(background[0]);
	al_destroy_bitmap(background[1]);
	al_destroy_bitmap(background[2]);
	al_destroy_bitmap(background[3]);
	al_destroy_bitmap(background[4]);
	al_destroy_bitmap(background[5]);
	al_destroy_bitmap(background[6]);
	al_destroy_bitmap(background[7]);
	al_destroy_bitmap(background[8]);
	al_destroy_bitmap(background[9]);
	al_destroy_bitmap(background[10]);
	al_destroy_bitmap(background[11]);
	al_destroy_bitmap(background[12]);
	al_destroy_bitmap(background[13]);
	al_destroy_bitmap(background[14]);
	al_destroy_bitmap(background[15]);
	al_destroy_bitmap(background[16]);
	al_destroy_bitmap(background[17]);
	al_destroy_bitmap(background[18]);
	al_destroy_bitmap(background[19]);
	al_destroy_bitmap(background[20]);
	al_destroy_bitmap(background[21]);
	al_destroy_bitmap(background[22]);
	al_destroy_bitmap(background[23]);
	al_destroy_bitmap(background[24]);
	al_destroy_bitmap(background[25]);
	al_destroy_bitmap(background[26]);
	al_destroy_bitmap(background[27]);
	al_destroy_bitmap(background[28]);
	al_destroy_bitmap(background[29]);
	al_destroy_bitmap(background[30]);
	al_destroy_bitmap(background[31]);
	al_destroy_bitmap(background[32]);
	al_destroy_bitmap(background[33]);
	al_destroy_bitmap(background[34]);
	al_destroy_bitmap(background[35]);
	al_destroy_bitmap(background[36]);
	al_destroy_bitmap(background[37]);
	al_destroy_bitmap(background[38]);
	al_destroy_bitmap(background[39]);

	al_destroy_bitmap(asteroide0);
	al_destroy_bitmap(asteroide1);
	al_destroy_bitmap(asteroide2);
	al_destroy_bitmap(asteroide3);

	al_destroy_bitmap(tiro0);
	al_destroy_bitmap(tiro1);
	al_destroy_bitmap(tiro2);
	al_destroy_bitmap(tiro3);
	al_destroy_bitmap(tiro4);
	al_destroy_bitmap(tiro5);
	al_destroy_bitmap(tiro6);
	al_destroy_bitmap(tiro7);
	al_destroy_bitmap(tiro8);

	al_destroy_bitmap(TIRO0);
	al_destroy_bitmap(TIRO1);
	al_destroy_bitmap(TIRO2);
	al_destroy_bitmap(TIRO3);
	al_destroy_bitmap(TIRO4);
	al_destroy_bitmap(TIRO5);
	al_destroy_bitmap(TIRO6);
	al_destroy_bitmap(TIRO7);
	al_destroy_bitmap(TIRO8);

	al_destroy_bitmap(charge0);
	al_destroy_bitmap(charge1);
	al_destroy_bitmap(charge2);
	al_destroy_bitmap(charge3);
	al_destroy_bitmap(charge4);
	al_destroy_bitmap(charge5);
	al_destroy_bitmap(charge6);
	al_destroy_bitmap(charge7);
	al_destroy_bitmap(charge8);
	al_destroy_bitmap(charge9);
	al_destroy_bitmap(charge10);
	al_destroy_bitmap(charge11);
	al_destroy_bitmap(charge12);
	al_destroy_bitmap(charge13);
	al_destroy_bitmap(charge14);
	al_destroy_bitmap(charge15);
	al_destroy_bitmap(charge16);
	al_destroy_bitmap(charge17);
	al_destroy_bitmap(charge18);

	al_destroy_bitmap(CHARGE0);
	al_destroy_bitmap(CHARGE1);
	al_destroy_bitmap(CHARGE2);
	al_destroy_bitmap(CHARGE3);
	al_destroy_bitmap(CHARGE4);
	al_destroy_bitmap(CHARGE5);
	al_destroy_bitmap(CHARGE6);
	al_destroy_bitmap(CHARGE7);
	al_destroy_bitmap(CHARGE8);
	al_destroy_bitmap(CHARGE9);
	al_destroy_bitmap(CHARGE10);
	al_destroy_bitmap(CHARGE11);
	al_destroy_bitmap(CHARGE12);
	al_destroy_bitmap(CHARGE13);
	al_destroy_bitmap(CHARGE14);
	al_destroy_bitmap(CHARGE15);
	al_destroy_bitmap(CHARGE16);
	al_destroy_bitmap(CHARGE17);
	al_destroy_bitmap(CHARGE18);
	al_destroy_bitmap(CHARGE19);

	al_destroy_bitmap(by);
	al_destroy_bitmap(logo);

	al_destroy_bitmap(gemeos0);
	al_destroy_bitmap(gemeos1);
	al_destroy_bitmap(gemeos2);
	al_destroy_bitmap(gemeos3);
	al_destroy_bitmap(gemeos4);
	al_destroy_bitmap(gemeos5);

	al_destroy_bitmap(cobra0);
	al_destroy_bitmap(cobra1);
	al_destroy_bitmap(cobra2);
	al_destroy_bitmap(cobra3);
	al_destroy_bitmap(cobra4);

	al_destroy_bitmap(explosao0);
	al_destroy_bitmap(explosao1);
	al_destroy_bitmap(explosao2);
	al_destroy_bitmap(explosao3);
	al_destroy_bitmap(explosao4);
	al_destroy_bitmap(explosao5);
	al_destroy_bitmap(explosao6);

	al_destroy_bitmap(N0);
	al_destroy_bitmap(N1);
	al_destroy_bitmap(N2);
	al_destroy_bitmap(N3);
	al_destroy_bitmap(N4);
	al_destroy_bitmap(N5);
	al_destroy_bitmap(N6);
	al_destroy_bitmap(N7);
	al_destroy_bitmap(N8);
	al_destroy_bitmap(N9);

	al_destroy_bitmap(V1);
	al_destroy_bitmap(V2);

	al_destroy_sample(somTiro);
	al_destroy_sample(somTiroCarregado);
	al_destroy_sample(somCharge);

	al_destroy_sample(somEnter);

	al_destroy_sample(explosao);

	al_destroy_sample(musicaJogo);
	al_destroy_sample_instance(musicaJogo_Instance);

	al_destroy_sample(musicaAbertura);
	al_destroy_sample_instance(musicaAbertura_Instance);

	return 0;
}