#include <FPMethodCalledTest$4.h>
#include <FPMethodCalledTest$PlainViewMixedAPI.h>
#include <FPMethodCalledTest$Test.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$PlainViewMixedAPI = ::FPMethodCalledTest$PlainViewMixedAPI;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;

void FPMethodCalledTest$4::init$() {
	$FPMethodCalledTest$Test::init$();
}

$View* FPMethodCalledTest$4::createView($Element* elem) {
	$var($FPMethodCalledTest$PlainViewMixedAPI, view, $new($FPMethodCalledTest$PlainViewMixedAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$4::FPMethodCalledTest$4() {
}

$Class* FPMethodCalledTest$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FPMethodCalledTest$4, init$, void)},
		{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0, $virtualMethod(FPMethodCalledTest$4, createView, $View*, $Element*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FPMethodCalledTest",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$4", nullptr, nullptr, 0},
		{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FPMethodCalledTest$4",
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
	$loadClass(FPMethodCalledTest$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$4);
	});
	return class$;
}

$Class* FPMethodCalledTest$4::class$ = nullptr;