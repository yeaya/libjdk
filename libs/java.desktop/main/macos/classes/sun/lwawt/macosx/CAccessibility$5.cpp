#include <sun/lwawt/macosx/CAccessibility$5.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$5::init$($AccessibleContext* val$ac) {
	$set(this, val$ac, val$ac);
}

$Object* CAccessibility$5::call() {
	return $nc(this->val$ac)->getAccessibleSelection();
}

CAccessibility$5::CAccessibility$5() {
}

$Class* CAccessibility$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ac", "Ljavax/accessibility/AccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$5, val$ac)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleContext;)V", "()V", 0, $method(CAccessibility$5, init$, void, $AccessibleContext*)},
		{"call", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$5, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getAccessibleSelection",
		"(Ljavax/accessibility/AccessibleContext;Ljava/awt/Component;)Ljavax/accessibility/AccessibleSelection;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$5",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleSelection;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$5);
	});
	return class$;
}

$Class* CAccessibility$5::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun