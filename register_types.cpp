/* register_types.cpp */

#include "register_types.h"
#include "class_db.h"
#include "C2DMatrix.h"
#include "geometry.h"
#include "Transformations.h"
#include "Vector2D.h"
#include "Wall2D.h"
#include "WallIntersectionTests.h"

void register_breslin2D_types() {

        ClassDB::register_class<C2DMatrix>();
        ClassDB::register_class<Wall2D>();
}

void unregister_breslin2D_types() {
   //nothing to do here
}
