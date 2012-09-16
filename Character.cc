/* Copyright (C) 2012 Ben Lewis <benjf5+github@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
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
#include <vector>

enum {Strength, Dexterity, Constitution, Intelligence, Wisdom, Constitution};
enum Signum {Positive = 1, Negative = -1  };

class Character {
  Campaign* character_campaign;
  Player* character_player;
  std::string name;
  unsigned int level;
  std::string description;
  unsigned int attributes[6];
  unsigned int experience_points;
  int hit_points;
  int current_hit_points;
  bool living;
  unsigned int age;
  Job* character_class;
  std::vector<Feat> character_feats;
  std::vector<Skill> character_skills;
  std::vector<Item> character_items;
  std::vector<Ability> character_abilities;
  
public:
  // Accesor functions
  std::string get_name (void) const;
  std::string get_description (void) const;
  Job* get_class (void) const;
  unsigned int get_level (void) const;
  unsigned int get_experience (void) const;
  unsigned int get_attribute (int) const;
  std::vector<Feat> get_feats (void) const;
  std::vector<Skill> get_skills (void) const;
  std::vector<Item> get_items (void) const;
  std::vector<Ability> get_abilities (void) const;

  unsigned int level_up_status (void) const;
  /* Returns a zero if the character has not received enough experience to
   * advance to the next level, otherwise returns the level the character should
   * increase to. There will need to be a process for levelling up, because
   * there's too much that goes into a level-up. I might make that a class-level
   * function, not an object-level function.
   */
  
  // Mutator functions
  unsigned int modify_experience (unsigned int, Signum);
  // First int comes from the enum of attributes.
  unsigned int modify_attribute (int, unsigned int, Signum);
  Skill* add_skill (Skill);
  Skill* modify_skill (Skill*);
  Feat* add_feat (Feat);
  Ability* add_ability (Ability);
  
}
  unsigned int level_up (Character&);



