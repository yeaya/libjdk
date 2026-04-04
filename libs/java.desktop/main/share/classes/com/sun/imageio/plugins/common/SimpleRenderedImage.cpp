#include <com/sun/imageio/plugins/common/SimpleRenderedImage.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

void SimpleRenderedImage::init$() {
	this->tileGridXOffset = 0;
	this->tileGridYOffset = 0;
	$set(this, sources, $new($Vector));
	$set(this, properties, $new($Hashtable));
}

int32_t SimpleRenderedImage::getMinX() {
	return this->minX;
}

int32_t SimpleRenderedImage::getMaxX() {
	int32_t var$0 = getMinX();
	return var$0 + getWidth();
}

int32_t SimpleRenderedImage::getMinY() {
	return this->minY;
}

int32_t SimpleRenderedImage::getMaxY() {
	int32_t var$0 = getMinY();
	return var$0 + getHeight();
}

int32_t SimpleRenderedImage::getWidth() {
	return this->width;
}

int32_t SimpleRenderedImage::getHeight() {
	return this->height;
}

$Rectangle* SimpleRenderedImage::getBounds() {
	int32_t var$0 = getMinX();
	int32_t var$1 = getMinY();
	int32_t var$2 = getWidth();
	return $new($Rectangle, var$0, var$1, var$2, getHeight());
}

int32_t SimpleRenderedImage::getTileWidth() {
	return this->tileWidth;
}

int32_t SimpleRenderedImage::getTileHeight() {
	return this->tileHeight;
}

int32_t SimpleRenderedImage::getTileGridXOffset() {
	return this->tileGridXOffset;
}

int32_t SimpleRenderedImage::getTileGridYOffset() {
	return this->tileGridYOffset;
}

int32_t SimpleRenderedImage::getMinTileX() {
	return XToTileX(getMinX());
}

int32_t SimpleRenderedImage::getMaxTileX() {
	return XToTileX(getMaxX() - 1);
}

int32_t SimpleRenderedImage::getNumXTiles() {
	int32_t var$0 = getMaxTileX();
	return var$0 - getMinTileX() + 1;
}

int32_t SimpleRenderedImage::getMinTileY() {
	return YToTileY(getMinY());
}

int32_t SimpleRenderedImage::getMaxTileY() {
	return YToTileY(getMaxY() - 1);
}

int32_t SimpleRenderedImage::getNumYTiles() {
	int32_t var$0 = getMaxTileY();
	return var$0 - getMinTileY() + 1;
}

$SampleModel* SimpleRenderedImage::getSampleModel() {
	return this->sampleModel;
}

$ColorModel* SimpleRenderedImage::getColorModel() {
	return this->colorModel;
}

$Object* SimpleRenderedImage::getProperty($String* name$renamed) {
	$useLocalObjectStack();
	$var($String, name, name$renamed);
	$assign(name, $nc(name)->toLowerCase());
	$var($Object, value, $nc(this->properties)->get(name));
	$init($Image);
	return value != nullptr ? value : $Image::UndefinedProperty;
}

$StringArray* SimpleRenderedImage::getPropertyNames() {
	$useLocalObjectStack();
	$var($StringArray, names, nullptr);
	if ($nc(this->properties)->size() > 0) {
		$assign(names, $new($StringArray, this->properties->size()));
		int32_t index = 0;
		$var($Enumeration, e, this->properties->keys());
		while ($nc(e)->hasMoreElements()) {
			$var($String, name, $cast($String, e->nextElement()));
			names->set(index++, name);
		}
	}
	return names;
}

$StringArray* SimpleRenderedImage::getPropertyNames($String* prefix$renamed) {
	$useLocalObjectStack();
	$var($String, prefix, prefix$renamed);
	$var($StringArray, propertyNames, getPropertyNames());
	if (propertyNames == nullptr) {
		return nullptr;
	}
	$assign(prefix, $nc(prefix)->toLowerCase());
	$var($Vector, names, $new($Vector));
	for (int32_t i = 0; i < $nc(propertyNames)->length; ++i) {
		if ($nc(propertyNames->get(i))->startsWith(prefix)) {
			names->addElement(propertyNames->get(i));
		}
	}
	if (names->size() == 0) {
		return nullptr;
	}
	$var($StringArray, prefixNames, $new($StringArray, names->size()));
	int32_t count = 0;
	{
		$var($Iterator, it, names->iterator());
		for (; $nc(it)->hasNext();) {
			prefixNames->set(count++, $$cast($String, it->next()));
		}
	}
	return prefixNames;
}

int32_t SimpleRenderedImage::XToTileX(int32_t x, int32_t tileGridXOffset, int32_t tileWidth) {
	$init(SimpleRenderedImage);
	x -= tileGridXOffset;
	if (x < 0) {
		x += 1 - tileWidth;
	}
	return $div(x, tileWidth);
}

int32_t SimpleRenderedImage::YToTileY(int32_t y, int32_t tileGridYOffset, int32_t tileHeight) {
	$init(SimpleRenderedImage);
	y -= tileGridYOffset;
	if (y < 0) {
		y += 1 - tileHeight;
	}
	return $div(y, tileHeight);
}

int32_t SimpleRenderedImage::XToTileX(int32_t x) {
	int32_t var$0 = getTileGridXOffset();
	return XToTileX(x, var$0, getTileWidth());
}

int32_t SimpleRenderedImage::YToTileY(int32_t y) {
	int32_t var$0 = getTileGridYOffset();
	return YToTileY(y, var$0, getTileHeight());
}

int32_t SimpleRenderedImage::tileXToX(int32_t tx, int32_t tileGridXOffset, int32_t tileWidth) {
	$init(SimpleRenderedImage);
	return tx * tileWidth + tileGridXOffset;
}

int32_t SimpleRenderedImage::tileYToY(int32_t ty, int32_t tileGridYOffset, int32_t tileHeight) {
	$init(SimpleRenderedImage);
	return ty * tileHeight + tileGridYOffset;
}

int32_t SimpleRenderedImage::tileXToX(int32_t tx) {
	return tx * this->tileWidth + this->tileGridXOffset;
}

int32_t SimpleRenderedImage::tileYToY(int32_t ty) {
	return ty * this->tileHeight + this->tileGridYOffset;
}

$Vector* SimpleRenderedImage::getSources() {
	return nullptr;
}

$Raster* SimpleRenderedImage::getData() {
	int32_t var$0 = getMinX();
	int32_t var$1 = getMinY();
	int32_t var$2 = getWidth();
	$var($Rectangle, rect, $new($Rectangle, var$0, var$1, var$2, getHeight()));
	return getData(rect);
}

$Raster* SimpleRenderedImage::getData($Rectangle* bounds$renamed) {
	$useLocalObjectStack();
	$var($Rectangle, bounds, bounds$renamed);
	$var($Rectangle, imageBounds, getBounds());
	if (bounds == nullptr) {
		$assign(bounds, imageBounds);
	} else if (!bounds->intersects(imageBounds)) {
		$throwNew($IllegalArgumentException, "The provided region doesn\'t intersect with the image bounds."_s);
	}
	int32_t startX = XToTileX($nc(bounds)->x);
	int32_t startY = YToTileY(bounds->y);
	int32_t endX = XToTileX(bounds->x + bounds->width - 1);
	int32_t endY = YToTileY(bounds->y + bounds->height - 1);
	if ((startX == endX) && (startY == endY)) {
		$var($Raster, tile, getTile(startX, startY));
		return $nc(tile)->createChild(bounds->x, bounds->y, bounds->width, bounds->height, bounds->x, bounds->y, nullptr);
	} else {
		if (!$nc(imageBounds)->contains(bounds)) {
			$var($Rectangle, xsect, bounds->intersection(imageBounds));
			startX = XToTileX($nc(xsect)->x);
			startY = YToTileY(xsect->y);
			endX = XToTileX(xsect->x + xsect->width - 1);
			endY = YToTileY(xsect->y + xsect->height - 1);
		}
		$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(bounds->width, bounds->height));
		$var($WritableRaster, dest, $Raster::createWritableRaster(sm, $(bounds->getLocation())));
		for (int32_t j = startY; j <= endY; ++j) {
			for (int32_t i = startX; i <= endX; ++i) {
				$var($Raster, tile, getTile(i, j));
				$var($Rectangle, tileRect, $nc(tile)->getBounds());
				$var($Rectangle, intersectRect, bounds->intersection($(tile->getBounds())));
				$var($Raster, liveRaster, tile->createChild($nc(intersectRect)->x, $nc(intersectRect)->y, $nc(intersectRect)->width, $nc(intersectRect)->height, $nc(intersectRect)->x, $nc(intersectRect)->y, nullptr));
				$nc(dest)->setRect(liveRaster);
			}
		}
		return dest;
	}
}

$WritableRaster* SimpleRenderedImage::copyData($WritableRaster* dest$renamed) {
	$useLocalObjectStack();
	$var($WritableRaster, dest, dest$renamed);
	$var($Rectangle, imageBounds, getBounds());
	$var($Rectangle, bounds, nullptr);
	if (dest == nullptr) {
		$assign(bounds, imageBounds);
		$var($Point, p, $new($Point, this->minX, this->minY));
		$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(this->width, this->height));
		$assign(dest, $Raster::createWritableRaster(sm, p));
	} else {
		$assign(bounds, dest->getBounds());
	}
	$var($Rectangle, xsect, $nc(imageBounds)->contains(bounds) ? bounds : $nc(bounds)->intersection(imageBounds));
	int32_t startX = XToTileX($nc(xsect)->x);
	int32_t startY = YToTileY(xsect->y);
	int32_t endX = XToTileX(xsect->x + xsect->width - 1);
	int32_t endY = YToTileY(xsect->y + xsect->height - 1);
	for (int32_t j = startY; j <= endY; ++j) {
		for (int32_t i = startX; i <= endX; ++i) {
			$var($Raster, tile, getTile(i, j));
			$var($Rectangle, tileRect, $nc(tile)->getBounds());
			$var($Rectangle, intersectRect, $nc(bounds)->intersection($(tile->getBounds())));
			$var($Raster, liveRaster, tile->createChild($nc(intersectRect)->x, $nc(intersectRect)->y, $nc(intersectRect)->width, $nc(intersectRect)->height, $nc(intersectRect)->x, $nc(intersectRect)->y, nullptr));
			$nc(dest)->setRect(liveRaster);
		}
	}
	return dest;
}

