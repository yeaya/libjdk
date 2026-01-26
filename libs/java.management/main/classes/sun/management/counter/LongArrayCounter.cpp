#include <sun/management/counter/LongArrayCounter.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {
		namespace counter {

$MethodInfo _LongArrayCounter_MethodInfo_[] = {
	{"longArrayValue", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongArrayCounter, longArrayValue, $longs*)},
	{"longAt", "(I)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongArrayCounter, longAt, int64_t, int32_t)},
	{}
};

$ClassInfo _LongArrayCounter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.counter.LongArrayCounter",
	nullptr,
	"sun.management.counter.Counter",
	nullptr,
	_LongArrayCounter_MethodInfo_
};

$Object* allocate$LongArrayCounter($Class* clazz) {
	return $of($alloc(LongArrayCounter));
}

$Class* LongArrayCounter::load$($String* name, bool initialize) {
	$loadClass(LongArrayCounter, name, initialize, &_LongArrayCounter_ClassInfo_, allocate$LongArrayCounter);
	return class$;
}

$Class* LongArrayCounter::class$ = nullptr;

		} // counter
	} // management
} // sun