#include <sun/lwawt/macosx/CAccessibility$11.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$11::init$($AccessibleContext* val$ac, $AccessibleState* val$as) {
	$set(this, val$ac, val$ac);
	$set(this, val$as, val$as);
}

$Object* CAccessibility$11::call() {
	$var($AccessibleStateSet, ass, $nc(this->val$ac)->getAccessibleStateSet());
	if (ass == nullptr) {
		return nullptr;
	}
	return $of($Boolean::valueOf($nc(ass)->contains(this->val$as)));
}

CAccessibility$11::CAccessibility$11() {
}

$Class* CAccessibility$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$as", "Ljavax/accessibility/AccessibleState;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$11, val$as)},
		{"val$ac", "Ljavax/accessibility/AccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$11, val$ac)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleContext;Ljavax/accessibility/AccessibleState;)V", "()V", 0, $method(CAccessibility$11, init$, void, $AccessibleContext*, $AccessibleState*)},
		{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$11, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"contains",
		"(Ljavax/accessibility/AccessibleContext;Ljavax/accessibility/AccessibleState;Ljava/awt/Component;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$11", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$11",
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
	$loadClass(CAccessibility$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$11);
	});
	return class$;
}

$Class* CAccessibility$11::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun