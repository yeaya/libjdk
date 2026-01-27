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

$FieldInfo _FPMethodCalledTest$Test_FieldInfo_[] = {
	{"resultable", "LFPMethodCalledTest$Resultable;", nullptr, 0, $field(FPMethodCalledTest$Test, resultable)},
	{"isPasswordField", "Z", nullptr, $FINAL, $field(FPMethodCalledTest$Test, isPasswordField$)},
	{}
};

$MethodInfo _FPMethodCalledTest$Test_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FPMethodCalledTest$Test, init$, void)},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(FPMethodCalledTest$Test, init$, void, bool)},
	{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $ABSTRACT, $virtualMethod(FPMethodCalledTest$Test, createView, $View*, $Element*)},
	{"isPasswordField", "()Z", nullptr, 0, $virtualMethod(FPMethodCalledTest$Test, isPasswordField, bool)},
	{}
};

$InnerClassInfo _FPMethodCalledTest$Test_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$Test_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"FPMethodCalledTest$Test",
	"java.lang.Object",
	nullptr,
	_FPMethodCalledTest$Test_FieldInfo_,
	_FPMethodCalledTest$Test_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$Test($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$Test));
}

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
	$loadClass(FPMethodCalledTest$Test, name, initialize, &_FPMethodCalledTest$Test_ClassInfo_, allocate$FPMethodCalledTest$Test);
	return class$;
}

$Class* FPMethodCalledTest$Test::class$ = nullptr;