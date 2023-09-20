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
    all->menu.save = 1;
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
    all->menu.save = 1;

    std::array<std::string, 20> buff;
    buff = get_player_config(".lock/config/config_player.txt");
    
    fopen(".lock/save/save_player.txt", "w");

    std::string copy = my_get_file(".lock/config/config_player.txt");
    std::ofstream f{".lock/save/save_player.txt"};
    f << copy;
}

void save(all_t *all)
{
    std::ofstream f;
    std::ofstream i{".lock/save/save_player.txt"};
    f.open(".lock/save/save_player.txt", std::ofstream::out | std::ofstream::trunc);
    f.close();

    i << "room:";
    i << all->playstat.getRoom();
    i << "\n";

    i << "pos_x:";
    i << all->playstat.getPos_x();
    i << "\n";

    i << "pos_y:";
    i << all->playstat.getPos_y();
    i << "\n";

    i << "name:" + all->playstat.getName() + "\n";

    if (all->playstat.getSex() == 'm')
        i << "sex:m\n";
        else
            i << "sex:f\n";

    i << "skin:0\n";

    i << "level:";
    i << all->playstat.getLevel();
    i << "\n";
    i << "coins:";
    i << all->playstat.getCoins();
    i << "\n";
    i << "points:";
    i << all->playstat.getPoints();
    i << "\n";

    i << "life:";
    i << all->playstat.getLife();
    i << "\n";
    i << "shield:";
    i << all->playstat.getShield();
    i << "\n";
    i << "dps:";
    i << all->playstat.getDps();
    i << "\n";
    i << "move_speed:";
    i << all->playstat.getSpeed();
    i << "\n";
    i << "regen_life:";
    i << all->playstat.getRegen_Life();
    i << "\n";
    i << "regen_spell:";
    i << all->playstat.getRegen_Spell();
    i << "\n";

    i << "Pspeed:";
    i << all->playstat.getPspeed();
    i << "\n";
    i << "Pshield:";
    i << all->playstat.getPshield();
    i << "\n";
    i << "Prange:";
    i << all->playstat.getPrange();
    i << "\n";
    i << "Pcac:";
    i << all->playstat.getPcac();
    i << "\n";
    i << "Pspace:";
    i << all->playstat.getPspace();
    i << "\n";
}

void init_player_save(all_t *all)
{
    int fd = open(".lock/save/save_player.txt", O_WRONLY);

    if (fd != -1)
        charge_save(all);
        else
            all->menu.save = 0;

    close(fd);
}
