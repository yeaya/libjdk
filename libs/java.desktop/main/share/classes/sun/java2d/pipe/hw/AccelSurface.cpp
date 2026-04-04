#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <java/awt/Rectangle.h>
#include <sun/java2d/pipe/hw/BufferedContextProvider.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER
#undef RT_PLAIN
#undef RT_TEXTURE
#undef TEXTURE
#undef UNDEFINED
#undef WINDOW

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufferedContextProvider = ::sun::java2d::pipe::hw::BufferedContextProvider;

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

int32_t AccelSurface::hashCode() {
	 return this->$BufferedContextProvider::hashCode();
}

bool AccelSurface::equals(Object$* arg0) {
	 return this->$BufferedContextProvider::equals(arg0);
}

$Object* AccelSurface::clone() {
	 return this->$BufferedContextProvider::clone();
}

$String* AccelSurface::toString() {
	 return this->$BufferedContextProvider::toString();
}

void AccelSurface::finalize() {
	this->$BufferedContextProvider::finalize();
}

$Class* AccelSurface::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"UNDEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, UNDEFINED)},
		{"WINDOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, WINDOW)},
		{"RT_PLAIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, RT_PLAIN)},
		{"TEXTURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, TEXTURE)},
		{"FLIP_BACKBUFFER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, FLIP_BACKBUFFER)},
		{"RT_TEXTURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, RT_TEXTURE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccelSurface, getBounds, $Rectangle*)},
		{"getNativeBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccelSurface, getNativeBounds, $Rectangle*)},
		{"getNativeOps", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccelSurface, getNativeOps, int64_t)},
		{"getNativeResource", "(I)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccelSurface, getNativeResource, int64_t, int32_t)},
		{"getType", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccelSurface, getType, int32_t)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"isSurfaceLost", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccelSurface, isSurfaceLost, bool)},
		{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccelSurface, isValid, bool)},
		{"markDirty", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccelSurface, markDirty, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.pipe.hw.AccelSurface",
		nullptr,
		"sun.java2d.pipe.hw.BufferedContextProvider,sun.java2d.Surface",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccelSurface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AccelSurface));
	});
	return class$;
}

$Class* AccelSurface::class$ = nullptr;

			} // hw
		} // pipe
	} // java2d
} // sun