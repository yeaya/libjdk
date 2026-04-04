#include <sun/lwawt/macosx/CAccessibleText$10.h>
#include <javax/accessibility/Accessible.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $CAccessibleText = ::sun::lwawt::macosx::CAccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibleText$10::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibleText$10::call() {
	return $of($Integer::valueOf($CAccessibleText::getLineNumberForInsertionPoint(this->val$a)));
}

CAccessibleText$10::CAccessibleText$10() {
}

$Class* CAccessibleText$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$10, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibleText$10, init$, void, $Accessible*)},
		{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$10, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getLineNumberForInsertionPoint",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$10",
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
		"sun.lwawt.macosx.CAccessibleText"
	};
	$loadClass(CAccessibleText$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$10);
	});
	return class$;
}

$Class* CAccessibleText$10::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun