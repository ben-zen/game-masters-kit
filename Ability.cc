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

class Ability {
  std::string name;
  Job * controlling_job;
  unsigned int required_level;
  std::string description;

public:
  Ability::Ability (std::string, Job&, unsigned int, std::string);
  std::string print (void) const;
  std::string get_name (void) const;
  std::string get_description (void) const;
  Job* get_controlling_job (void) const;
  unsigned int get_required_level (void) const;
}

  Ability::Ability (std::string n, Job& cj, unsigned int rl, std::string d) {
    name = n;
    controlling_job = cj;
    required_level = rl;
    description = d;
  }

const std::string print (void) {

}

const std::string get_name (void) {
  return name;
}

const std::string get_description (void) {
  return description;
}

const Job* get_controlling_job (void) {
  return controlling_job;
}

const unsigned int get_required_level (void) {
  return required_level;
}
