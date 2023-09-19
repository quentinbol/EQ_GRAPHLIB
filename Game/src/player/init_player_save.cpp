/*
** EPITECH PROJECT, 2023
** inittialization
** File description:
** true
*/

#include "all.h"

std::string strtransf(std::string buff, int a)
{
    std::string let;
    int nb = 0;
    if (buff[a] == ':') {
        a++;
        while (a != buff.length()) {
            let = let + buff[a];
            nb++;
            a++;
        }
    }
    return let;
}

std::string my_get_file(const std::string &path)
{
    std::ifstream filepath(path);
    std::string line;
    std::string buff;

    while (std::getline(filepath, line)) {
        buff = buff + line;
        buff = buff + "\n";
    }

    return buff;
}

std::array<std::string, 20> get_player_config(const std::string &path)
{
    std::ifstream filepath(path);
    std::string line;
    std::array<std::string, 20> buff;
    int nb = 0;

    while (std::getline(filepath, line)) {
        buff[nb] = line;
        nb++;
    }

    return buff;
}

void charge_save(all_t *all)
{
    int nb = 0;
    std::array<std::string, 20> buff = get_player_config(".lock/save/save_player.txt");
    std::string let[20];

    while (nb != 20) {
        for (int a = 0; a != buff[nb].length(); a++)
            let[nb] = let[nb] + strtransf(buff[nb], a);
        nb++;
    }

    all->playstat.setPos(stoi(let[0]), stoi(let[1]), stoi(let[2]));
    all->playstat.setPerso(let[3], let[4][0], stoi(let[5]));
    all->playstat.setGold(stoi(let[6]), stoi(let[8]), stoi(let[7]));
    all->playstat.setLife(stoi(let[9]), stoi(let[10]), stoi(let[11]));
    all->playstat.setMove(stoi(let[12]), stoi(let[13]), stoi(let[14]));
    all->playstat.setPower1(stoi(let[15]), stoi(let[16]), stoi(let[17]));
    all->playstat.setPower2(stoi(let[18]), stoi(let[19]));
}

void create_save(all_t *all)
{
    all->menu.save = 0;

    std::array<std::string, 20> buff;
    buff = get_player_config(".lock/config/config_player.txt");
    
    fopen(".lock/save/save_player.txt", "w");

    std::string copy = my_get_file(".lock/config/config_player.txt");
    std::ofstream f{".lock/save/save_player.txt"};
    f << copy;
}

void init_player_save(all_t *all)
{
    all->menu.save = 1;

    int fd = open(".lock/save/save_player.txt", O_WRONLY);

    if (fd != -1)
        charge_save(all);
        else
            all->menu.save = 0;

    close(fd);
}
