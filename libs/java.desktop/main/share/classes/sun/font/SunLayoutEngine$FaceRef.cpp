#include <sun/font/SunLayoutEngine$FaceRef.h>
#include <sun/font/Font2D.h>
#include <sun/font/SunLayoutEngine.h>
#include <sun/java2d/Disposer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $SunLayoutEngine = ::sun::font::SunLayoutEngine;
using $Disposer = ::sun::java2d::Disposer;

namespace sun {
	namespace font {

void SunLayoutEngine$FaceRef::init$($Font2D* font) {
	$set(this, font, font);
}

int64_t SunLayoutEngine$FaceRef::getNativePtr() {
	$synchronized(this) {
		if (this->facePtr == nullptr) {
			$set(this, facePtr, $Long::valueOf($SunLayoutEngine::createFace(this->font, $nc(this->font)->getPlatformNativeFontPtr())));
			if ($nc(this->facePtr)->longValue() != 0) {
				$Disposer::addObjectRecord(this->font, this);
			}
			$set(this, font, nullptr);
		}
		return $nc(this->facePtr)->longValue();
	}
}

void SunLayoutEngine$FaceRef::dispose() {
	$SunLayoutEngine::disposeFace($nc(this->facePtr)->longValue());
}

SunLayoutEngine$FaceRef::SunLayoutEngine$FaceRef() {
}

$Class* SunLayoutEngine$FaceRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"font", "Lsun/font/Font2D;", nullptr, $PRIVATE, $field(SunLayoutEngine$FaceRef, font)},
		{"facePtr", "Ljava/lang/Long;", nullptr, $PRIVATE, $field(SunLayoutEngine$FaceRef, facePtr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/Font2D;)V", nullptr, $PRIVATE, $method(SunLayoutEngine$FaceRef, init$, void, $Font2D*)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(SunLayoutEngine$FaceRef, dispose, void)},
		{"getNativePtr", "()J", nullptr, $PRIVATE | $SYNCHRONIZED, $method(SunLayoutEngine$FaceRef, getNativePtr, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunLayoutEngine$FaceRef", "sun.font.SunLayoutEngine", "FaceRef", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunLayoutEngine$FaceRef",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.SunLayoutEngine"
	};
	$loadClass(SunLayoutEngine$FaceRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunLayoutEngine$FaceRef);
	});
	return class$;
}

$Class* SunLayoutEngine$FaceRef::class$ = nullptr;

	} // font
} // sun