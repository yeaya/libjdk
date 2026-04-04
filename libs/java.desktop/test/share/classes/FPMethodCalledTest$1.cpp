#include <FPMethodCalledTest$1.h>
#include <FPMethodCalledTest$Test.h>
#include <FPMethodCalledTest.h>
#include <javax/swing/plaf/metal/MetalTextFieldUI.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalTextFieldUI = ::javax::swing::plaf::metal::MetalTextFieldUI;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;

void FPMethodCalledTest$1::init$($FPMethodCalledTest$Test* val$test) {
	$set(this, val$test, val$test);
	$MetalTextFieldUI::init$();
}

$View* FPMethodCalledTest$1::create($Element* elem) {
	return $nc(this->val$test)->createView(elem);
}

FPMethodCalledTest$1::FPMethodCalledTest$1() {
}

$Class* FPMethodCalledTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$test", "LFPMethodCalledTest$Test;", nullptr, $FINAL | $SYNTHETIC, $field(FPMethodCalledTest$1, val$test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LFPMethodCalledTest$Test;)V", nullptr, 0, $method(FPMethodCalledTest$1, init$, void, $FPMethodCalledTest$Test*)},
		{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(FPMethodCalledTest$1, create, $View*, $Element*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FPMethodCalledTest",
		"createAndShowGUI",
		"(LFPMethodCalledTest$Test;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$1", nullptr, nullptr, 0},
		{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FPMethodCalledTest$1",
		"javax.swing.plaf.metal.MetalTextFieldUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FPMethodCalledTest"
	};
	$loadClass(FPMethodCalledTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FPMethodCalledTest$1));
	});
	return class$;
}

$Class* FPMethodCalledTest$1::class$ = nullptr;