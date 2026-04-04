#include <sun/management/counter/AbstractCounter$Flags.h>
#include <sun/management/counter/AbstractCounter.h>
#include <jcpp.h>

#undef SUPPORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;

namespace sun {
	namespace management {
		namespace counter {

void AbstractCounter$Flags::init$($AbstractCounter* this$0) {
	$set(this, this$0, this$0);
}

AbstractCounter$Flags::AbstractCounter$Flags() {
}

$Class* AbstractCounter$Flags::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/management/counter/AbstractCounter;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractCounter$Flags, this$0)},
		{"SUPPORTED", "I", nullptr, $STATIC | $FINAL, $constField(AbstractCounter$Flags, SUPPORTED)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/management/counter/AbstractCounter;)V", nullptr, 0, $method(AbstractCounter$Flags, init$, void, $AbstractCounter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.counter.AbstractCounter$Flags", "sun.management.counter.AbstractCounter", "Flags", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.counter.AbstractCounter$Flags",
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
		"sun.management.counter.AbstractCounter"
	};
	$loadClass(AbstractCounter$Flags, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractCounter$Flags);
	});
	return class$;
}

$Class* AbstractCounter$Flags::class$ = nullptr;

		} // counter
	} // management
} // sun