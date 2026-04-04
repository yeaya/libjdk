#include <sun/lwawt/macosx/CAccessibility$27.h>
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
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$27::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

void CAccessibility$27::run() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return;
	}
	int32_t i = $nc(ac)->getAccessibleIndexInParent();
	if (i == -1) {
		return;
	}
	$var($Accessible, parent, ac->getAccessibleParent());
	$var($AccessibleContext, pac, $nc(parent)->getAccessibleContext());
	if (pac == nullptr) {
		return;
	}
	$var($AccessibleSelection, as, $nc(pac)->getAccessibleSelection());
	if (as == nullptr) {
		return;
	}
	$nc(as)->addAccessibleSelection(i);
}

CAccessibility$27::CAccessibility$27() {
}

$Class* CAccessibility$27::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$27, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibility$27, init$, void, $Accessible*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CAccessibility$27, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"requestSelection",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$27", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$27",
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
	$loadClass(CAccessibility$27, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$27);
	});
	return class$;
}

$Class* CAccessibility$27::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun