#include <javax/swing/Spring$WidthSpring.h>
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

void Spring$WidthSpring::init$($Component* c) {
	$Spring$AbstractSpring::init$();
	$set(this, c, c);
}

int32_t Spring$WidthSpring::getMinimumValue() {
	return $nc($($nc(this->c)->getMinimumSize()))->width;
}

int32_t Spring$WidthSpring::getPreferredValue() {
	return $nc($($nc(this->c)->getPreferredSize()))->width;
}

int32_t Spring$WidthSpring::getMaximumValue() {
	return $Math::min($Short::MAX_VALUE, $nc($($nc(this->c)->getMaximumSize()))->width);
}

Spring$WidthSpring::Spring$WidthSpring() {
}

$Class* Spring$WidthSpring::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c", "Ljava/awt/Component;", nullptr, 0, $field(Spring$WidthSpring, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(Spring$WidthSpring, init$, void, $Component*)},
		{"getMaximumValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$WidthSpring, getMaximumValue, int32_t)},
		{"getMinimumValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$WidthSpring, getMinimumValue, int32_t)},
		{"getPreferredValue", "()I", nullptr, $PUBLIC, $virtualMethod(Spring$WidthSpring, getPreferredValue, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Spring$WidthSpring", "javax.swing.Spring", "WidthSpring", $STATIC},
		{"javax.swing.Spring$AbstractSpring", "javax.swing.Spring", "AbstractSpring", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.Spring$WidthSpring",
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
	$loadClass(Spring$WidthSpring, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spring$WidthSpring);
	});
	return class$;
}

$Class* Spring$WidthSpring::class$ = nullptr;

	} // swing
} // javax