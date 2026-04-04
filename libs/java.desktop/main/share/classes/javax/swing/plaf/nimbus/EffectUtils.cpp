#include <javax/swing/plaf/nimbus/EffectUtils.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

#undef PI
#undef TRANSLUCENT
#undef TYPE_BYTE_GRAY
#undef TYPE_INT_ARGB
#undef TYPE_INT_RGB

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Transparency = ::java::awt::Transparency;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void EffectUtils::init$() {
}

void EffectUtils::clearImage($BufferedImage* img) {
	$var($Graphics2D, g2, $nc(img)->createGraphics());
	$init($AlphaComposite);
	$nc(g2)->setComposite($AlphaComposite::Clear);
	int32_t var$0 = img->getWidth();
	g2->fillRect(0, 0, var$0, img->getHeight());
	g2->dispose();
}

$BufferedImage* EffectUtils::gaussianBlur($BufferedImage* src, $BufferedImage* dst$renamed, int32_t radius) {
	$useLocalObjectStack();
	$var($BufferedImage, dst, dst$renamed);
	int32_t width = $nc(src)->getWidth();
	int32_t height = src->getHeight();
	bool var$1 = dst == nullptr || dst->getWidth() != width;
	bool var$0 = var$1 || dst->getHeight() != height;
	if (!var$0) {
		int32_t var$2 = src->getType();
		var$0 = var$2 != dst->getType();
	}
	if (var$0) {
		$assign(dst, createColorModelCompatibleImage(src));
	}
	$var($floats, kernel, createGaussianKernel(radius));
	if (src->getType() == $BufferedImage::TYPE_INT_ARGB) {
		$var($ints, srcPixels, $new($ints, width * height));
		$var($ints, dstPixels, $new($ints, width * height));
		getPixels(src, 0, 0, width, height, srcPixels);
		blur(srcPixels, dstPixels, width, height, kernel, radius);
		blur(dstPixels, srcPixels, height, width, kernel, radius);
		setPixels(dst, 0, 0, width, height, srcPixels);
	} else if (src->getType() == $BufferedImage::TYPE_BYTE_GRAY) {
		$var($bytes, srcPixels, $new($bytes, width * height));
		$var($bytes, dstPixels, $new($bytes, width * height));
		getPixels(src, 0, 0, width, height, srcPixels);
		blur(srcPixels, dstPixels, width, height, kernel, radius);
		blur(dstPixels, srcPixels, height, width, kernel, radius);
		setPixels(dst, 0, 0, width, height, srcPixels);
	} else {
		$throwNew($IllegalArgumentException, $$str({"EffectUtils.gaussianBlur() src image is not a supported type, type=["_s, $$str(src->getType()), "]"_s}));
	}
	return dst;
}

void EffectUtils::blur($ints* srcPixels, $ints* dstPixels, int32_t width, int32_t height, $floats* kernel, int32_t radius) {
	float a = 0.0;
	float r = 0.0;
	float g = 0.0;
	float b = 0.0;
	int32_t ca = 0;
	int32_t cr = 0;
	int32_t cg = 0;
	int32_t cb = 0;
	for (int32_t y = 0; y < height; ++y) {
		int32_t index = y;
		int32_t offset = y * width;
		for (int32_t x = 0; x < width; ++x) {
			a = (r = (g = (b = 0.0f)));
			for (int32_t i = -radius; i <= radius; ++i) {
				int32_t subOffset = x + i;
				if (subOffset < 0 || subOffset >= width) {
					subOffset = $mod((x + width), width);
				}
				int32_t pixel = $nc(srcPixels)->get(offset + subOffset);
				float blurFactor = $nc(kernel)->get(radius + i);
				a += blurFactor * ((pixel >> 24) & 0xff);
				r += blurFactor * ((pixel >> 16) & 0xff);
				g += blurFactor * ((pixel >> 8) & 0xff);
				b += blurFactor * ((pixel) & 0xff);
			}
			ca = $cast(int32_t, (a + 0.5f));
			cr = $cast(int32_t, (r + 0.5f));
			cg = $cast(int32_t, (g + 0.5f));
			cb = $cast(int32_t, (b + 0.5f));
			$nc(dstPixels)->set(index, ((((ca > 255 ? 255 : ca) << 24) | ((cr > 255 ? 255 : cr) << 16)) | ((cg > 255 ? 255 : cg) << 8)) | (cb > 255 ? 255 : cb));
			index += height;
		}
	}
}

void EffectUtils::blur($bytes* srcPixels, $bytes* dstPixels, int32_t width, int32_t height, $floats* kernel, int32_t radius) {
	float p = 0.0;
	int32_t cp = 0;
	for (int32_t y = 0; y < height; ++y) {
		int32_t index = y;
		int32_t offset = y * width;
		for (int32_t x = 0; x < width; ++x) {
			p = 0.0f;
			for (int32_t i = -radius; i <= radius; ++i) {
				int32_t subOffset = x + i;
				if (subOffset < 0 || subOffset >= width) {
					subOffset = $mod((x + width), width);
				}
				int32_t pixel = $nc(srcPixels)->get(offset + subOffset) & 0xff;
				float blurFactor = $nc(kernel)->get(radius + i);
				p += blurFactor * pixel;
			}
			cp = $cast(int32_t, (p + 0.5f));
			$nc(dstPixels)->set(index, (int8_t)(cp > 255 ? 255 : cp));
			index += height;
		}
	}
}

$floats* EffectUtils::createGaussianKernel(int32_t radius) {
	if (radius < 1) {
		$throwNew($IllegalArgumentException, "Radius must be >= 1"_s);
	}
	$var($floats, data, $new($floats, radius * 2 + 1));
	float sigma = radius / 3.0f;
	float twoSigmaSquare = 2.0f * sigma * sigma;
	$init($Math);
	float sigmaRoot = (float)$Math::sqrt(twoSigmaSquare * $Math::PI);
	float total = 0.0f;
	for (int32_t i = -radius; i <= radius; ++i) {
		float distance = (float)(i * i);
		int32_t index = i + radius;
		data->set(index, (float)$Math::exp(-distance / twoSigmaSquare) / sigmaRoot);
		total += data->get(index);
	}
	for (int32_t i = 0; i < data->length; ++i) {
		(*data)[i] /= total;
	}
	return data;
}

$bytes* EffectUtils::getPixels($BufferedImage* img, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* pixels$renamed) {
	$useLocalObjectStack();
	$var($bytes, pixels, pixels$renamed);
	if (w == 0 || h == 0) {
		return $new($bytes, 0);
	}
	if (pixels == nullptr) {
		$assign(pixels, $new($bytes, w * h));
	} else if (pixels->length < w * h) {
		$throwNew($IllegalArgumentException, "pixels array must have a length >= w*h"_s);
	}
	int32_t imageType = $nc(img)->getType();
	if (imageType == $BufferedImage::TYPE_BYTE_GRAY) {
		$var($Raster, raster, img->getRaster());
		return $cast($bytes, $nc(raster)->getDataElements(x, y, w, h, pixels));
	} else {
		$throwNew($IllegalArgumentException, "Only type BYTE_GRAY is supported"_s);
	}
}

void EffectUtils::setPixels($BufferedImage* img, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* pixels) {
	if (pixels == nullptr || w == 0 || h == 0) {
		return;
	} else if (pixels->length < w * h) {
		$throwNew($IllegalArgumentException, "pixels array must have a length >= w*h"_s);
	}
	int32_t imageType = $nc(img)->getType();
	if (imageType == $BufferedImage::TYPE_BYTE_GRAY) {
		$var($WritableRaster, raster, img->getRaster());
		$nc(raster)->setDataElements(x, y, w, h, pixels);
	} else {
		$throwNew($IllegalArgumentException, "Only type BYTE_GRAY is supported"_s);
	}
}

$ints* EffectUtils::getPixels($BufferedImage* img, int32_t x, int32_t y, int32_t w, int32_t h, $ints* pixels$renamed) {
	$useLocalObjectStack();
	$var($ints, pixels, pixels$renamed);
	if (w == 0 || h == 0) {
		return $new($ints, 0);
	}
	if (pixels == nullptr) {
		$assign(pixels, $new($ints, w * h));
	} else if (pixels->length < w * h) {
		$throwNew($IllegalArgumentException, "pixels array must have a length >= w*h"_s);
	}
	int32_t imageType = $nc(img)->getType();
	if (imageType == $BufferedImage::TYPE_INT_ARGB || imageType == $BufferedImage::TYPE_INT_RGB) {
		$var($Raster, raster, img->getRaster());
		return $cast($ints, $nc(raster)->getDataElements(x, y, w, h, pixels));
	}
	return img->getRGB(x, y, w, h, pixels, 0, w);
}

void EffectUtils::setPixels($BufferedImage* img, int32_t x, int32_t y, int32_t w, int32_t h, $ints* pixels) {
	if (pixels == nullptr || w == 0 || h == 0) {
		return;
	} else if (pixels->length < w * h) {
		$throwNew($IllegalArgumentException, "pixels array must have a length >= w*h"_s);
	}
	int32_t imageType = $nc(img)->getType();
	if (imageType == $BufferedImage::TYPE_INT_ARGB || imageType == $BufferedImage::TYPE_INT_RGB) {
		$var($WritableRaster, raster, img->getRaster());
		$nc(raster)->setDataElements(x, y, w, h, pixels);
	} else {
		img->setRGB(x, y, w, h, pixels, 0, w);
	}
}

$BufferedImage* EffectUtils::createColorModelCompatibleImage($BufferedImage* image) {
	$useLocalObjectStack();
	$var($ColorModel, cm, $nc(image)->getColorModel());
	int32_t var$1 = image->getWidth();
	$var($WritableRaster, var$0, $nc(cm)->createCompatibleWritableRaster(var$1, image->getHeight()));
	return $new($BufferedImage, cm, var$0, $nc(cm)->isAlphaPremultiplied(), nullptr);
}

$BufferedImage* EffectUtils::createCompatibleTranslucentImage(int32_t width, int32_t height) {
	return isHeadless() ? $new($BufferedImage, width, height, $BufferedImage::TYPE_INT_ARGB) : $$nc(getGraphicsConfiguration())->createCompatibleImage(width, height, $Transparency::TRANSLUCENT);
}

bool EffectUtils::isHeadless() {
	return $GraphicsEnvironment::isHeadless();
}

$GraphicsConfiguration* EffectUtils::getGraphicsConfiguration() {
	$useLocalObjectStack();
	return $$nc($$nc($GraphicsEnvironment::getLocalGraphicsEnvironment())->getDefaultScreenDevice())->getDefaultConfiguration();
}

EffectUtils::EffectUtils() {
}

$Class* EffectUtils::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EffectUtils, init$, void)},
		{"blur", "([I[III[FI)V", nullptr, $PRIVATE | $STATIC, $staticMethod(EffectUtils, blur, void, $ints*, $ints*, int32_t, int32_t, $floats*, int32_t)},
		{"blur", "([B[BII[FI)V", nullptr, $STATIC, $staticMethod(EffectUtils, blur, void, $bytes*, $bytes*, int32_t, int32_t, $floats*, int32_t)},
		{"clearImage", "(Ljava/awt/image/BufferedImage;)V", nullptr, $STATIC, $staticMethod(EffectUtils, clearImage, void, $BufferedImage*)},
		{"createColorModelCompatibleImage", "(Ljava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $STATIC, $staticMethod(EffectUtils, createColorModelCompatibleImage, $BufferedImage*, $BufferedImage*)},
		{"createCompatibleTranslucentImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $STATIC, $staticMethod(EffectUtils, createCompatibleTranslucentImage, $BufferedImage*, int32_t, int32_t)},
		{"createGaussianKernel", "(I)[F", nullptr, $STATIC, $staticMethod(EffectUtils, createGaussianKernel, $floats*, int32_t)},
		{"gaussianBlur", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;I)Ljava/awt/image/BufferedImage;", nullptr, $STATIC, $staticMethod(EffectUtils, gaussianBlur, $BufferedImage*, $BufferedImage*, $BufferedImage*, int32_t)},
		{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $STATIC, $staticMethod(EffectUtils, getGraphicsConfiguration, $GraphicsConfiguration*)},
		{"getPixels", "(Ljava/awt/image/BufferedImage;IIII[B)[B", nullptr, $STATIC, $staticMethod(EffectUtils, getPixels, $bytes*, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, $bytes*)},
		{"getPixels", "(Ljava/awt/image/BufferedImage;IIII[I)[I", nullptr, $PUBLIC | $STATIC, $staticMethod(EffectUtils, getPixels, $ints*, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, $ints*)},
		{"isHeadless", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(EffectUtils, isHeadless, bool)},
		{"setPixels", "(Ljava/awt/image/BufferedImage;IIII[B)V", nullptr, $STATIC, $staticMethod(EffectUtils, setPixels, void, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, $bytes*)},
		{"setPixels", "(Ljava/awt/image/BufferedImage;IIII[I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EffectUtils, setPixels, void, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, $ints*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.EffectUtils",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EffectUtils, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EffectUtils);
	});
	return class$;
}

$Class* EffectUtils::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax