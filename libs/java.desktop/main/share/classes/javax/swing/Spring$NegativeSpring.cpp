#include <javax/swing/Spring$NegativeSpring.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $SpringLayout = ::javax::swing::SpringLayout;

namespace javax {
	namespace swing {

void Spring$NegativeSpring::init$($Spring* s) {
	$Spring::init$();
	$set(this, s, s);
}

int32_t Spring$NegativeSpring::getMinimumValue() {
	return -$nc(this->s)->getMaximumValue();
}

int32_t Spring$NegativeSpring::getPreferredValue() {
	return -$nc(this->s)->getPreferredValue();
}

int32_t Spring$NegativeSpring::getMaximumValue() {
	return -$nc(this->s)->getMinimumValue();
}

int32_t Spring$NegativeSpring::getValue() {
	return -$nc(this->s)->getValue();
}

void Spring$NegativeSpring::setValue(int32_t size) {
	$nc(this->s)->setValue(-size);
}

bool Spring$NegativeSpring::isCyclic($SpringLayout* l) {
	return $nc(this->s)->isCyclic(l);
}

Spring$NegativeSpring::Spring$NegativeSpring() {
}

$Class* Spring$NegativeSpring::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"s", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(Spring$NegativeSpring, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/Spring;)V", nullptr, $PUBLIC, $method(Spring$NegativeSpring, init$, void, $Spring*)},
		{"getMaximumValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$NegativeSpring, getMaximumValue, int32_t)},
		{"getMinimumValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$NegativeSpring, getMinimumValue, int32_t)},
		{"getPreferredValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$NegativeSpring, getPreferredValue, int32_t)},
		{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$NegativeSpring, getValue, int32_t)},
		{"isCyclic", "(Ljavax/swing/SpringLayout;)Z", nullptr, 0, $virtualMethod(Spring$NegativeSpring, isCyclic, bool, $SpringLayout*)},
		{"setValue", "(I)V", nullptr, $PUBLIC, $virtualMethod(Spring$NegativeSpring, setValue, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Spring$NegativeSpring", "javax.swing.Spring", "NegativeSpring", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.Spring$NegativeSpring",
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
	$loadClass(Spring$NegativeSpring, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spring$NegativeSpring);
	});
	return class$;
}

$Class* Spring$NegativeSpring::class$ = nullptr;

	} // swing
} // javax