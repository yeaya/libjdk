#include <bug4337267$TestBufferedImage.h>
#include <bug4337267.h>
#include <java/awt/image/BufferedImage.h>
#include <jcpp.h>

#undef MAX_GLITCHES

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4337267$TestBufferedImage::init$(int32_t width, int32_t height, int32_t imageType) {
	$BufferedImage::init$(width, height, imageType);
	this->MAX_GLITCHES = 0;
}

bool bug4337267$TestBufferedImage::equals(Object$* other) {
	if (!($instanceOf(bug4337267$TestBufferedImage, other))) {
		return false;
	}
	$var(bug4337267$TestBufferedImage, image2, $cast(bug4337267$TestBufferedImage, other));
	int32_t width = getWidth();
	int32_t height = getHeight();
	bool var$0 = $nc(image2)->getWidth() != width;
	if (var$0 || (image2->getHeight() != height)) {
		return false;
	}
	int32_t glitches = 0;
	for (int32_t x = 0; x < width; ++x) {
		for (int32_t y = 0; y < height; ++y) {
			int32_t rgb1 = getRGB(x, y);
			int32_t rgb2 = image2->getRGB(x, y);
			if (rgb1 != rgb2) {
				++glitches;
			}
		}
	}
	return glitches <= this->MAX_GLITCHES;
}

bug4337267$TestBufferedImage::bug4337267$TestBufferedImage() {
}

$Class* bug4337267$TestBufferedImage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MAX_GLITCHES", "I", nullptr, 0, $field(bug4337267$TestBufferedImage, MAX_GLITCHES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(III)V", nullptr, 0, $method(bug4337267$TestBufferedImage, init$, void, int32_t, int32_t, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(bug4337267$TestBufferedImage, equals, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4337267$TestBufferedImage", "bug4337267", "TestBufferedImage", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4337267$TestBufferedImage",
		"java.awt.image.BufferedImage",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4337267"
	};
	$loadClass(bug4337267$TestBufferedImage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4337267$TestBufferedImage));
	});
	return class$;
}

$Class* bug4337267$TestBufferedImage::class$ = nullptr;