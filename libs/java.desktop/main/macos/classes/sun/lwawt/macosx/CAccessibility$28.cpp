#include <sun/lwawt/macosx/CAccessibility$28.h>
#include <java/lang/Number.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleValue.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$28::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$28::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return nullptr;
	}
	$var($AccessibleValue, av, $nc(ac)->getAccessibleValue());
	if (av == nullptr) {
		return nullptr;
	}
	return $nc(av)->getMaximumAccessibleValue();
}

CAccessibility$28::CAccessibility$28() {
}

$Class* CAccessibility$28::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$28, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibility$28, init$, void, $Accessible*)},
		{"call", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$28, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getMaximumAccessibleValue",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/Number;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$28", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$28",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Number;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$28, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$28);
	});
	return class$;
}

$Class* CAccessibility$28::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun