#include <sun/lwawt/macosx/CAccessibility$20.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$20::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$20::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return nullptr;
	}
	$var($AccessibleText, accessibleText, $nc(ac)->getAccessibleText());
	return accessibleText;
}

CAccessibility$20::CAccessibility$20() {
}

$Class* CAccessibility$20::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$20, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibility$20, init$, void, $Accessible*)},
		{"call", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$20, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getAccessibleText",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleText;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$20", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$20",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleText;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$20);
	});
	return class$;
}

$Class* CAccessibility$20::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun