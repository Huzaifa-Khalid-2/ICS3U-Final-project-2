// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huzaifa Khalid
// Created on: March 2022
// this is the final project

#include <stdio.h>
#include <gb/gb.h>

#include "Smile.h"



int main() {
	set_sprite_data(0, 1, TileData);
	set_sprite_tile(0, 0);
	move_sprite(0, 88, 78);
	SHOW_SPRITES;
}
