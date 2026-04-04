#include <sun/lwawt/macosx/CAccessibleText$7.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibleText$7::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibleText$7::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $new($ints, 2);
	}
	$var($AccessibleText, at, $nc(ac)->getAccessibleText());
	if (at == nullptr) {
		return $new($ints, 2);
	}
	$var($ints, ret, $new($ints, 2));
	ret->set(0, $nc(at)->getSelectionStart());
	ret->set(1, at->getSelectionEnd());
	return ret;
}

CAccessibleText$7::CAccessibleText$7() {
}

$Class* CAccessibleText$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$7, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibleText$7, init$, void, $Accessible*)},
		{"call", "()[I", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$7, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getSelectedTextRange",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$7",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<[I>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibleText"
	};
	$loadClass(CAccessibleText$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$7);
	});
	return class$;
}

$Class* CAccessibleText$7::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun