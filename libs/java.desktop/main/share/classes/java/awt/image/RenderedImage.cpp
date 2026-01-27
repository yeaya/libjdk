#include <java/awt/image/RenderedImage.h>

#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _RenderedImage_MethodInfo_[] = {
	{"copyData", "(Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, copyData, $WritableRaster*, $WritableRaster*)},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getColorModel, $ColorModel*)},
	{"getData", "()Ljava/awt/image/Raster;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getData, $Raster*)},
	{"getData", "(Ljava/awt/Rectangle;)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getData, $Raster*, $Rectangle*)},
	{"getHeight", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getHeight, int32_t)},
	{"getMinTileX", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getMinTileX, int32_t)},
	{"getMinTileY", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getMinTileY, int32_t)},
	{"getMinX", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getMinX, int32_t)},
	{"getMinY", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getMinY, int32_t)},
	{"getNumXTiles", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getNumXTiles, int32_t)},
	{"getNumYTiles", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getNumYTiles, int32_t)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getProperty, $Object*, $String*)},
	{"getPropertyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getPropertyNames, $StringArray*)},
	{"getSampleModel", "()Ljava/awt/image/SampleModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getSampleModel, $SampleModel*)},
	{"getSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/image/RenderedImage;>;", $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getSources, $Vector*)},
	{"getTile", "(II)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getTile, $Raster*, int32_t, int32_t)},
	{"getTileGridXOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getTileGridXOffset, int32_t)},
	{"getTileGridYOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getTileGridYOffset, int32_t)},
	{"getTileHeight", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getTileHeight, int32_t)},
	{"getTileWidth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getTileWidth, int32_t)},
	{"getWidth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImage, getWidth, int32_t)},
	{}
};

$ClassInfo _RenderedImage_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.RenderedImage",
	nullptr,
	nullptr,
	nullptr,
	_RenderedImage_MethodInfo_
};

$Object* allocate$RenderedImage($Class* clazz) {
	return $of($alloc(RenderedImage));
}

$Class* RenderedImage::load$($String* name, bool initialize) {
	$loadClass(RenderedImage, name, initialize, &_RenderedImage_ClassInfo_, allocate$RenderedImage);
	return class$;
}

$Class* RenderedImage::class$ = nullptr;

		} // image
	} // awt
} // java