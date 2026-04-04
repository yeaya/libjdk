#include <sun/lwawt/macosx/CAccessibility$7.h>
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

void CAccessibility$7::init$($AccessibleContext* val$ac, int32_t val$index) {
	$set(this, val$ac, val$ac);
	this->val$index = val$index;
}

void CAccessibility$7::run() {
	$var($AccessibleSelection, as, $nc(this->val$ac)->getAccessibleSelection());
	if (as == nullptr) {
		return;
	}
	$nc(as)->addAccessibleSelection(this->val$index);
}

CAccessibility$7::CAccessibility$7() {
}

$Class* CAccessibility$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$7, val$index)},
		{"val$ac", "Ljavax/accessibility/AccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$7, val$ac)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/AccessibleContext;I)V", "()V", 0, $method(CAccessibility$7, init$, void, $AccessibleContext*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CAccessibility$7, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"addAccessibleSelection",
		"(Ljavax/accessibility/AccessibleContext;ILjava/awt/Component;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$7",
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
	$loadClass(CAccessibility$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$7);
	});
	return class$;
}

$Class* CAccessibility$7::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun