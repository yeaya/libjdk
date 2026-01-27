#include <java/awt/Shape.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _Shape_MethodInfo_[] = {
	{"contains", "(DD)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Shape, contains, bool, double, double)},
	{"contains", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Shape, contains, bool, $Point2D*)},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Shape, contains, bool, double, double, double, double)},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Shape, contains, bool, $Rectangle2D*)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Shape, getBounds, $Rectangle*)},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Shape, getBounds2D, $Rectangle2D*)},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Shape, getPathIterator, $PathIterator*, $AffineTransform*)},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Shape, getPathIterator, $PathIterator*, $AffineTransform*, double)},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Shape, intersects, bool, double, double, double, double)},
	{"intersects", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Shape, intersects, bool, $Rectangle2D*)},
	{}
};

$ClassInfo _Shape_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.Shape",
	nullptr,
	nullptr,
	nullptr,
	_Shape_MethodInfo_
};

$Object* allocate$Shape($Class* clazz) {
	return $of($alloc(Shape));
}

$Class* Shape::load$($String* name, bool initialize) {
	$loadClass(Shape, name, initialize, &_Shape_ClassInfo_, allocate$Shape);
	return class$;
}

$Class* Shape::class$ = nullptr;

	} // awt
} // java