SimpleRenderedImage::SimpleRenderedImage() {
}

$Class* SimpleRenderedImage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"minX", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, minX)},
		{"minY", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, minY)},
		{"width", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, width)},
		{"height", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, height)},
		{"tileWidth", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, tileWidth)},
		{"tileHeight", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, tileHeight)},
		{"tileGridXOffset", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, tileGridXOffset)},
		{"tileGridYOffset", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, tileGridYOffset)},
		{"sampleModel", "Ljava/awt/image/SampleModel;", nullptr, $PROTECTED, $field(SimpleRenderedImage, sampleModel)},
		{"colorModel", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED, $field(SimpleRenderedImage, colorModel)},
		{"sources", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/image/RenderedImage;>;", $PROTECTED, $field(SimpleRenderedImage, sources)},
		{"properties", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PROTECTED, $field(SimpleRenderedImage, properties)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleRenderedImage, init$, void)},
		{"XToTileX", "(III)I", nullptr, $PUBLIC | $STATIC, $staticMethod(SimpleRenderedImage, XToTileX, int32_t, int32_t, int32_t, int32_t)},
		{"XToTileX", "(I)I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, XToTileX, int32_t, int32_t)},
		{"YToTileY", "(III)I", nullptr, $PUBLIC | $STATIC, $staticMethod(SimpleRenderedImage, YToTileY, int32_t, int32_t, int32_t, int32_t)},
		{"YToTileY", "(I)I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, YToTileY, int32_t, int32_t)},
		{"copyData", "(Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, copyData, $WritableRaster*, $WritableRaster*)},
		{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getBounds, $Rectangle*)},
		{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getColorModel, $ColorModel*)},
		{"getData", "()Ljava/awt/image/Raster;", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getData, $Raster*)},
		{"getData", "(Ljava/awt/Rectangle;)Ljava/awt/image/Raster;", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getData, $Raster*, $Rectangle*)},
		{"getHeight", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getHeight, int32_t)},
		{"getMaxTileX", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getMaxTileX, int32_t)},
		{"getMaxTileY", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getMaxTileY, int32_t)},
		{"getMaxX", "()I", nullptr, $PUBLIC | $FINAL, $method(SimpleRenderedImage, getMaxX, int32_t)},
		{"getMaxY", "()I", nullptr, $PUBLIC | $FINAL, $method(SimpleRenderedImage, getMaxY, int32_t)},
		{"getMinTileX", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getMinTileX, int32_t)},
		{"getMinTileY", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getMinTileY, int32_t)},
		{"getMinX", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getMinX, int32_t)},
		{"getMinY", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getMinY, int32_t)},
		{"getNumXTiles", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getNumXTiles, int32_t)},
		{"getNumYTiles", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getNumYTiles, int32_t)},
		{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getProperty, $Object*, $String*)},
		{"getPropertyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getPropertyNames, $StringArray*)},
		{"getPropertyNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getPropertyNames, $StringArray*, $String*)},
		{"getSampleModel", "()Ljava/awt/image/SampleModel;", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getSampleModel, $SampleModel*)},
		{"getSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/image/RenderedImage;>;", $PUBLIC, $virtualMethod(SimpleRenderedImage, getSources, $Vector*)},
		{"getTileGridXOffset", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getTileGridXOffset, int32_t)},
		{"getTileGridYOffset", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getTileGridYOffset, int32_t)},
		{"getTileHeight", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getTileHeight, int32_t)},
		{"getTileWidth", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getTileWidth, int32_t)},
		{"getWidth", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, getWidth, int32_t)},
		{"tileXToX", "(III)I", nullptr, $PUBLIC | $STATIC, $staticMethod(SimpleRenderedImage, tileXToX, int32_t, int32_t, int32_t, int32_t)},
		{"tileXToX", "(I)I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, tileXToX, int32_t, int32_t)},
		{"tileYToY", "(III)I", nullptr, $PUBLIC | $STATIC, $staticMethod(SimpleRenderedImage, tileYToY, int32_t, int32_t, int32_t, int32_t)},
		{"tileYToY", "(I)I", nullptr, $PUBLIC, $virtualMethod(SimpleRenderedImage, tileYToY, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.imageio.plugins.common.SimpleRenderedImage",
		"java.lang.Object",
		"java.awt.image.RenderedImage",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleRenderedImage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleRenderedImage);
	});
	return class$;
}

$Class* SimpleRenderedImage::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com