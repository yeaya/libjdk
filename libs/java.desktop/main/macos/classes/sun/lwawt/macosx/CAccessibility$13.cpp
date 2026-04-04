#include <sun/lwawt/macosx/CAccessibility$13.h>
#include <java/awt/Point.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$13::init$($AccessibleComponent* val$ac) {
	$set(this, val$ac, val$ac);
}

$Object* CAccessibility$13::call() {
	return $of($nc(this->val$ac)->getLocationOnScreen());
}

CAccessibility$13::CAccessibility$13() {
}

$Class* CAccessibility$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ac", "Ljavax/accessibility/AccessibleComponent;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$13, val$ac)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleComponent;)V", "()V", 0, $method(CAccessibility$13, init$, void, $AccessibleComponent*)},
		{"call", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$13, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getLocationOnScreen",
		"(Ljavax/accessibility/AccessibleComponent;Ljava/awt/Component;)Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$13", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$13",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/awt/Point;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$13);
	});
	return class$;
}

$Class* CAccessibility$13::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun