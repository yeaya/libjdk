#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/AbstractCounter$Flags.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <jcpp.h>

#undef SUPPORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCounter$Flags = ::sun::management::counter::AbstractCounter$Flags;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;

namespace sun {
	namespace management {
		namespace counter {

void AbstractCounter::init$($String* name, $Units* units, $Variability* variability, int32_t flags, int32_t vectorLength) {
	$set(this, name, name);
	$set(this, units, units);
	$set(this, variability, variability);
	this->flags = flags;
	this->vectorLength = vectorLength;
}

void AbstractCounter::init$($String* name, $Units* units, $Variability* variability, int32_t flags) {
	AbstractCounter::init$(name, units, variability, flags, 0);
}

$String* AbstractCounter::getName() {
	return this->name;
}

$Units* AbstractCounter::getUnits() {
	return this->units;
}

$Variability* AbstractCounter::getVariability() {
	return this->variability;
}

bool AbstractCounter::isVector() {
	return this->vectorLength > 0;
}

int32_t AbstractCounter::getVectorLength() {
	return this->vectorLength;
}

bool AbstractCounter::isInternal() {
	return (this->flags & $AbstractCounter$Flags::SUPPORTED) == 0;
}

int32_t AbstractCounter::getFlags() {
	return this->flags;
}

$String* AbstractCounter::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(getName()));
	var$0->append(": "_s);
	var$0->append($(getValue()));
	var$0->append(" "_s);
	var$0->append($(getUnits()));
	$var($String, result, $str(var$0));
	if (isInternal()) {
		return $str({result, " [INTERNAL]"_s});
	} else {
		return result;
	}
}

AbstractCounter::AbstractCounter() {
}

$Class* AbstractCounter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, 0, $field(AbstractCounter, name)},
		{"units", "Lsun/management/counter/Units;", nullptr, 0, $field(AbstractCounter, units)},
		{"variability", "Lsun/management/counter/Variability;", nullptr, 0, $field(AbstractCounter, variability)},
		{"flags", "I", nullptr, 0, $field(AbstractCounter, flags)},
		{"vectorLength", "I", nullptr, 0, $field(AbstractCounter, vectorLength)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractCounter, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "(Ljava/lang/String;Lsun/management/counter/Units;Lsun/management/counter/Variability;II)V", nullptr, $PROTECTED, $method(AbstractCounter, init$, void, $String*, $Units*, $Variability*, int32_t, int32_t)},
		{"<init>", "(Ljava/lang/String;Lsun/management/counter/Units;Lsun/management/counter/Variability;I)V", nullptr, $PROTECTED, $method(AbstractCounter, init$, void, $String*, $Units*, $Variability*, int32_t)},
		{"getFlags", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractCounter, getFlags, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractCounter, getName, $String*)},
		{"getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC, $virtualMethod(AbstractCounter, getUnits, $Units*)},
		{"getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC, $virtualMethod(AbstractCounter, getVariability, $Variability*)},
		{"getVectorLength", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractCounter, getVectorLength, int32_t)},
		{"isInternal", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractCounter, isInternal, bool)},
		{"isVector", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractCounter, isVector, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractCounter, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.counter.AbstractCounter$Flags", "sun.management.counter.AbstractCounter", "Flags", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.management.counter.AbstractCounter",
		"java.lang.Object",
		"sun.management.counter.Counter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.management.counter.AbstractCounter$Flags"
	};
	$loadClass(AbstractCounter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractCounter);
	});
	return class$;
}

$Class* AbstractCounter::class$ = nullptr;

		} // counter
	} // management
} // sun