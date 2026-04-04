#include <sun/lwawt/macosx/CAccessibility$31.h>
#include <java/lang/Number.h>
#include <javax/accessibility/AccessibleValue.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$31::init$($AccessibleValue* val$av) {
	$set(this, val$av, val$av);
}

$Object* CAccessibility$31::call() {
	$var($Number, currentAccessibleValue, $nc(this->val$av)->getCurrentAccessibleValue());
	return currentAccessibleValue;
}

CAccessibility$31::CAccessibility$31() {
}

$Class* CAccessibility$31::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$av", "Ljavax/accessibility/AccessibleValue;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$31, val$av)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleValue;)V", "()V", 0, $method(CAccessibility$31, init$, void, $AccessibleValue*)},
		{"call", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$31, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getCurrentAccessibleValue",
		"(Ljavax/accessibility/AccessibleValue;Ljava/awt/Component;)Ljava/lang/Number;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$31", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$31",
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
	$loadClass(CAccessibility$31, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$31);
	});
	return class$;
}

$Class* CAccessibility$31::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun