#include <javax/swing/Spring$SumSpring.h>
#include <javax/swing/Spring$AbstractSpring.h>
#include <javax/swing/Spring$CompoundSpring.h>
#include <javax/swing/Spring.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $Spring$CompoundSpring = ::javax::swing::Spring$CompoundSpring;

namespace javax {
	namespace swing {

void Spring$SumSpring::init$($Spring* s1, $Spring* s2) {
	$Spring$CompoundSpring::init$(s1, s2);
}

int32_t Spring$SumSpring::op(int32_t x, int32_t y) {
	return x + y;
}

void Spring$SumSpring::setNonClearValue(int32_t size) {
	$Spring$CompoundSpring::setNonClearValue(size);
	$nc(this->s1)->setStrain(this->getStrain());
	$nc(this->s2)->setValue(size - $nc(this->s1)->getValue());
}

Spring$SumSpring::Spring$SumSpring() {
}

$Class* Spring$SumSpring::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/Spring;Ljavax/swing/Spring;)V", nullptr, $PUBLIC, $method(Spring$SumSpring, init$, void, $Spring*, $Spring*)},
		{"op", "(II)I", nullptr, $PROTECTED, $virtualMethod(Spring$SumSpring, op, int32_t, int32_t, int32_t)},
		{"setNonClearValue", "(I)V", nullptr, $PROTECTED, $virtualMethod(Spring$SumSpring, setNonClearValue, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Spring$SumSpring", "javax.swing.Spring", "SumSpring", $PRIVATE | $STATIC},
		{"javax.swing.Spring$CompoundSpring", "javax.swing.Spring", "CompoundSpring", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.Spring$SumSpring",
		"javax.swing.Spring$CompoundSpring",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.Spring"
	};
	$loadClass(Spring$SumSpring, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spring$SumSpring);
	});
	return class$;
}

$Class* Spring$SumSpring::class$ = nullptr;

	} // swing
} // javax