#include <javax/swing/DebugGraphicsObserver.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <jcpp.h>

#undef ABORT
#undef ALLBITS
#undef ERROR

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

void DebugGraphicsObserver::init$() {
}

bool DebugGraphicsObserver::allBitsPresent() {
	$synchronized(this) {
		return (this->lastInfo & $ImageObserver::ALLBITS) != 0;
	}
}

bool DebugGraphicsObserver::imageHasProblem() {
	$synchronized(this) {
		return ((this->lastInfo & $ImageObserver::ERROR) != 0 || (this->lastInfo & $ImageObserver::ABORT) != 0);
	}
}

bool DebugGraphicsObserver::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t width, int32_t height) {
	$synchronized(this) {
		this->lastInfo = infoflags;
		return true;
	}
}

DebugGraphicsObserver::DebugGraphicsObserver() {
}

$Class* DebugGraphicsObserver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lastInfo", "I", nullptr, 0, $field(DebugGraphicsObserver, lastInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DebugGraphicsObserver, init$, void)},
		{"allBitsPresent", "()Z", nullptr, $SYNCHRONIZED, $virtualMethod(DebugGraphicsObserver, allBitsPresent, bool)},
		{"imageHasProblem", "()Z", nullptr, $SYNCHRONIZED, $virtualMethod(DebugGraphicsObserver, imageHasProblem, bool)},
		{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DebugGraphicsObserver, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.DebugGraphicsObserver",
		"java.lang.Object",
		"java.awt.image.ImageObserver",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DebugGraphicsObserver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DebugGraphicsObserver);
	});
	return class$;
}

$Class* DebugGraphicsObserver::class$ = nullptr;

	} // swing
} // javax