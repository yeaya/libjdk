#include <java/awt/font/ImageGraphicAttribute.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/font/GraphicAttribute.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $GraphicAttribute = ::java::awt::font::GraphicAttribute;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _ImageGraphicAttribute_FieldInfo_[] = {
	{"fImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(ImageGraphicAttribute, fImage)},
	{"fImageWidth", "F", nullptr, $PRIVATE, $field(ImageGraphicAttribute, fImageWidth)},
	{"fImageHeight", "F", nullptr, $PRIVATE, $field(ImageGraphicAttribute, fImageHeight)},
	{"fOriginX", "F", nullptr, $PRIVATE, $field(ImageGraphicAttribute, fOriginX)},
	{"fOriginY", "F", nullptr, $PRIVATE, $field(ImageGraphicAttribute, fOriginY)},
	{}
};

$MethodInfo _ImageGraphicAttribute_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Image;I)V", nullptr, $PUBLIC, $method(ImageGraphicAttribute, init$, void, $Image*, int32_t)},
	{"<init>", "(Ljava/awt/Image;IFF)V", nullptr, $PUBLIC, $method(ImageGraphicAttribute, init$, void, $Image*, int32_t, float, float)},
	{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC, $virtualMethod(ImageGraphicAttribute, draw, void, $Graphics2D*, float, float)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ImageGraphicAttribute, equals, bool, Object$*)},
	{"equals", "(Ljava/awt/font/ImageGraphicAttribute;)Z", nullptr, $PUBLIC, $method(ImageGraphicAttribute, equals, bool, ImageGraphicAttribute*)},
	{"getAdvance", "()F", nullptr, $PUBLIC, $virtualMethod(ImageGraphicAttribute, getAdvance, float)},
	{"getAscent", "()F", nullptr, $PUBLIC, $virtualMethod(ImageGraphicAttribute, getAscent, float)},
	{"getBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(ImageGraphicAttribute, getBounds, $Rectangle2D*)},
	{"getDescent", "()F", nullptr, $PUBLIC, $virtualMethod(ImageGraphicAttribute, getDescent, float)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ImageGraphicAttribute, hashCode, int32_t)},
	{}
};

$ClassInfo _ImageGraphicAttribute_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.ImageGraphicAttribute",
	"java.awt.font.GraphicAttribute",
	nullptr,
	_ImageGraphicAttribute_FieldInfo_,
	_ImageGraphicAttribute_MethodInfo_
};

$Object* allocate$ImageGraphicAttribute($Class* clazz) {
	return $of($alloc(ImageGraphicAttribute));
}

void ImageGraphicAttribute::init$($Image* image, int32_t alignment) {
	ImageGraphicAttribute::init$(image, alignment, (float)0, (float)0);
}

void ImageGraphicAttribute::init$($Image* image, int32_t alignment, float originX, float originY) {
	$GraphicAttribute::init$(alignment);
	$set(this, fImage, image);
	this->fImageWidth = (float)$nc(image)->getWidth(nullptr);
	this->fImageHeight = (float)image->getHeight(nullptr);
	this->fOriginX = originX;
	this->fOriginY = originY;
}

float ImageGraphicAttribute::getAscent() {
	return $Math::max((float)0, this->fOriginY);
}

float ImageGraphicAttribute::getDescent() {
	return $Math::max((float)0, this->fImageHeight - this->fOriginY);
}

float ImageGraphicAttribute::getAdvance() {
	return $Math::max((float)0, this->fImageWidth - this->fOriginX);
}

$Rectangle2D* ImageGraphicAttribute::getBounds() {
	return $new($Rectangle2D$Float, -this->fOriginX, -this->fOriginY, this->fImageWidth, this->fImageHeight);
}

void ImageGraphicAttribute::draw($Graphics2D* graphics, float x, float y) {
	$nc(graphics)->drawImage(this->fImage, $cast(int32_t, (x - this->fOriginX)), $cast(int32_t, (y - this->fOriginY)), nullptr);
}

int32_t ImageGraphicAttribute::hashCode() {
	return $nc($of(this->fImage))->hashCode();
}

bool ImageGraphicAttribute::equals(Object$* rhs) {
	try {
		return equals($cast(ImageGraphicAttribute, rhs));
	} catch ($ClassCastException& e) {
		return false;
	}
	$shouldNotReachHere();
}

bool ImageGraphicAttribute::equals(ImageGraphicAttribute* rhs) {
	if (rhs == nullptr) {
		return false;
	}
	if (this == rhs) {
		return true;
	}
	if (this->fOriginX != $nc(rhs)->fOriginX || this->fOriginY != $nc(rhs)->fOriginY) {
		return false;
	}
	int32_t var$0 = getAlignment();
	if (var$0 != $nc(rhs)->getAlignment()) {
		return false;
	}
	if (!$nc($of(this->fImage))->equals($nc(rhs)->fImage)) {
		return false;
	}
	return true;
}

ImageGraphicAttribute::ImageGraphicAttribute() {
}

$Class* ImageGraphicAttribute::load$($String* name, bool initialize) {
	$loadClass(ImageGraphicAttribute, name, initialize, &_ImageGraphicAttribute_ClassInfo_, allocate$ImageGraphicAttribute);
	return class$;
}

$Class* ImageGraphicAttribute::class$ = nullptr;

		} // font
	} // awt
} // java