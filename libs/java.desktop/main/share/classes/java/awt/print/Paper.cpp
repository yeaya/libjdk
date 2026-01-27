#include <java/awt/print/Paper.h>

#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

#undef INCH
#undef LETTER_HEIGHT
#undef LETTER_WIDTH

using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$FieldInfo _Paper_FieldInfo_[] = {
	{"INCH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Paper, INCH)},
	{"LETTER_WIDTH", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Paper, LETTER_WIDTH)},
	{"LETTER_HEIGHT", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Paper, LETTER_HEIGHT)},
	{"mHeight", "D", nullptr, $PRIVATE, $field(Paper, mHeight)},
	{"mWidth", "D", nullptr, $PRIVATE, $field(Paper, mWidth)},
	{"mImageableArea", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(Paper, mImageableArea)},
	{}
};

$MethodInfo _Paper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Paper, init$, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Paper, clone, $Object*)},
	{"getHeight", "()D", nullptr, $PUBLIC, $virtualMethod(Paper, getHeight, double)},
	{"getImageableHeight", "()D", nullptr, $PUBLIC, $virtualMethod(Paper, getImageableHeight, double)},
	{"getImageableWidth", "()D", nullptr, $PUBLIC, $virtualMethod(Paper, getImageableWidth, double)},
	{"getImageableX", "()D", nullptr, $PUBLIC, $virtualMethod(Paper, getImageableX, double)},
	{"getImageableY", "()D", nullptr, $PUBLIC, $virtualMethod(Paper, getImageableY, double)},
	{"getWidth", "()D", nullptr, $PUBLIC, $virtualMethod(Paper, getWidth, double)},
	{"setImageableArea", "(DDDD)V", nullptr, $PUBLIC, $virtualMethod(Paper, setImageableArea, void, double, double, double, double)},
	{"setSize", "(DD)V", nullptr, $PUBLIC, $virtualMethod(Paper, setSize, void, double, double)},
	{}
};

$ClassInfo _Paper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.print.Paper",
	"java.lang.Object",
	"java.lang.Cloneable",
	_Paper_FieldInfo_,
	_Paper_MethodInfo_
};

$Object* allocate$Paper($Class* clazz) {
	return $of($alloc(Paper));
}

double Paper::LETTER_WIDTH = 0.0;
double Paper::LETTER_HEIGHT = 0.0;

void Paper::init$() {
	this->mHeight = Paper::LETTER_HEIGHT;
	this->mWidth = Paper::LETTER_WIDTH;
	$set(this, mImageableArea, $new($Rectangle2D$Double, (double)Paper::INCH, (double)Paper::INCH, this->mWidth - 2 * Paper::INCH, this->mHeight - 2 * Paper::INCH));
}

$Object* Paper::clone() {
	$var(Paper, newPaper, nullptr);
	try {
		$assign(newPaper, $cast(Paper, $Cloneable::clone()));
	} catch ($CloneNotSupportedException& e) {
		e->printStackTrace();
		$assign(newPaper, nullptr);
	}
	return $of(newPaper);
}

double Paper::getHeight() {
	return this->mHeight;
}

void Paper::setSize(double width, double height) {
	this->mWidth = width;
	this->mHeight = height;
}

double Paper::getWidth() {
	return this->mWidth;
}

void Paper::setImageableArea(double x, double y, double width, double height) {
	$set(this, mImageableArea, $new($Rectangle2D$Double, x, y, width, height));
}

double Paper::getImageableX() {
	return $nc(this->mImageableArea)->getX();
}

double Paper::getImageableY() {
	return $nc(this->mImageableArea)->getY();
}

double Paper::getImageableWidth() {
	return $nc(this->mImageableArea)->getWidth();
}

double Paper::getImageableHeight() {
	return $nc(this->mImageableArea)->getHeight();
}

Paper::Paper() {
}

void clinit$Paper($Class* class$) {
	Paper::LETTER_WIDTH = 8.5 * Paper::INCH;
	Paper::LETTER_HEIGHT = (double)(11 * Paper::INCH);
}

$Class* Paper::load$($String* name, bool initialize) {
	$loadClass(Paper, name, initialize, &_Paper_ClassInfo_, clinit$Paper, allocate$Paper);
	return class$;
}

$Class* Paper::class$ = nullptr;

		} // print
	} // awt
} // java