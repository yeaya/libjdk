#include <sun/java2d/xr/MutableInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace xr {

void MutableInteger::init$(int32_t value) {
	this->setValue(value);
}

int32_t MutableInteger::hashCode() {
	return getValue();
}

bool MutableInteger::equals(Object$* o) {
	bool var$0 = $instanceOf(MutableInteger, o);
	if (var$0) {
		int32_t var$1 = $cast(MutableInteger, o)->getValue();
		var$0 = var$1 == getValue();
	}
	return var$0;
}

void MutableInteger::setValue(int32_t value) {
	this->value = value;
}

int32_t MutableInteger::getValue() {
	return this->value;
}

MutableInteger::MutableInteger() {
}

$Class* MutableInteger::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "I", nullptr, $PRIVATE, $field(MutableInteger, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(MutableInteger, init$, void, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MutableInteger, equals, bool, Object$*)},
		{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(MutableInteger, getValue, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MutableInteger, hashCode, int32_t)},
		{"setValue", "(I)V", nullptr, $PUBLIC, $virtualMethod(MutableInteger, setValue, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.xr.MutableInteger",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MutableInteger, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MutableInteger);
	});
	return class$;
}

$Class* MutableInteger::class$ = nullptr;

		} // xr
	} // java2d
} // sun