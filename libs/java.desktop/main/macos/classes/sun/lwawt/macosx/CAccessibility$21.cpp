#include <sun/lwawt/macosx/CAccessibility$21.h>
#include <java/awt/Component.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$21::init$($Accessible* val$a, $Component* val$c) {
	$set(this, val$a, val$a);
	$set(this, val$c, val$c);
}

$Object* CAccessibility$21::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return nullptr;
	}
	$var($String, accessibleDescription, $nc(ac)->getAccessibleDescription());
	if (accessibleDescription == nullptr) {
		if ($instanceOf($JComponent, this->val$c)) {
			$var($String, toolTipText, $cast($JComponent, this->val$c)->getToolTipText());
			if (toolTipText != nullptr) {
				return $of(toolTipText);
			}
		}
	}
	return $of(accessibleDescription);
}

CAccessibility$21::CAccessibility$21() {
}

$Class* CAccessibility$21::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$c", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$21, val$c)},
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$21, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)V", "()V", 0, $method(CAccessibility$21, init$, void, $Accessible*, $Component*)},
		{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$21, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getAccessibleDescription",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$21", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$21",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$21);
	});
	return class$;
}

$Class* CAccessibility$21::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun