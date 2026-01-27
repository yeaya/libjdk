#include <com/sun/java/swing/plaf/gtk/Metacity$RoundRectClipShape.h>

#include <com/sun/java/swing/plaf/gtk/Metacity$RoundRectClipShape$RoundishRectIterator.h>
#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <jcpp.h>

#undef BOTTOM_LEFT
#undef BOTTOM_RIGHT
#undef TOP_LEFT
#undef TOP_RIGHT

using $Metacity$RoundRectClipShape$RoundishRectIterator = ::com::sun::java::swing::plaf::gtk::Metacity$RoundRectClipShape$RoundishRectIterator;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _Metacity$RoundRectClipShape_FieldInfo_[] = {
	{"TOP_LEFT", "I", nullptr, $STATIC | $FINAL, $constField(Metacity$RoundRectClipShape, TOP_LEFT)},
	{"TOP_RIGHT", "I", nullptr, $STATIC | $FINAL, $constField(Metacity$RoundRectClipShape, TOP_RIGHT)},
	{"BOTTOM_LEFT", "I", nullptr, $STATIC | $FINAL, $constField(Metacity$RoundRectClipShape, BOTTOM_LEFT)},
	{"BOTTOM_RIGHT", "I", nullptr, $STATIC | $FINAL, $constField(Metacity$RoundRectClipShape, BOTTOM_RIGHT)},
	{"x", "I", nullptr, 0, $field(Metacity$RoundRectClipShape, x)},
	{"y", "I", nullptr, 0, $field(Metacity$RoundRectClipShape, y)},
	{"width", "I", nullptr, 0, $field(Metacity$RoundRectClipShape, width)},
	{"height", "I", nullptr, 0, $field(Metacity$RoundRectClipShape, height)},
	{"arcwidth", "I", nullptr, 0, $field(Metacity$RoundRectClipShape, arcwidth)},
	{"archeight", "I", nullptr, 0, $field(Metacity$RoundRectClipShape, archeight)},
	{"corners", "I", nullptr, 0, $field(Metacity$RoundRectClipShape, corners)},
	{}
};

$MethodInfo _Metacity$RoundRectClipShape_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Metacity$RoundRectClipShape, init$, void)},
	{"<init>", "(IIIIIII)V", nullptr, $PUBLIC, $method(Metacity$RoundRectClipShape, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"classify", "(DDDD)I", nullptr, $PRIVATE, $method(Metacity$RoundRectClipShape, classify, int32_t, double, double, double, double)},
	{"contains", "(DD)Z", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, contains, bool, double, double)},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, contains, bool, double, double, double, double)},
	{"getArcHeight", "()D", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, getArcHeight, double)},
	{"getArcWidth", "()D", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, getArcWidth, double)},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, getBounds2D, $Rectangle2D*)},
	{"getCornerFlags", "()I", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, getCornerFlags, int32_t)},
	{"getHeight", "()D", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, getHeight, double)},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, getPathIterator, $PathIterator*, $AffineTransform*)},
	{"getWidth", "()D", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, getWidth, double)},
	{"getX", "()D", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, getX, double)},
	{"getY", "()D", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, getY, double)},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, intersects, bool, double, double, double, double)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, isEmpty, bool)},
	{"setFrame", "(DDDD)V", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, setFrame, void, double, double, double, double)},
	{"setRoundedRect", "(IIIIIII)V", nullptr, $PUBLIC, $virtualMethod(Metacity$RoundRectClipShape, setRoundedRect, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _Metacity$RoundRectClipShape_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape", "com.sun.java.swing.plaf.gtk.Metacity", "RoundRectClipShape", $STATIC},
	{"com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape$RoundishRectIterator", "com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape", "RoundishRectIterator", $STATIC},
	{}
};

$ClassInfo _Metacity$RoundRectClipShape_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape",
	"java.awt.geom.RectangularShape",
	nullptr,
	_Metacity$RoundRectClipShape_FieldInfo_,
	_Metacity$RoundRectClipShape_MethodInfo_,
	nullptr,
	nullptr,
	_Metacity$RoundRectClipShape_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.Metacity"
};

$Object* allocate$Metacity$RoundRectClipShape($Class* clazz) {
	return $of($alloc(Metacity$RoundRectClipShape));
}

void Metacity$RoundRectClipShape::init$() {
	$RectangularShape::init$();
}

void Metacity$RoundRectClipShape::init$(int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcw, int32_t arch, int32_t corners) {
	$RectangularShape::init$();
	setRoundedRect(x, y, w, h, arcw, arch, corners);
}

void Metacity$RoundRectClipShape::setRoundedRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcw, int32_t arch, int32_t corners) {
	this->corners = corners;
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
	this->arcwidth = arcw;
	this->archeight = arch;
}

double Metacity$RoundRectClipShape::getX() {
	return (double)this->x;
}

double Metacity$RoundRectClipShape::getY() {
	return (double)this->y;
}

double Metacity$RoundRectClipShape::getWidth() {
	return (double)this->width;
}

double Metacity$RoundRectClipShape::getHeight() {
	return (double)this->height;
}

double Metacity$RoundRectClipShape::getArcWidth() {
	return (double)this->arcwidth;
}

double Metacity$RoundRectClipShape::getArcHeight() {
	return (double)this->archeight;
}

bool Metacity$RoundRectClipShape::isEmpty() {
	return false;
}

$Rectangle2D* Metacity$RoundRectClipShape::getBounds2D() {
	return nullptr;
}

int32_t Metacity$RoundRectClipShape::getCornerFlags() {
	return this->corners;
}

void Metacity$RoundRectClipShape::setFrame(double x, double y, double w, double h) {
}

bool Metacity$RoundRectClipShape::contains(double x, double y) {
	return false;
}

int32_t Metacity$RoundRectClipShape::classify(double coord, double left, double right, double arcsize) {
	return 0;
}

bool Metacity$RoundRectClipShape::intersects(double x, double y, double w, double h) {
	return false;
}

bool Metacity$RoundRectClipShape::contains(double x, double y, double w, double h) {
	return false;
}

$PathIterator* Metacity$RoundRectClipShape::getPathIterator($AffineTransform* at) {
	return $new($Metacity$RoundRectClipShape$RoundishRectIterator, this, at);
}

Metacity$RoundRectClipShape::Metacity$RoundRectClipShape() {
}

$Class* Metacity$RoundRectClipShape::load$($String* name, bool initialize) {
	$loadClass(Metacity$RoundRectClipShape, name, initialize, &_Metacity$RoundRectClipShape_ClassInfo_, allocate$Metacity$RoundRectClipShape);
	return class$;
}

$Class* Metacity$RoundRectClipShape::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com