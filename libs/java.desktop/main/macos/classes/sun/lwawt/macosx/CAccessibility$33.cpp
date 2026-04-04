#include <sun/lwawt/macosx/CAccessibility$33.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$33::init$($Accessible* val$a, $booleans* val$ret) {
	$set(this, val$a, val$a);
	$set(this, val$ret, val$ret);
}

$Object* CAccessibility$33::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, aContext, $nc(this->val$a)->getAccessibleContext());
	if (aContext == nullptr) {
		return this->val$ret;
	}
	$var($AccessibleComponent, aComponent, $nc(aContext)->getAccessibleComponent());
	$nc(this->val$ret)->set(0, (aComponent != nullptr));
	this->val$ret->set(1, ((aComponent != nullptr) && (aComponent->isFocusTraversable())));
	this->val$ret->set(2, (aContext->getAccessibleValue() != nullptr));
	this->val$ret->set(3, (aContext->getAccessibleText() != nullptr));
	$var($AccessibleStateSet, aStateSet, aContext->getAccessibleStateSet());
	$init($AccessibleState);
	bool var$0 = $nc(aStateSet)->contains($AccessibleState::HORIZONTAL);
	this->val$ret->set(4, (var$0 || aStateSet->contains($AccessibleState::VERTICAL)));
	this->val$ret->set(5, (aContext->getAccessibleName() != nullptr));
	this->val$ret->set(6, (aContext->getAccessibleChildrenCount() > 0));
	return this->val$ret;
}

CAccessibility$33::CAccessibility$33() {
}

$Class* CAccessibility$33::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ret", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$33, val$ret)},
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$33, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;[Z)V", "()V", 0, $method(CAccessibility$33, init$, void, $Accessible*, $booleans*)},
		{"call", "()[Z", nullptr, $PUBLIC, $virtualMethod(CAccessibility$33, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getInitialAttributeStates",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$33", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$33",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<[Z>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$33, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$33);
	});
	return class$;
}

$Class* CAccessibility$33::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun