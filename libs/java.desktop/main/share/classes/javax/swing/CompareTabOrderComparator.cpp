#include <javax/swing/CompareTabOrderComparator.h>
#include <java/awt/Component.h>
#include <javax/swing/DefaultFocusManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultFocusManager = ::javax::swing::DefaultFocusManager;

namespace javax {
	namespace swing {

void CompareTabOrderComparator::init$($DefaultFocusManager* defaultFocusManager) {
	$set(this, defaultFocusManager, defaultFocusManager);
}

int32_t CompareTabOrderComparator::compare($Component* o1, $Component* o2) {
	if (o1 == o2) {
		return 0;
	}
	return ($nc(this->defaultFocusManager)->compareTabOrder(o1, o2)) ? -1 : 1;
}

int32_t CompareTabOrderComparator::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($Component, o1), $cast($Component, o2));
}

CompareTabOrderComparator::CompareTabOrderComparator() {
}

$Class* CompareTabOrderComparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultFocusManager", "Ljavax/swing/DefaultFocusManager;", nullptr, $PRIVATE | $FINAL, $field(CompareTabOrderComparator, defaultFocusManager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/DefaultFocusManager;)V", nullptr, 0, $method(CompareTabOrderComparator, init$, void, $DefaultFocusManager*)},
		{"compare", "(Ljava/awt/Component;Ljava/awt/Component;)I", nullptr, $PUBLIC, $method(CompareTabOrderComparator, compare, int32_t, $Component*, $Component*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CompareTabOrderComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.CompareTabOrderComparator",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/awt/Component;>;"
	};
	$loadClass(CompareTabOrderComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompareTabOrderComparator);
	});
	return class$;
}

$Class* CompareTabOrderComparator::class$ = nullptr;

	} // swing
} // javax