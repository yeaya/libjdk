#include <sun/lwawt/macosx/CAccessibleText$14.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibleText$14::init$($Accessible* val$a, int32_t val$location, int32_t val$length) {
	$set(this, val$a, val$a);
	this->val$location = val$location;
	this->val$length = val$length;
}

$Object* CAccessibleText$14::call() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return nullptr;
	}
	$var($AccessibleEditableText, aet, $nc(ac)->getAccessibleEditableText());
	if (aet == nullptr) {
		return nullptr;
	}
	return $of($nc(aet)->getTextRange(this->val$location, this->val$location + this->val$length));
}

CAccessibleText$14::CAccessibleText$14() {
}

$Class* CAccessibleText$14::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$length", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$14, val$length)},
		{"val$location", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$14, val$location)},
		{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$14, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;II)V", "()V", 0, $method(CAccessibleText$14, init$, void, $Accessible*, int32_t, int32_t)},
		{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CAccessibleText$14, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibleText",
		"getStringForRange",
		"(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibleText$14", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibleText$14",
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
		"sun.lwawt.macosx.CAccessibleText"
	};
	$loadClass(CAccessibleText$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibleText$14);
	});
	return class$;
}

$Class* CAccessibleText$14::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun