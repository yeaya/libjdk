#include <sun/lwawt/macosx/CAccessibility$9.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

#undef FALSE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$9::init$($Accessible* val$a, int32_t val$index) {
	$set(this, val$a, val$a);
	this->val$index = val$index;
}

$Object* CAccessibility$9::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of($Boolean::FALSE);
	}
	$var($AccessibleSelection, as, $nc(ac)->getAccessibleSelection());
	if (as == nullptr) {
		return $of($Boolean::FALSE);
	}
	return $of($Boolean::valueOf($nc(as)->isAccessibleChildSelected(this->val$index)));
}

CAccessibility$9::CAccessibility$9() {
}

$Class* CAccessibility$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$9, val$index)},
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$9, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;I)V", "()V", 0, $method(CAccessibility$9, init$, void, $Accessible*, int32_t)},
		{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$9, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"isAccessibleChildSelected",
		"(Ljavax/accessibility/Accessible;ILjava/awt/Component;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$9", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$9",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$9);
	});
	return class$;
}

$Class* CAccessibility$9::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun