#include <javax/swing/Spring$StaticSpring.h>
#include <javax/swing/Spring$AbstractSpring.h>
#include <javax/swing/Spring.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring$AbstractSpring = ::javax::swing::Spring$AbstractSpring;

namespace javax {
	namespace swing {

void Spring$StaticSpring::init$(int32_t pref) {
	Spring$StaticSpring::init$(pref, pref, pref);
}

void Spring$StaticSpring::init$(int32_t min, int32_t pref, int32_t max) {
	$Spring$AbstractSpring::init$();
	this->min = min;
	this->pref = pref;
	this->max = max;
}

$String* Spring$StaticSpring::toString() {
	$useLocalObjectStack();
	return $str({"StaticSpring ["_s, $$str(this->min), ", "_s, $$str(this->pref), ", "_s, $$str(this->max), "]"_s});
}

int32_t Spring$StaticSpring::getMinimumValue() {
	return this->min;
}

int32_t Spring$StaticSpring::getPreferredValue() {
	return this->pref;
}

int32_t Spring$StaticSpring::getMaximumValue() {
	return this->max;
}

Spring$StaticSpring::Spring$StaticSpring() {
}

$Class* Spring$StaticSpring::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"min", "I", nullptr, $PROTECTED, $field(Spring$StaticSpring, min)},
		{"pref", "I", nullptr, $PROTECTED, $field(Spring$StaticSpring, pref)},
		{"max", "I", nullptr, $PROTECTED, $field(Spring$StaticSpring, max)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Spring$StaticSpring, init$, void, int32_t)},
		{"<init>", "(III)V", nullptr, $PUBLIC, $method(Spring$StaticSpring, init$, void, int32_t, int32_t, int32_t)},
		{"getMaximumValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$StaticSpring, getMaximumValue, int32_t)},
		{"getMinimumValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$StaticSpring, getMinimumValue, int32_t)},
		{"getPreferredValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$StaticSpring, getPreferredValue, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Spring$StaticSpring, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Spring$StaticSpring", "javax.swing.Spring", "StaticSpring", $PRIVATE | $STATIC},
		{"javax.swing.Spring$AbstractSpring", "javax.swing.Spring", "AbstractSpring", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.Spring$StaticSpring",
		"javax.swing.Spring$AbstractSpring",
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
	$loadClass(Spring$StaticSpring, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spring$StaticSpring);
	});
	return class$;
}

$Class* Spring$StaticSpring::class$ = nullptr;

	} // swing
} // javax