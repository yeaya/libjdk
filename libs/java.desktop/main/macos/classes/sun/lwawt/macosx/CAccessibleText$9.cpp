#include <sun/lwawt/macosx/CAccessibleText$9.h>
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

void CAccessibleText$9::init$($Accessible* val$a, int32_t val$index) {
	$set(this, val$a, val$a);
	this->val$index = val$index;
}

$Object* CAccessibleText$9::call() {
	return $of($Integer::valueOf($CAccessibleText::getLineNumberForIndex(this->val$a, this->val$index)));
}

CAccessibleText$9::CAccessibleText$9() {
}

$Class* CAccessibleText$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$9, val$index)},
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$9, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;I)V", "()V", 0, $method(CAccessibleText$9, init$, void, $Accessible*, int32_t)},
		{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$9, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getLineNumberForIndex",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;I)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$9", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$9",
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
	$loadClass(CAccessibleText$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$9);
	});
	return class$;
}

$Class* CAccessibleText$9::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun