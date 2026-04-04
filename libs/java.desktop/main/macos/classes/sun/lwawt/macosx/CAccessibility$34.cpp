#include <sun/lwawt/macosx/CAccessibility$34.h>
#include <java/util/ArrayList.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <sun/lwawt/macosx/CAccessible.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $CAccessibility = ::sun::lwawt::macosx::CAccessibility;
using $CAccessible = ::sun::lwawt::macosx::CAccessible;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$34::init$($Accessible* val$a, int32_t val$whichChildren, bool val$allowIgnored) {
	$set(this, val$a, val$a);
	this->val$whichChildren = val$whichChildren;
	this->val$allowIgnored = val$allowIgnored;
}

$Object* CAccessibility$34::call() {
	$useLocalObjectStack();
	$var($ArrayList, childrenAndRoles, $new($ArrayList));
	$CAccessibility::_addChildren(this->val$a, this->val$whichChildren, this->val$allowIgnored, childrenAndRoles);
	if (this->val$whichChildren == -2) {
		if (!childrenAndRoles->isEmpty()) {
			$var($AccessibleContext, activeDescendantAC, $CAccessible::getActiveDescendant(this->val$a));
			if (activeDescendantAC != nullptr) {
				$var($String, activeDescendantName, activeDescendantAC->getAccessibleName());
				$var($AccessibleRole, activeDescendantRole, activeDescendantAC->getAccessibleRole());
				$var($ArrayList, newArray, $new($ArrayList));
				int32_t count = childrenAndRoles->size();
				$var($Accessible, currentAccessible, nullptr);
				$var($AccessibleContext, currentAC, nullptr);
				$var($String, currentName, nullptr);
				$var($AccessibleRole, currentRole, nullptr);
				for (int32_t i = 0; i < count; i += 2) {
					$assign(currentAccessible, $cast($Accessible, childrenAndRoles->get(i)));
					$assign(currentAC, $nc(currentAccessible)->getAccessibleContext());
					$assign(currentName, $nc(currentAC)->getAccessibleName());
					$assign(currentRole, $cast($AccessibleRole, childrenAndRoles->get(i + 1)));
					bool var$0 = currentName != nullptr && currentName->equals(activeDescendantName);
					if (var$0 && $nc(currentRole)->equals(activeDescendantRole)) {
						newArray->add(0, currentAccessible);
						newArray->add(1, currentRole);
					} else {
						newArray->add(currentAccessible);
						newArray->add(currentRole);
					}
				}
				$assign(childrenAndRoles, newArray);
			}
		}
	}
	if ((this->val$whichChildren < 0) || (this->val$whichChildren * 2 >= childrenAndRoles->size())) {
		return childrenAndRoles->toArray();
	}
	return $new($ObjectArray, {
		$(childrenAndRoles->get(this->val$whichChildren * 2)),
		$(childrenAndRoles->get((this->val$whichChildren * 2) + 1))
	});
}

CAccessibility$34::CAccessibility$34() {
}

$Class* CAccessibility$34::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$allowIgnored", "Z", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$34, val$allowIgnored)},
		{"val$whichChildren", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$34, val$whichChildren)},
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$34, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;IZ)V", "()V", 0, $method(CAccessibility$34, init$, void, $Accessible*, int32_t, bool)},
		{"call", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$34, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getChildrenAndRoles",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;IZ)[Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$34", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$34",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<[Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$34, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$34);
	});
	return class$;
}

$Class* CAccessibility$34::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun