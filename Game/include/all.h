/*
** EPITECH PROJECT, 2023
** prototypes
** File description:
** true
*/

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
#include "initialization/init.h"
#include "player/player.h"
#include "menu/menu.h"

#ifndef all_h
    #define all_h

    struct all_t {
        sf::RenderWindow window;
        player_c player;
        menu_t menu;
    };

    struct texture_t {
        sf::Texture texture;
    };

    void the_game_loop(all_t *all);
    void the_event(all_t *all);
    void the_display(all_t *all);

#endif /* !all_h */
