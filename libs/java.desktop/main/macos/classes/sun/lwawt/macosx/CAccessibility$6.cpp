#include <sun/lwawt/macosx/CAccessibility$6.h>
#include <javax/accessibility/Accessible.h>
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
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$6::init$($AccessibleContext* val$ac, int32_t val$index) {
	$set(this, val$ac, val$ac);
	this->val$index = val$index;
}

$Object* CAccessibility$6::call() {
	$var($AccessibleSelection, as, $nc(this->val$ac)->getAccessibleSelection());
	if (as == nullptr) {
		return nullptr;
	}
	return $nc(as)->getAccessibleSelection(this->val$index);
}

CAccessibility$6::CAccessibility$6() {
}

$Class* CAccessibility$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$6, val$index)},
		{"val$ac", "Ljavax/accessibility/AccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$6, val$ac)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleContext;I)V", "()V", 0, $method(CAccessibility$6, init$, void, $AccessibleContext*, int32_t)},
		{"call", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$6, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"ax_getAccessibleSelection",
		"(Ljavax/accessibility/AccessibleContext;ILjava/awt/Component;)Ljavax/accessibility/Accessible;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$6",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/Accessible;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$6);
	});
	return class$;
}

$Class* CAccessibility$6::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun