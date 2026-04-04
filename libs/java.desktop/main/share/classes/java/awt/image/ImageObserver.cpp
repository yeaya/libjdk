#include <java/awt/image/ImageObserver.h>
#include <java/awt/Image.h>
#include <jcpp.h>

#undef ABORT
#undef ALLBITS
#undef ERROR
#undef FRAMEBITS
#undef HEIGHT
#undef PROPERTIES
#undef SOMEBITS
#undef WIDTH

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$Class* ImageObserver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, WIDTH)},
		{"HEIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, HEIGHT)},
		{"PROPERTIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, PROPERTIES)},
		{"SOMEBITS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, SOMEBITS)},
		{"FRAMEBITS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, FRAMEBITS)},
		{"ALLBITS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, ALLBITS)},
		{"ERROR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, ERROR)},
		{"ABORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, ABORT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageObserver, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.image.ImageObserver",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImageObserver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageObserver);
	});
	return class$;
}

$Class* ImageObserver::class$ = nullptr;

		} // image
	} // awt
} // java