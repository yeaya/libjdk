#include <FPMethodCalledTest$Test.h>
#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;

void FPMethodCalledTest$Test::init$() {
	FPMethodCalledTest$Test::init$(false);
}

void FPMethodCalledTest$Test::init$(bool isPasswordField) {
	this->isPasswordField$ = isPasswordField;
}

bool FPMethodCalledTest$Test::isPasswordField() {
	return this->isPasswordField$;
}

FPMethodCalledTest$Test::FPMethodCalledTest$Test() {
}

$Class* FPMethodCalledTest$Test::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"resultable", "LFPMethodCalledTest$Resultable;", nullptr, 0, $field(FPMethodCalledTest$Test, resultable)},
		{"isPasswordField", "Z", nullptr, $FINAL, $field(FPMethodCalledTest$Test, isPasswordField$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FPMethodCalledTest$Test, init$, void)},
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(FPMethodCalledTest$Test, init$, void, bool)},
		{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $ABSTRACT, $virtualMethod(FPMethodCalledTest$Test, createView, $View*, $Element*)},
		{"isPasswordField", "()Z", nullptr, 0, $virtualMethod(FPMethodCalledTest$Test, isPasswordField, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"FPMethodCalledTest$Test",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FPMethodCalledTest"
	};
	$loadClass(FPMethodCalledTest$Test, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$Test);
	});
	return class$;
}

$Class* FPMethodCalledTest$Test::class$ = nullptr;