#include <sun/lwawt/macosx/CAccessibleText$1.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibleText$1::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibleText$1::call() {
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return nullptr;
	}
	return $nc(ac)->getAccessibleEditableText();
}

CAccessibleText$1::CAccessibleText$1() {
}

$Class* CAccessibleText$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$1, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibleText$1, init$, void, $Accessible*)},
		{"call", "()Ljavax/accessibility/AccessibleEditableText;", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$1, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getAccessibleEditableText",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleEditableText;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleEditableText;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibleText"
	};
	$loadClass(CAccessibleText$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$1);
	});
	return class$;
}

$Class* CAccessibleText$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun