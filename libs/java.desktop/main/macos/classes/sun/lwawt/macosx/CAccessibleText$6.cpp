#include <sun/lwawt/macosx/CAccessibleText$6.h>
#include <java/awt/Point.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibleText$6::init$($Accessible* val$a, int32_t val$x, int32_t val$y) {
	$set(this, val$a, val$a);
	this->val$x = val$x;
	this->val$y = val$y;
}

$Object* CAccessibleText$6::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return nullptr;
	}
	$var($AccessibleText, at, $nc(ac)->getAccessibleText());
	if (at == nullptr) {
		return nullptr;
	}
	$var($Point, componentLocation, $$nc(ac->getAccessibleComponent())->getLocationOnScreen());
	int32_t localX = this->val$x - $cast(int32_t, $nc(componentLocation)->getX());
	int32_t localY = this->val$y - $cast(int32_t, componentLocation->getY());
	return $of($Integer::valueOf($nc(at)->getIndexAtPoint($$new($Point, localX, localY))));
}

CAccessibleText$6::CAccessibleText$6() {
}

$Class* CAccessibleText$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$y", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$6, val$y)},
		{"val$x", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$6, val$x)},
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$6, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;II)V", "()V", 0, $method(CAccessibleText$6, init$, void, $Accessible*, int32_t, int32_t)},
		{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$6, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getCharacterIndexAtPosition",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$6",
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
	$loadClass(CAccessibleText$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$6);
	});
	return class$;
}

$Class* CAccessibleText$6::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun