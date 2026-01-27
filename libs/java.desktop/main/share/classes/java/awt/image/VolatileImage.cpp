#include <java/awt/image/VolatileImage.h>

#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageProducer.h>
#include <jcpp.h>

#undef IMAGE_INCOMPATIBLE
#undef IMAGE_OK
#undef IMAGE_RESTORED
#undef TRANSLUCENT

using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Transparency = ::java::awt::Transparency;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _VolatileImage_FieldInfo_[] = {
	{"IMAGE_OK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VolatileImage, IMAGE_OK)},
	{"IMAGE_RESTORED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VolatileImage, IMAGE_RESTORED)},
	{"IMAGE_INCOMPATIBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VolatileImage, IMAGE_INCOMPATIBLE)},
	{"transparency", "I", nullptr, $PROTECTED, $field(VolatileImage, transparency)},
	{}
};

$MethodInfo _VolatileImage_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(VolatileImage, init$, void)},
	{"contentsLost", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VolatileImage, contentsLost, bool)},
	{"createGraphics", "()Ljava/awt/Graphics2D;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VolatileImage, createGraphics, $Graphics2D*)},
	{"getCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VolatileImage, getCapabilities, $ImageCapabilities*)},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(VolatileImage, getGraphics, $Graphics*)},
	{"getHeight", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VolatileImage, getHeight, int32_t)},
	{"getSnapshot", "()Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VolatileImage, getSnapshot, $BufferedImage*)},
	{"getSource", "()Ljava/awt/image/ImageProducer;", nullptr, $PUBLIC, $virtualMethod(VolatileImage, getSource, $ImageProducer*)},
	{"getTransparency", "()I", nullptr, $PUBLIC, $virtualMethod(VolatileImage, getTransparency, int32_t)},
	{"getWidth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VolatileImage, getWidth, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljava/awt/GraphicsConfiguration;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VolatileImage, validate, int32_t, $GraphicsConfiguration*)},
	{}
};

$ClassInfo _VolatileImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.image.VolatileImage",
	"java.awt.Image",
	"java.awt.Transparency",
	_VolatileImage_FieldInfo_,
	_VolatileImage_MethodInfo_
};

$Object* allocate$VolatileImage($Class* clazz) {
	return $of($alloc(VolatileImage));
}

int32_t VolatileImage::hashCode() {
	 return this->$Image::hashCode();
}

bool VolatileImage::equals(Object$* arg0) {
	 return this->$Image::equals(arg0);
}

$Object* VolatileImage::clone() {
	 return this->$Image::clone();
}

$String* VolatileImage::toString() {
	 return this->$Image::toString();
}

void VolatileImage::finalize() {
	this->$Image::finalize();
}

void VolatileImage::init$() {
	$Image::init$();
	this->transparency = $Transparency::TRANSLUCENT;
}

$ImageProducer* VolatileImage::getSource() {
	return $nc($(getSnapshot()))->getSource();
}

$Graphics* VolatileImage::getGraphics() {
	return createGraphics();
}

int32_t VolatileImage::getTransparency() {
	return this->transparency;
}

VolatileImage::VolatileImage() {
}

$Class* VolatileImage::load$($String* name, bool initialize) {
	$loadClass(VolatileImage, name, initialize, &_VolatileImage_ClassInfo_, allocate$VolatileImage);
	return class$;
}

$Class* VolatileImage::class$ = nullptr;

		} // image
	} // awt
} // java