#include <sun/lwawt/macosx/CAccessibility$3.h>
#include <javax/accessibility/AccessibleAction.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$3::init$($AccessibleAction* val$aa, int32_t val$index) {
	$set(this, val$aa, val$aa);
	this->val$index = val$index;
}

void CAccessibility$3::run() {
	$nc(this->val$aa)->doAccessibleAction(this->val$index);
}

CAccessibility$3::CAccessibility$3() {
}

$Class* CAccessibility$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$3, val$index)},
		{"val$aa", "Ljavax/accessibility/AccessibleAction;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$3, val$aa)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleAction;I)V", "()V", 0, $method(CAccessibility$3, init$, void, $AccessibleAction*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CAccessibility$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"doAccessibleAction",
		"(Ljavax/accessibility/AccessibleAction;ILjava/awt/Component;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$3);
	});
	return class$;
}

$Class* CAccessibility$3::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun