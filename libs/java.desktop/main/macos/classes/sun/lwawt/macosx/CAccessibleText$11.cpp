#include <sun/lwawt/macosx/CAccessibleText$11.h>
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

void CAccessibleText$11::init$($Accessible* val$a, int32_t val$line) {
	$set(this, val$a, val$a);
	this->val$line = val$line;
}

$Object* CAccessibleText$11::call() {
	return $CAccessibleText::getRangeForLine(this->val$a, this->val$line);
}

CAccessibleText$11::CAccessibleText$11() {
}

$Class* CAccessibleText$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$line", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$11, val$line)},
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$11, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;I)V", "()V", 0, $method(CAccessibleText$11, init$, void, $Accessible*, int32_t)},
		{"call", "()[I", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$11, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getRangeForLine",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;I)[I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$11", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$11",
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
	$loadClass(CAccessibleText$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$11);
	});
	return class$;
}

$Class* CAccessibleText$11::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun