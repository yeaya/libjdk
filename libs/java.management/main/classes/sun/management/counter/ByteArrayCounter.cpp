#include <sun/management/counter/ByteArrayCounter.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {
		namespace counter {

$MethodInfo _ByteArrayCounter_MethodInfo_[] = {
	{"byteArrayValue", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteArrayCounter, byteArrayValue, $bytes*)},
	{"byteAt", "(I)B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteArrayCounter, byteAt, int8_t, int32_t)},
	{}
};

$ClassInfo _ByteArrayCounter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.counter.ByteArrayCounter",
	nullptr,
	"sun.management.counter.Counter",
	nullptr,
	_ByteArrayCounter_MethodInfo_
};

$Object* allocate$ByteArrayCounter($Class* clazz) {
	return $of($alloc(ByteArrayCounter));
}

$Class* ByteArrayCounter::load$($String* name, bool initialize) {
	$loadClass(ByteArrayCounter, name, initialize, &_ByteArrayCounter_ClassInfo_, allocate$ByteArrayCounter);
	return class$;
}

$Class* ByteArrayCounter::class$ = nullptr;

		} // counter
	} // management
} // sun