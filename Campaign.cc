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

class Campaign {
  std::string name;
  std::vector<Character> characters;
  std::vector<Location> places;
  std::vector<Event> events;

public:
  std::string get_name (void) const;
  std::vector<Character> get_characters (void) const;
  std::vector<Location> get_locations (void) const;
  std::vector<Event> get_events (void) const;

  Character* add_character (Character);
  Location* add_location (Location);
  Event* add_event (Event);
  
  Character remove_character (Character*);
  Location remove_location (Location*);
  Event remove_event (Event*);
}
