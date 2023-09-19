/*
** EPITECH PROJECT, 2023
** prototypes
** File description:
** true
*/

#include <cstdbool>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "lib_graphic/lib_graphic.h"
#include "player/player.h"
#include "menu/menu.h"
#include "utils.h"

#ifndef all_h
    #define all_h

    struct all_t {
        int index;
        sf::RenderWindow window;
        sf::Event event;
        player_c playstat;
        menu_t menu;
        player_t player;
    };

    struct texture_t {
        sf::Texture texture;
    };

    void init_all(all_t *all);
    void the_game_loop(all_t *all);
    void the_event(all_t *all);
    void the_display(all_t *all);

#endif /* !all_h */
