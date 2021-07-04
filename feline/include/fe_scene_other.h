#ifndef FE_SCENE_OTHER_H
#define FE_SCENE_OTHER_H

#include "fe_scene.h"
#include "fe_player.h"
#include "bn_fixed_point.h"

namespace fe
{
    class Other
    {       
        public:
            Scene execute(Player player, bn::fixed_point spawn);
    };
}

#endif