#include <com/sun/imageio/plugins/common/SingleTileRenderedImage.h>
#include <com/sun/imageio/plugins/common/SimpleRenderedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <jcpp.h>

using $SimpleRenderedImage = ::com::sun::imageio::plugins::common::SimpleRenderedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

void SingleTileRenderedImage::init$($Raster* ras, $ColorModel* colorModel) {
	$SimpleRenderedImage::init$();
	$set(this, ras, ras);
	this->tileGridXOffset = (this->minX = $nc(ras)->getMinX());
	this->tileGridYOffset = (this->minY = ras->getMinY());
	this->tileWidth = (this->width = ras->getWidth());
	this->tileHeight = (this->height = ras->getHeight());
	$set(this, sampleModel, ras->getSampleModel());
	$set(this, colorModel, colorModel);
}

$Raster* SingleTileRenderedImage::getTile(int32_t tileX, int32_t tileY) {
	if (tileX != 0 || tileY != 0) {
		$throwNew($IllegalArgumentException, "tileX != 0 || tileY != 0"_s);
	}
	return this->ras;
}

SingleTileRenderedImage::SingleTileRenderedImage() {
}

$Class* SingleTileRenderedImage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ras", "Ljava/awt/image/Raster;", nullptr, 0, $field(SingleTileRenderedImage, ras)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/image/Raster;Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC, $method(SingleTileRenderedImage, init$, void, $Raster*, $ColorModel*)},
		{"getTile", "(II)Ljava/awt/image/Raster;", nullptr, $PUBLIC, $virtualMethod(SingleTileRenderedImage, getTile, $Raster*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.common.SingleTileRenderedImage",
		"com.sun.imageio.plugins.common.SimpleRenderedImage",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SingleTileRenderedImage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleTileRenderedImage);
	});
	return class$;
}

$Class* SingleTileRenderedImage::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com