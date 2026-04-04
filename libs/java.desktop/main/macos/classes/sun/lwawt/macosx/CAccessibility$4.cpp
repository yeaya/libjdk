#include <sun/lwawt/macosx/CAccessibility$4.h>
#include <java/awt/Dimension.h>
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

void CAccessibility$4::init$($AccessibleComponent* val$ac) {
	$set(this, val$ac, val$ac);
}

$Object* CAccessibility$4::call() {
	return $of($nc(this->val$ac)->getSize());
}

CAccessibility$4::CAccessibility$4() {
}

$Class* CAccessibility$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ac", "Ljavax/accessibility/AccessibleComponent;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$4, val$ac)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleComponent;)V", "()V", 0, $method(CAccessibility$4, init$, void, $AccessibleComponent*)},
		{"call", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$4, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getSize",
		"(Ljavax/accessibility/AccessibleComponent;Ljava/awt/Component;)Ljava/awt/Dimension;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$4",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/awt/Dimension;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$4);
	});
	return class$;
}

$Class* CAccessibility$4::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun