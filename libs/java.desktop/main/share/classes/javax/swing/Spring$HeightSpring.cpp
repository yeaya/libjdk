#include <javax/swing/Spring$HeightSpring.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <javax/swing/Spring$AbstractSpring.h>
#include <javax/swing/Spring.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Spring$AbstractSpring = ::javax::swing::Spring$AbstractSpring;

namespace javax {
	namespace swing {

void Spring$HeightSpring::init$($Component* c) {
	$Spring$AbstractSpring::init$();
	$set(this, c, c);
}

int32_t Spring$HeightSpring::getMinimumValue() {
	return $nc($($nc(this->c)->getMinimumSize()))->height;
}

int32_t Spring$HeightSpring::getPreferredValue() {
	return $nc($($nc(this->c)->getPreferredSize()))->height;
}

int32_t Spring$HeightSpring::getMaximumValue() {
	return $Math::min($Short::MAX_VALUE, $nc($($nc(this->c)->getMaximumSize()))->height);
}

Spring$HeightSpring::Spring$HeightSpring() {
}

$Class* Spring$HeightSpring::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c", "Ljava/awt/Component;", nullptr, 0, $field(Spring$HeightSpring, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(Spring$HeightSpring, init$, void, $Component*)},
		{"getMaximumValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$HeightSpring, getMaximumValue, int32_t)},
		{"getMinimumValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$HeightSpring, getMinimumValue, int32_t)},
		{"getPreferredValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$HeightSpring, getPreferredValue, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Spring$HeightSpring", "javax.swing.Spring", "HeightSpring", $STATIC},
		{"javax.swing.Spring$AbstractSpring", "javax.swing.Spring", "AbstractSpring", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.Spring$HeightSpring",
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
	$loadClass(Spring$HeightSpring, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spring$HeightSpring);
	});
	return class$;
}

$Class* Spring$HeightSpring::class$ = nullptr;

	} // swing
} // javax