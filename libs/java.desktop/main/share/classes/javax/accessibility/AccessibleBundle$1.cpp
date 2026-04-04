#include <javax/accessibility/AccessibleBundle$1.h>
#include <javax/accessibility/AccessibleBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;

namespace javax {
	namespace accessibility {

void AccessibleBundle$1::init$() {
}

$String* AccessibleBundle$1::getKey($AccessibleBundle* accessibleBundle) {
	return $nc(accessibleBundle)->key;
}

AccessibleBundle$1::AccessibleBundle$1() {
}

$Class* AccessibleBundle$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AccessibleBundle$1, init$, void)},
		{"getKey", "(Ljavax/accessibility/AccessibleBundle;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AccessibleBundle$1, getKey, $String*, $AccessibleBundle*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.accessibility.AccessibleBundle",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.accessibility.AccessibleBundle$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$AccessibleBundleAccessor", "sun.awt.AWTAccessor", "AccessibleBundleAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.accessibility.AccessibleBundle$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$AccessibleBundleAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.accessibility.AccessibleBundle"
	};
	$loadClass(AccessibleBundle$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleBundle$1);
	});
	return class$;
}

$Class* AccessibleBundle$1::class$ = nullptr;

	} // accessibility
} // javax