/* Copyright (C) 2012 Ben Lewis <benjf5+github@gmail.com>
 *
 * This code is part of Game Master's Kit (GMK).
 *
 * GMK is free software; you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by  the Free Software
 * Foundation; either version 3 of the License, or (at your option) any later
 * version. 
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <string>

class Player {
  std::string name;
  std::vector<Character> player_characters;
  
public:
  std::string get_name (void) const;
  std::vector<Character> get_characters (void) const;
  
  Character* add_character (Character);
  Character remove_character (Character&);
}
  
  Player::Player (std::string n) {
    name = n;
    player_characters = new std::vector<Character>();
  }

  const std::string get_name (void) {
    return const this->name;
  }

const std::vector<Character> get_characters(void) {
  return const this->player_characters;
}

  Character* Player::add_character (Character new_character) {
    this->player_characters.push_back(new_character);
    return ;
  }

Character Player::remove_character (Character& character_to_remove) {
  return this->player_characters.remove(character_to_remove);
}
