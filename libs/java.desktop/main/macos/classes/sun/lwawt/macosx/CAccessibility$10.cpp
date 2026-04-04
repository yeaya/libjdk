#include <sun/lwawt/macosx/CAccessibility$10.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleStateSet.h>
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

void CAccessibility$10::init$($AccessibleContext* val$ac) {
	$set(this, val$ac, val$ac);
}

$Object* CAccessibility$10::call() {
	return $nc(this->val$ac)->getAccessibleStateSet();
}

CAccessibility$10::CAccessibility$10() {
}

$Class* CAccessibility$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ac", "Ljavax/accessibility/AccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$10, val$ac)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleContext;)V", "()V", 0, $method(CAccessibility$10, init$, void, $AccessibleContext*)},
		{"call", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$10, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getAccessibleStateSet",
		"(Ljavax/accessibility/AccessibleContext;Ljava/awt/Component;)Ljavax/accessibility/AccessibleStateSet;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$10",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleStateSet;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$10);
	});
	return class$;
}

$Class* CAccessibility$10::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun