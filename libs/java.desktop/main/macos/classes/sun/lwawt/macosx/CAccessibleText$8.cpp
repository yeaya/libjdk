#include <sun/lwawt/macosx/CAccessibleText$8.h>
#include <javax/accessibility/Accessible.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $CAccessibleText = ::sun::lwawt::macosx::CAccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibleText$8::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibleText$8::call() {
	return $CAccessibleText::getVisibleCharacterRange(this->val$a);
}

CAccessibleText$8::CAccessibleText$8() {
}

$Class* CAccessibleText$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$8, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibleText$8, init$, void, $Accessible*)},
		{"call", "()[I", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$8, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getVisibleCharacterRange",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$8", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$8",
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
	$loadClass(CAccessibleText$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$8);
	});
	return class$;
}

$Class* CAccessibleText$8::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun