#include <sun/font/DelegatingShape.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _DelegatingShape_FieldInfo_[] = {
	{"delegate", "Ljava/awt/Shape;", nullptr, 0, $field(DelegatingShape, delegate)},
	{}
};

$MethodInfo _DelegatingShape_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC, $method(DelegatingShape, init$, void, $Shape*)},
	{"contains", "(DD)Z", nullptr, $PUBLIC, $virtualMethod(DelegatingShape, contains, bool, double, double)},
	{"contains", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC, $virtualMethod(DelegatingShape, contains, bool, $Point2D*)},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC, $virtualMethod(DelegatingShape, contains, bool, double, double, double, double)},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC, $virtualMethod(DelegatingShape, contains, bool, $Rectangle2D*)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(DelegatingShape, getBounds, $Rectangle*)},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(DelegatingShape, getBounds2D, $Rectangle2D*)},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC, $virtualMethod(DelegatingShape, getPathIterator, $PathIterator*, $AffineTransform*)},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC, $virtualMethod(DelegatingShape, getPathIterator, $PathIterator*, $AffineTransform*, double)},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC, $virtualMethod(DelegatingShape, intersects, bool, double, double, double, double)},
	{"intersects", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC, $virtualMethod(DelegatingShape, intersects, bool, $Rectangle2D*)},
	{}
};

$ClassInfo _DelegatingShape_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.DelegatingShape",
	"java.lang.Object",
	"java.awt.Shape",
	_DelegatingShape_FieldInfo_,
	_DelegatingShape_MethodInfo_
};

$Object* allocate$DelegatingShape($Class* clazz) {
	return $of($alloc(DelegatingShape));
}

void DelegatingShape::init$($Shape* delegate) {
	$set(this, delegate, delegate);
}

$Rectangle* DelegatingShape::getBounds() {
	return $nc(this->delegate)->getBounds();
}

$Rectangle2D* DelegatingShape::getBounds2D() {
	return $nc(this->delegate)->getBounds2D();
}

bool DelegatingShape::contains(double x, double y) {
	return $nc(this->delegate)->contains(x, y);
}

bool DelegatingShape::contains($Point2D* p) {
	return $nc(this->delegate)->contains(p);
}

bool DelegatingShape::intersects(double x, double y, double w, double h) {
	return $nc(this->delegate)->intersects(x, y, w, h);
}

bool DelegatingShape::intersects($Rectangle2D* r) {
	return $nc(this->delegate)->intersects(r);
}

bool DelegatingShape::contains(double x, double y, double w, double h) {
	return $nc(this->delegate)->contains(x, y, w, h);
}

bool DelegatingShape::contains($Rectangle2D* r) {
	return $nc(this->delegate)->contains(r);
}

$PathIterator* DelegatingShape::getPathIterator($AffineTransform* at) {
	return $nc(this->delegate)->getPathIterator(at);
}

$PathIterator* DelegatingShape::getPathIterator($AffineTransform* at, double flatness) {
	return $nc(this->delegate)->getPathIterator(at, flatness);
}

DelegatingShape::DelegatingShape() {
}

$Class* DelegatingShape::load$($String* name, bool initialize) {
	$loadClass(DelegatingShape, name, initialize, &_DelegatingShape_ClassInfo_, allocate$DelegatingShape);
	return class$;
}

$Class* DelegatingShape::class$ = nullptr;

	} // font
} // sun