#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace pipe {

$Class* SpanIterator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getNativeIterator", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpanIterator, getNativeIterator, int64_t)},
		{"getPathBox", "([I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpanIterator, getPathBox, void, $ints*)},
		{"intersectClipBox", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpanIterator, intersectClipBox, void, int32_t, int32_t, int32_t, int32_t)},
		{"nextSpan", "([I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpanIterator, nextSpan, bool, $ints*)},
		{"skipDownTo", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpanIterator, skipDownTo, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.pipe.SpanIterator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SpanIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpanIterator);
	});
	return class$;
}

$Class* SpanIterator::class$ = nullptr;

		} // pipe
	} // java2d
} // sun