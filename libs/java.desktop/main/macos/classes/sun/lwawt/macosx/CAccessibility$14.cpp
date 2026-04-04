#include <sun/lwawt/macosx/CAccessibility$14.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$14::init$($AccessibleText* val$at) {
	$set(this, val$at, val$at);
}

$Object* CAccessibility$14::call() {
	return $of($Integer::valueOf($nc(this->val$at)->getCharCount()));
}

CAccessibility$14::CAccessibility$14() {
}

$Class* CAccessibility$14::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$at", "Ljavax/accessibility/AccessibleText;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$14, val$at)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleText;)V", "()V", 0, $method(CAccessibility$14, init$, void, $AccessibleText*)},
		{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$14, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getCharCount",
		"(Ljavax/accessibility/AccessibleText;Ljava/awt/Component;)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$14", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$14",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$14);
	});
	return class$;
}

$Class* CAccessibility$14::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun