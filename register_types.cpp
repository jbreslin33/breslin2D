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

void register_breslin2D_types() {

        ClassDB::register_class<C2DMatrix>();
        ClassDB::register_class<InvertedAABBox2D>();
        ClassDB::register_class<Wall2D>();
}

void unregister_summator_types() {
   //nothing to do here
}
