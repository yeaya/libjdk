#include <FPMethodCalledTest$6.h>
#include <FPMethodCalledTest$Test.h>
#include <FPMethodCalledTest$WrappedPlainViewFPAPI.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $FPMethodCalledTest$WrappedPlainViewFPAPI = ::FPMethodCalledTest$WrappedPlainViewFPAPI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;

void FPMethodCalledTest$6::init$() {
	$FPMethodCalledTest$Test::init$();
}

$View* FPMethodCalledTest$6::createView($Element* elem) {
	$var($FPMethodCalledTest$WrappedPlainViewFPAPI, view, $new($FPMethodCalledTest$WrappedPlainViewFPAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$6::FPMethodCalledTest$6() {
}

$Class* FPMethodCalledTest$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FPMethodCalledTest$6, init$, void)},
		{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0, $virtualMethod(FPMethodCalledTest$6, createView, $View*, $Element*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FPMethodCalledTest",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$6", nullptr, nullptr, 0},
		{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FPMethodCalledTest$6",
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
	$loadClass(FPMethodCalledTest$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$6);
	});
	return class$;
}

$Class* FPMethodCalledTest$6::class$ = nullptr;