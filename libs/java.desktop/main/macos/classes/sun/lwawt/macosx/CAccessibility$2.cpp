#include <sun/lwawt/macosx/CAccessibility$2.h>
#include <javax/accessibility/AccessibleAction.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$2::init$($AccessibleAction* val$aa, int32_t val$index) {
	$set(this, val$aa, val$aa);
	this->val$index = val$index;
}

$Object* CAccessibility$2::call() {
	return $of($nc(this->val$aa)->getAccessibleActionDescription(this->val$index));
}

CAccessibility$2::CAccessibility$2() {
}

$Class* CAccessibility$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$2, val$index)},
		{"val$aa", "Ljavax/accessibility/AccessibleAction;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$2, val$aa)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleAction;I)V", "()V", 0, $method(CAccessibility$2, init$, void, $AccessibleAction*, int32_t)},
		{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$2, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getAccessibleActionDescription",
		"(Ljavax/accessibility/AccessibleAction;ILjava/awt/Component;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$2",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$2);
	});
	return class$;
}

$Class* CAccessibility$2::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun