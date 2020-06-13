//
// Created by rrodriguez on 12/06/20.
//

#include "float.h"

void player_t::setNameTeam(const name_ &nameTeam) {
    name_team = nameTeam;
}

void player_t::setScope(const string &scope) {
    player_t::scope = scope;
}

void player_t::setToken(token_ token) {
    player_t::token = token;
}

void player_t::setShipAmount(number_t shipAmount) {
    ship_amount = shipAmount;
}

const name_ &player_t::getNameTeam() const {
    return name_team;
}

const string &player_t::getScope() const {
    return scope;
}

token_ player_t::getToken() const {
    return token;
}

number_t player_t::getShipAmount() const {
    return ship_amount;
}


player_t::player_t() {

}

player_t::player_t(const name_ &nameTeam) {

}

player_t::~player_t() {

}

void player_t::handshake_in() {
    // Pregunta si es que se tiene que escribir por consola el nombre del archivo
    name_ name = "Dream Team";
    output_file _in;
    _in.open("Dream_Team.in");
    // En caso de error podemos hacer un try-catch
    // Tengo que revisarlo
    _in << "HANDSHAKE=" << name;
    _in.close();
}

void player_t::handshake_out(file_name out) {

}

void player_t::placefeet_in() {

}

