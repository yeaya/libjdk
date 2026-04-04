#include <sun/java2d/OSXSurfaceData$CGContextDrawable.h>
#include <sun/java2d/OSXSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$Class* OSXSurfaceData$CGContextDrawable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"drawIntoCGContext", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OSXSurfaceData$CGContextDrawable, drawIntoCGContext, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.OSXSurfaceData$CGContextDrawable", "sun.java2d.OSXSurfaceData", "CGContextDrawable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.OSXSurfaceData$CGContextDrawable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.OSXSurfaceData"
	};
	$loadClass(OSXSurfaceData$CGContextDrawable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OSXSurfaceData$CGContextDrawable);
	});
	return class$;
}

$Class* OSXSurfaceData$CGContextDrawable::class$ = nullptr;

	} // java2d
} // sun