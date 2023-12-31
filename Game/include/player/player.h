/*
** EPITECH PROJECT, 2023
** prototypes
** File description:
** true
*/

#ifndef player_h
    #define player_h

class player_c {
private:
    int room;
    int pos_x;
    int pos_y;

    std::string name;
    char sex;
    int skin;

    int level;
    int points;
    int coins;

    int life;
    int shield;
    int dps;
    int move_speed;
    int regen_life;
    int regen_spell;

    int Pspeed;
    int Pshield;
    int Prange;
    int Pcac;
    int Pspace;

public:
    void setPos(int room_in, int pos_x_in, int pos_y_in) {
        room = room_in;
        pos_x = pos_x_in;
        pos_y = pos_y_in;
    }
    void setPerso(std::string name_in, char sex_in, int skin_in) {
        name = name_in;
        sex = sex_in;
        skin = skin_in;
    }
    void setGold(int level_in, int points_in, int coins_in) {
        level = level_in;
        points = points_in;
        coins = coins_in;
    }
    void setLife(int life_in, int shield_in, int dps_in) {
        life = life_in;
        shield = shield_in;
        dps = dps_in;
    }
    void setMove(int move_speed_in, int regen_life_in, int regen_spell_in) {
        move_speed = move_speed_in;
        regen_life = regen_life_in;
        regen_spell = regen_spell_in;
    }
    void setPower1(int pspeed_in, int pshield_in, int prange_in) {
        Pspeed = pspeed_in;
        Pshield = pshield_in;
        Prange = prange_in;
    }
    void setPower2(int pcac_in, int pspace_in) {
        Pcac = pcac_in;
        Pspace = pspace_in;
    }

    int getRoom() {
        return room;
    }
    int getPos_x() {
        return pos_x;
    }
    int getPos_y() {
        return pos_y;
    }
    std::string& getName() {
        return name;
    }
    char getSex() {
        return sex;
    }
    int getSkin() {
        return skin;
    }
    int getLevel() {
        return level;
    }
    int getCoins() {
        return coins;
    }
    int getPoints() {
        return points;
    }
    int getLife() {
        return life;
    }
    int getDps() {
        return dps;
    }
    int getShield() {
        return shield;
    }
    int getSpeed() {
        return move_speed;
    }
    int getRegen_Life() {
        return regen_life;
    }
    int getRegen_Spell() {
        return regen_spell;
    }

    int getPspeed() {
        return Pspeed;
    }
    int getPshield() {
        return Pshield;
    }
    int getPrange() {
        return Prange;
    }
    int getPcac() {
        return Pcac;
    }
    int getPspace() {
        return Pspace;
    }


    void addCoins(int x) {
        coins = coins + x;
    }
    void addPoints(int x) {
        points = points + x;
    }
    void addLevel(int x) {
        level = level + x;
    }
};

    struct player_t {
        sf::Sprite player;
        sf::Texture player_t;
    };

    struct all_t;
    void init_player(all_t *all);
    void init_player_save(all_t *all);
    void create_save(all_t *all);
    void charge_save(all_t *all);
    void save(all_t *all);
    void event_player(all_t *all);
    void player_loop(all_t *all);

#endif /* !player_h */
