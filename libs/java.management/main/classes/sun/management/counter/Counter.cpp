#include <sun/management/counter/Counter.h>

#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;

namespace sun {
	namespace management {
		namespace counter {

$MethodInfo _Counter_MethodInfo_[] = {
	{"getFlags", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getFlags, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getName, $String*)},
	{"getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getUnits, $Units*)},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getValue, $Object*)},
	{"getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getVariability, $Variability*)},
	{"getVectorLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getVectorLength, int32_t)},
	{"isInternal", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, isInternal, bool)},
	{"isVector", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, isVector, bool)},
	{}
};

$ClassInfo _Counter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.counter.Counter",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_Counter_MethodInfo_
};

$Object* allocate$Counter($Class* clazz) {
	return $of($alloc(Counter));
}

$Class* Counter::load$($String* name, bool initialize) {
	$loadClass(Counter, name, initialize, &_Counter_ClassInfo_, allocate$Counter);
	return class$;
}

$Class* Counter::class$ = nullptr;

		} // counter
	} // management
} // sun