/* register_types.cpp */

#include "register_types.h"
#include "class_db.h"
#include "C2DMatrix.h"
#include "geometry.h"
#include "InvertedAABBox2D.h"
#include "Transformations.h"
#include "Vector2d.h"
#include "Wall2D.h"
#include "WallIntersectionTests.h"

void register_summator_types() {

        ClassDB::register_class<Summator>();
}

void unregister_summator_types() {
   //nothing to do here
}
