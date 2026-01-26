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

$FieldInfo _AbstractCounter_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(AbstractCounter, name)},
	{"units", "Lsun/management/counter/Units;", nullptr, 0, $field(AbstractCounter, units)},
	{"variability", "Lsun/management/counter/Variability;", nullptr, 0, $field(AbstractCounter, variability)},
	{"flags", "I", nullptr, 0, $field(AbstractCounter, flags)},
	{"vectorLength", "I", nullptr, 0, $field(AbstractCounter, vectorLength)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractCounter, serialVersionUID)},
	{}
};

$MethodInfo _AbstractCounter_MethodInfo_[] = {
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

$InnerClassInfo _AbstractCounter_InnerClassesInfo_[] = {
	{"sun.management.counter.AbstractCounter$Flags", "sun.management.counter.AbstractCounter", "Flags", 0},
	{}
};

$ClassInfo _AbstractCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.management.counter.AbstractCounter",
	"java.lang.Object",
	"sun.management.counter.Counter",
	_AbstractCounter_FieldInfo_,
	_AbstractCounter_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractCounter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.management.counter.AbstractCounter$Flags"
};

$Object* allocate$AbstractCounter($Class* clazz) {
	return $of($alloc(AbstractCounter));
}

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
	return ((int32_t)(this->flags & (uint32_t)$AbstractCounter$Flags::SUPPORTED)) == 0;
}

int32_t AbstractCounter::getFlags() {
	return this->flags;
}

$String* AbstractCounter::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({$(getName()), ": "_s}));
	$var($String, var$1, $$concat(var$2, $(getValue())));
	$var($String, var$0, $$concat(var$1, " "_s));
	$var($String, result, $concat(var$0, $(getUnits())));
	if (isInternal()) {
		return $str({result, " [INTERNAL]"_s});
	} else {
		return result;
	}
}

AbstractCounter::AbstractCounter() {
}

$Class* AbstractCounter::load$($String* name, bool initialize) {
	$loadClass(AbstractCounter, name, initialize, &_AbstractCounter_ClassInfo_, allocate$AbstractCounter);
	return class$;
}

$Class* AbstractCounter::class$ = nullptr;

		} // counter
	} // management
} // sun