#include <sun/awt/image/MultiResolutionCachedImage$1.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/awt/image/MultiResolutionCachedImage.h>
#include <jcpp.h>

#undef ABORT
#undef ERROR

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

void MultiResolutionCachedImage$1::init$(int32_t val$availableInfo) {
	this->val$availableInfo = val$availableInfo;
	this->flags = this->val$availableInfo;
}

bool MultiResolutionCachedImage$1::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t width, int32_t height) {
	this->flags &= (uint32_t)~infoflags;
	return (this->flags != 0) && ((infoflags & ($ImageObserver::ERROR | $ImageObserver::ABORT)) == 0);
}

MultiResolutionCachedImage$1::MultiResolutionCachedImage$1() {
}

$Class* MultiResolutionCachedImage$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$availableInfo", "I", nullptr, $FINAL | $SYNTHETIC, $field(MultiResolutionCachedImage$1, val$availableInfo)},
		{"flags", "I", nullptr, 0, $field(MultiResolutionCachedImage$1, flags)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", "()V", 0, $method(MultiResolutionCachedImage$1, init$, void, int32_t)},
		{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC, $virtualMethod(MultiResolutionCachedImage$1, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.image.MultiResolutionCachedImage",
		"preload",
		"(Ljava/awt/Image;I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.MultiResolutionCachedImage$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.image.MultiResolutionCachedImage$1",
		"java.lang.Object",
		"java.awt.image.ImageObserver",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.MultiResolutionCachedImage"
	};
	$loadClass(MultiResolutionCachedImage$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiResolutionCachedImage$1);
	});
	return class$;
}

$Class* MultiResolutionCachedImage$1::class$ = nullptr;

		} // image
	} // awt
} // sun