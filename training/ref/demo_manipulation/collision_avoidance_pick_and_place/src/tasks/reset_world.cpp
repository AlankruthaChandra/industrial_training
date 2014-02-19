/*
 * open_gripper.cpp
 *
 *  Created on: Jun 3, 2013
 *      Author: ros-industrial
 */

#include <collision_avoidance_pick_and_place/pick_and_place.h>

/*    RESET WORLD
  Goal:
  Hints:
*/
void collision_avoidance_pick_and_place::PickAndPlace::reset_world(bool refresh_octomap)
{

	// detach box if one is attached
	set_attached_object(false);

	// get new sensor snapshot
	if(refresh_octomap)
	{
		detect_box_pick();
	}

}


