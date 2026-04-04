#include <sun/awt/image/BufImgSurfaceData$ICMColorData.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

void BufImgSurfaceData$ICMColorData::init$(int64_t pData) {
	this->pData = 0;
	this->pData = pData;
}

BufImgSurfaceData$ICMColorData::BufImgSurfaceData$ICMColorData() {
}

$Class* BufImgSurfaceData$ICMColorData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pData", "J", nullptr, $PRIVATE, $field(BufImgSurfaceData$ICMColorData, pData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PRIVATE, $method(BufImgSurfaceData$ICMColorData, init$, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.BufImgSurfaceData$ICMColorData", "sun.awt.image.BufImgSurfaceData", "ICMColorData", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.image.BufImgSurfaceData$ICMColorData",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.BufImgSurfaceData"
	};
	$loadClass(BufImgSurfaceData$ICMColorData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufImgSurfaceData$ICMColorData);
	});
	return class$;
}

$Class* BufImgSurfaceData$ICMColorData::class$ = nullptr;

		} // image
	} // awt
} // sun