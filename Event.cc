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

enum event_state { not_started, in_progress, completed };

class Event {
  std::string name;
  std::string description; // Used for storing related plot info, too.
  Location* site;
  std::vector<Item> items_present;
  /* There should be some way to store what quantities of money are present,
   * probably can fold that into the Item* vector.
   */
  event_state status;
  int encounter_level;
  
public:
  // Functions provided by Event
  // Accessors
  Location* get_location () const;
  std::string get_name () const;
  std::string get_description () const;
  std::vector<Item> get_items () const;
  int get_encounter_level () const;
  event_state get_event_state () const;
  // Mutators
  event_state start_event ();
  event_state finish_event ();
  Item take_item (Item);
}
