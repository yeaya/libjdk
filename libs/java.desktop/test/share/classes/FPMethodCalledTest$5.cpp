#include <FPMethodCalledTest$5.h>
#include <FPMethodCalledTest$Test.h>
#include <FPMethodCalledTest$WrappedPlainViewINTAPI.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $FPMethodCalledTest$WrappedPlainViewINTAPI = ::FPMethodCalledTest$WrappedPlainViewINTAPI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;

void FPMethodCalledTest$5::init$() {
	$FPMethodCalledTest$Test::init$();
}

$View* FPMethodCalledTest$5::createView($Element* elem) {
	$var($FPMethodCalledTest$WrappedPlainViewINTAPI, view, $new($FPMethodCalledTest$WrappedPlainViewINTAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$5::FPMethodCalledTest$5() {
}

$Class* FPMethodCalledTest$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FPMethodCalledTest$5, init$, void)},
		{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0, $virtualMethod(FPMethodCalledTest$5, createView, $View*, $Element*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FPMethodCalledTest",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$5", nullptr, nullptr, 0},
		{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FPMethodCalledTest$5",
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
	$loadClass(FPMethodCalledTest$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$5);
	});
	return class$;
}

$Class* FPMethodCalledTest$5::class$ = nullptr;