#include <FPMethodCalledTest$10.h>
#include <FPMethodCalledTest$PasswordViewMixedAPI.h>
#include <FPMethodCalledTest$Test.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$PasswordViewMixedAPI = ::FPMethodCalledTest$PasswordViewMixedAPI;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;

void FPMethodCalledTest$10::init$(bool isPasswordField) {
	$FPMethodCalledTest$Test::init$(isPasswordField);
}

$View* FPMethodCalledTest$10::createView($Element* elem) {
	$var($FPMethodCalledTest$PasswordViewMixedAPI, view, $new($FPMethodCalledTest$PasswordViewMixedAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$10::FPMethodCalledTest$10() {
}

$Class* FPMethodCalledTest$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(FPMethodCalledTest$10, init$, void, bool)},
		{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0, $virtualMethod(FPMethodCalledTest$10, createView, $View*, $Element*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FPMethodCalledTest",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$10", nullptr, nullptr, 0},
		{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FPMethodCalledTest$10",
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
	$loadClass(FPMethodCalledTest$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$10);
	});
	return class$;
}

$Class* FPMethodCalledTest$10::class$ = nullptr;