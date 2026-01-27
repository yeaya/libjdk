#include <sun/java2d/pipe/SpanIterator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _SpanIterator_MethodInfo_[] = {
	{"getNativeIterator", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpanIterator, getNativeIterator, int64_t)},
	{"getPathBox", "([I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpanIterator, getPathBox, void, $ints*)},
	{"intersectClipBox", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpanIterator, intersectClipBox, void, int32_t, int32_t, int32_t, int32_t)},
	{"nextSpan", "([I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpanIterator, nextSpan, bool, $ints*)},
	{"skipDownTo", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpanIterator, skipDownTo, void, int32_t)},
	{}
};

$ClassInfo _SpanIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.SpanIterator",
	nullptr,
	nullptr,
	nullptr,
	_SpanIterator_MethodInfo_
};

$Object* allocate$SpanIterator($Class* clazz) {
	return $of($alloc(SpanIterator));
}

$Class* SpanIterator::load$($String* name, bool initialize) {
	$loadClass(SpanIterator, name, initialize, &_SpanIterator_ClassInfo_, allocate$SpanIterator);
	return class$;
}

$Class* SpanIterator::class$ = nullptr;

		} // pipe
	} // java2d
} // sun