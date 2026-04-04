#include <sun/lwawt/macosx/CAccessibility$19.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $CAccessibility = ::sun::lwawt::macosx::CAccessibility;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$19::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$19::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return nullptr;
	}
	$var($String, accessibleName, $nc(ac)->getAccessibleName());
	if (accessibleName == nullptr) {
		return $of(ac->getAccessibleDescription());
	}
	$var($String, acceleratorText, $CAccessibility::getAcceleratorText(ac));
	if (!$nc(acceleratorText)->isEmpty()) {
		return $of($str({accessibleName, $$str(u' '), acceleratorText}));
	}
	return $of(accessibleName);
}

CAccessibility$19::CAccessibility$19() {
}

$Class* CAccessibility$19::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$19, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibility$19, init$, void, $Accessible*)},
		{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$19, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getAccessibleName",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$19", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$19",
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
	$loadClass(CAccessibility$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$19);
	});
	return class$;
}

$Class* CAccessibility$19::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun