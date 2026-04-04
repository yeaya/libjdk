#include <sun/lwawt/macosx/CAccessibleText$2.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
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

void CAccessibleText$2::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibleText$2::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return nullptr;
	}
	$var($AccessibleText, at, $nc(ac)->getAccessibleText());
	if (at == nullptr) {
		return nullptr;
	}
	return $of($nc(at)->getSelectedText());
}

CAccessibleText$2::CAccessibleText$2() {
}

$Class* CAccessibleText$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$2, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibleText$2, init$, void, $Accessible*)},
		{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$2, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getSelectedText",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$2",
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
		"sun.lwawt.macosx.CAccessibleText"
	};
	$loadClass(CAccessibleText$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$2);
	});
	return class$;
}

$Class* CAccessibleText$2::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun