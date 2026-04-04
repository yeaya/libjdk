#include <sun/java2d/xr/XcbRequestCounter.h>
#include <jcpp.h>

#undef MAX_UINT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace xr {

void XcbRequestCounter::init$(int64_t value) {
	this->value = value;
}

void XcbRequestCounter::setValue(int64_t value) {
	this->value = value;
}

int64_t XcbRequestCounter::getValue() {
	return this->value;
}

void XcbRequestCounter::add(int64_t v) {
	this->value += v;
	if (this->value > XcbRequestCounter::MAX_UINT) {
		this->value = 0;
	}
}

XcbRequestCounter::XcbRequestCounter() {
}

$Class* XcbRequestCounter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MAX_UINT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XcbRequestCounter, MAX_UINT)},
		{"value", "J", nullptr, 0, $field(XcbRequestCounter, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(XcbRequestCounter, init$, void, int64_t)},
		{"add", "(J)V", nullptr, $PUBLIC, $virtualMethod(XcbRequestCounter, add, void, int64_t)},
		{"getValue", "()J", nullptr, $PUBLIC, $virtualMethod(XcbRequestCounter, getValue, int64_t)},
		{"setValue", "(J)V", nullptr, $PUBLIC, $virtualMethod(XcbRequestCounter, setValue, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.xr.XcbRequestCounter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XcbRequestCounter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XcbRequestCounter);
	});
	return class$;
}

$Class* XcbRequestCounter::class$ = nullptr;

		} // xr
	} // java2d
} // sun