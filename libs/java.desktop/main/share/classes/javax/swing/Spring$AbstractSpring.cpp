#include <javax/swing/Spring$AbstractSpring.h>
#include <javax/swing/Spring.h>
#include <jcpp.h>

#undef UNSET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;

namespace javax {
	namespace swing {

void Spring$AbstractSpring::init$() {
	$Spring::init$();
	this->size = $Spring::UNSET;
}

int32_t Spring$AbstractSpring::getValue() {
	return this->size != $Spring::UNSET ? this->size : getPreferredValue();
}

void Spring$AbstractSpring::setValue(int32_t size) {
	if (this->size == size) {
		return;
	}
	if (size == $Spring::UNSET) {
		clear();
	} else {
		setNonClearValue(size);
	}
}

void Spring$AbstractSpring::clear() {
	this->size = $Spring::UNSET;
}

void Spring$AbstractSpring::setNonClearValue(int32_t size) {
	this->size = size;
}

Spring$AbstractSpring::Spring$AbstractSpring() {
}

$Class* Spring$AbstractSpring::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"size", "I", nullptr, $PROTECTED, $field(Spring$AbstractSpring, size)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Spring$AbstractSpring, init$, void)},
		{"clear", "()V", nullptr, $PROTECTED, $virtualMethod(Spring$AbstractSpring, clear, void)},
		{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$AbstractSpring, getValue, int32_t)},
		{"setNonClearValue", "(I)V", nullptr, $PROTECTED, $virtualMethod(Spring$AbstractSpring, setNonClearValue, void, int32_t)},
		{"setValue", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Spring$AbstractSpring, setValue, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Spring$AbstractSpring", "javax.swing.Spring", "AbstractSpring", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"javax.swing.Spring$AbstractSpring",
		"javax.swing.Spring",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.Spring"
	};
	$loadClass(Spring$AbstractSpring, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spring$AbstractSpring);
	});
	return class$;
}

$Class* Spring$AbstractSpring::class$ = nullptr;

	} // swing
} // javax