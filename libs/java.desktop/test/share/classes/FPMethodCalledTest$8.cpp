#include <FPMethodCalledTest$8.h>
#include <FPMethodCalledTest$PasswordViewINTAPI.h>
#include <FPMethodCalledTest$Test.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$PasswordViewINTAPI = ::FPMethodCalledTest$PasswordViewINTAPI;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;

void FPMethodCalledTest$8::init$(bool isPasswordField) {
	$FPMethodCalledTest$Test::init$(isPasswordField);
}

$View* FPMethodCalledTest$8::createView($Element* elem) {
	$var($FPMethodCalledTest$PasswordViewINTAPI, view, $new($FPMethodCalledTest$PasswordViewINTAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$8::FPMethodCalledTest$8() {
}

$Class* FPMethodCalledTest$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(FPMethodCalledTest$8, init$, void, bool)},
		{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0, $virtualMethod(FPMethodCalledTest$8, createView, $View*, $Element*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FPMethodCalledTest",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$8", nullptr, nullptr, 0},
		{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FPMethodCalledTest$8",
		"FPMethodCalledTest$Test",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FPMethodCalledTest"
	};
	$loadClass(FPMethodCalledTest$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$8);
	});
	return class$;
}

$Class* FPMethodCalledTest$8::class$ = nullptr;