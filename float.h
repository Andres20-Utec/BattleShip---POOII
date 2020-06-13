//
// Created by rrodriguez on 12/06/20.
//

#ifndef PROYECTOPOO2_FLOAT_H
#define PROYECTOPOO2_FLOAT_H


#include"common.h"

class player_t {
    name_ name_team;
    string scope;
    token_ token;
    number_t ship_amount;
    vector<vector<position_>> table_positions_;
public:
    player_t();

    player_t(const name_ &nameTeam);

    ~player_t();
    // Modos de juego

    // Frings y Renato
    void handshake_in(); //
    void handshake_out(file_name out); //


    // Eduardo y Andres
    void placefeet_in();


    // Setters
    void setNameTeam(const name_ &nameTeam);
    void setScope(const string &scope);
    void setToken(token_ token);
    void setShipAmount(number_t shipAmount);

    // Getters
    const name_ &getNameTeam() const;
    const string &getScope() const;
    token_ getToken() const;
    number_t getShipAmount() const;


    // Métodos

};

class navi_t{
    size_t size; //largo de la nave
public:
    navi_t(number_t size);
    virtual number_t size_() = 0;
};

class aircraftcarrier_t:public navi_t{

};

class battlecruiser_t:public navi_t{

};

class submarine_t:public navi_t{

};

class torpedoboat_t:public navi_t{

};

#endif //PROYECTOPOO2_FLOAT_H
