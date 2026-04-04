#include <sun/awt/image/PixelConverter.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

PixelConverter* PixelConverter::instance = nullptr;

void PixelConverter::init$() {
	this->alphaMask = 0;
}

int32_t PixelConverter::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	$useLocalObjectStack();
	$var($Object, obj, $nc(cm)->getDataElements(rgb, nullptr));
	{
		$var($bytes, bytearr, nullptr);
		int32_t pix = 0;
		$var($shorts, shortarr, nullptr);
		switch (cm->getTransferType()) {
		case $DataBuffer::TYPE_BYTE:
			$assign(bytearr, $cast($bytes, obj));
			pix = 0;
			switch ($nc(bytearr)->length) {
			default:
				pix = bytearr->get(3) << 24;
			case 3:
				pix |= (bytearr->get(2) & 0xff) << 16;
			case 2:
				pix |= (bytearr->get(1) & 0xff) << 8;
			case 1:
				pix |= (bytearr->get(0) & 0xff);
			}
			return pix;
		case $DataBuffer::TYPE_SHORT:
		case $DataBuffer::TYPE_USHORT:
			$assign(shortarr, $cast($shorts, obj));
			return ((($nc(shortarr)->length > 1) ? shortarr->get(1) << 16 : 0) | (shortarr->get(0) & 0xffff));
		case $DataBuffer::TYPE_INT:
			return $nc($cast($ints, obj))->get(0);
		default:
			return rgb;
		}
	}
}

int32_t PixelConverter::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return pixel;
}

int32_t PixelConverter::getAlphaMask() {
	return this->alphaMask;
}

void PixelConverter::clinit$($Class* clazz) {
	$assignStatic(PixelConverter::instance, $new(PixelConverter));
}

PixelConverter::PixelConverter() {
}

$Class* PixelConverter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter, instance)},
		{"alphaMask", "I", nullptr, $PROTECTED, $field(PixelConverter, alphaMask)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(PixelConverter, init$, void)},
		{"getAlphaMask", "()I", nullptr, $PUBLIC | $FINAL, $method(PixelConverter, getAlphaMask, int32_t)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$UshortGray", "sun.awt.image.PixelConverter", "UshortGray", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$ByteGray", "sun.awt.image.PixelConverter", "ByteGray", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$ArgbBm", "sun.awt.image.PixelConverter", "ArgbBm", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$ArgbPre", "sun.awt.image.PixelConverter", "ArgbPre", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$RgbaPre", "sun.awt.image.PixelConverter", "RgbaPre", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$Rgba", "sun.awt.image.PixelConverter", "Rgba", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$Bgrx", "sun.awt.image.PixelConverter", "Bgrx", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$Xbgr", "sun.awt.image.PixelConverter", "Xbgr", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$Ushort4444Argb", "sun.awt.image.PixelConverter", "Ushort4444Argb", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$Ushort555Rgb", "sun.awt.image.PixelConverter", "Ushort555Rgb", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$Ushort555Rgbx", "sun.awt.image.PixelConverter", "Ushort555Rgbx", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$Ushort565Rgb", "sun.awt.image.PixelConverter", "Ushort565Rgb", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$Argb", "sun.awt.image.PixelConverter", "Argb", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$Xrgb", "sun.awt.image.PixelConverter", "Xrgb", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$Rgbx", "sun.awt.image.PixelConverter", "Rgbx", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.image.PixelConverter$UshortGray,sun.awt.image.PixelConverter$ByteGray,sun.awt.image.PixelConverter$ArgbBm,sun.awt.image.PixelConverter$ArgbPre,sun.awt.image.PixelConverter$RgbaPre,sun.awt.image.PixelConverter$Rgba,sun.awt.image.PixelConverter$Bgrx,sun.awt.image.PixelConverter$Xbgr,sun.awt.image.PixelConverter$Ushort4444Argb,sun.awt.image.PixelConverter$Ushort555Rgb,sun.awt.image.PixelConverter$Ushort555Rgbx,sun.awt.image.PixelConverter$Ushort565Rgb,sun.awt.image.PixelConverter$Argb,sun.awt.image.PixelConverter$Xrgb,sun.awt.image.PixelConverter$Rgbx"
	};
	$loadClass(PixelConverter, name, initialize, &classInfo$$, PixelConverter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter);
	});
	return class$;
}

$Class* PixelConverter::class$ = nullptr;

		} // image
	} // awt
} // sun