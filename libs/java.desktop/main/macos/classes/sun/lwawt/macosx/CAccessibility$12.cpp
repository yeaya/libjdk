#include <sun/lwawt/macosx/CAccessibility$12.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JTextArea.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <sun/lwawt/macosx/CAccessible.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextArea = ::javax::swing::JTextArea;
using $CAccessibility = ::sun::lwawt::macosx::CAccessibility;
using $CAccessible = ::sun::lwawt::macosx::CAccessible;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$12::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$12::call() {
	$useLocalObjectStack();
	$var($Accessible, sa, $CAccessible::getSwingAccessible(this->val$a));
	$var($String, role, $CAccessibility::getAccessibleRoleFor(this->val$a));
	if (!"text"_s->equals(role)) {
		return $of(role);
	}
	if ($instanceOf($JTextArea, sa) || $instanceOf($JEditorPane, sa)) {
		return $of("textarea"_s);
	}
	return $of(role);
}

CAccessibility$12::CAccessibility$12() {
}

$Class* CAccessibility$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$12, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibility$12, init$, void, $Accessible*)},
		{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$12, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getAccessibleRole",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$12", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$12",
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
	$loadClass(CAccessibility$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$12);
	});
	return class$;
}

$Class* CAccessibility$12::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun