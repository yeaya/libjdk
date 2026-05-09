#include <FPMethodCalledTest$PasswordViewINTAPI.h>
#include <FPMethodCalledTest.h>
#include <java/awt/Graphics.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/PasswordView.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PasswordView = ::javax::swing::text::PasswordView;

int32_t FPMethodCalledTest$PasswordViewINTAPI::hashCode() {
	return this->$PasswordView::hashCode();
}

bool FPMethodCalledTest$PasswordViewINTAPI::equals(Object$* arg0) {
	return this->$PasswordView::equals(arg0);
}

$Object* FPMethodCalledTest$PasswordViewINTAPI::clone() {
	return this->$PasswordView::clone();
}

$String* FPMethodCalledTest$PasswordViewINTAPI::toString() {
	return this->$PasswordView::toString();
}

void FPMethodCalledTest$PasswordViewINTAPI::finalize() {
	this->$PasswordView::finalize();
}

void FPMethodCalledTest$PasswordViewINTAPI::init$($Element* elem) {
	$PasswordView::init$(elem);
	this->isIntMethodCalled = false;
}

int32_t FPMethodCalledTest$PasswordViewINTAPI::drawEchoCharacter($Graphics* g, int32_t x, int32_t y, char16_t c) {
	this->isIntMethodCalled = true;
	return $PasswordView::drawEchoCharacter(g, x, y, c);
}

bool FPMethodCalledTest$PasswordViewINTAPI::getResult() {
	return this->isIntMethodCalled;
}

FPMethodCalledTest$PasswordViewINTAPI::FPMethodCalledTest$PasswordViewINTAPI() {
}

$Class* FPMethodCalledTest$PasswordViewINTAPI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isIntMethodCalled", "Z", nullptr, 0, $field(FPMethodCalledTest$PasswordViewINTAPI, isIntMethodCalled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(FPMethodCalledTest$PasswordViewINTAPI, init$, void, $Element*)},
		{"drawEchoCharacter", "(Ljava/awt/Graphics;IIC)I", nullptr, $PROTECTED, $virtualMethod(FPMethodCalledTest$PasswordViewINTAPI, drawEchoCharacter, int32_t, $Graphics*, int32_t, int32_t, char16_t)},
		{"getResult", "()Z", nullptr, $PUBLIC, $virtualMethod(FPMethodCalledTest$PasswordViewINTAPI, getResult, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$PasswordViewINTAPI", "FPMethodCalledTest", "PasswordViewINTAPI", $STATIC},
		{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FPMethodCalledTest$PasswordViewINTAPI",
		"javax.swing.text.PasswordView",
		"FPMethodCalledTest$Resultable",
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
	$loadClass(FPMethodCalledTest$PasswordViewINTAPI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FPMethodCalledTest$PasswordViewINTAPI));
	});
	return class$;
}

$Class* FPMethodCalledTest$PasswordViewINTAPI::class$ = nullptr;