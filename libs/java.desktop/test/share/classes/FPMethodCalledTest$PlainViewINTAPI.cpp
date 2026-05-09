#include <FPMethodCalledTest$PlainViewINTAPI.h>
#include <FPMethodCalledTest.h>
#include <java/awt/Graphics.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/PlainView.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PlainView = ::javax::swing::text::PlainView;

int32_t FPMethodCalledTest$PlainViewINTAPI::hashCode() {
	return this->$PlainView::hashCode();
}

bool FPMethodCalledTest$PlainViewINTAPI::equals(Object$* arg0) {
	return this->$PlainView::equals(arg0);
}

$Object* FPMethodCalledTest$PlainViewINTAPI::clone() {
	return this->$PlainView::clone();
}

$String* FPMethodCalledTest$PlainViewINTAPI::toString() {
	return this->$PlainView::toString();
}

void FPMethodCalledTest$PlainViewINTAPI::finalize() {
	this->$PlainView::finalize();
}

void FPMethodCalledTest$PlainViewINTAPI::init$($Element* elem) {
	$PlainView::init$(elem);
	this->drawLine$ = false;
	this->drawSelected = false;
	this->drawUnselected = false;
}

void FPMethodCalledTest$PlainViewINTAPI::drawLine(int32_t lineIndex, $Graphics* g, int32_t x, int32_t y) {
	this->drawLine$ = true;
	$PlainView::drawLine(lineIndex, g, x, y);
}

int32_t FPMethodCalledTest$PlainViewINTAPI::drawSelectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	this->drawSelected = true;
	return $PlainView::drawSelectedText(g, x, y, p0, p1);
}

int32_t FPMethodCalledTest$PlainViewINTAPI::drawUnselectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	this->drawUnselected = true;
	return $PlainView::drawUnselectedText(g, x, y, p0, p1);
}

bool FPMethodCalledTest$PlainViewINTAPI::getResult() {
	return this->drawLine$ && this->drawSelected && this->drawUnselected;
}

FPMethodCalledTest$PlainViewINTAPI::FPMethodCalledTest$PlainViewINTAPI() {
}

$Class* FPMethodCalledTest$PlainViewINTAPI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"drawLine", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewINTAPI, drawLine$)},
		{"drawSelected", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewINTAPI, drawSelected)},
		{"drawUnselected", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewINTAPI, drawUnselected)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(FPMethodCalledTest$PlainViewINTAPI, init$, void, $Element*)},
		{"drawLine", "(ILjava/awt/Graphics;II)V", nullptr, $PROTECTED, $virtualMethod(FPMethodCalledTest$PlainViewINTAPI, drawLine, void, int32_t, $Graphics*, int32_t, int32_t)},
		{"drawSelectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED, $virtualMethod(FPMethodCalledTest$PlainViewINTAPI, drawSelectedText, int32_t, $Graphics*, int32_t, int32_t, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"drawUnselectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED, $virtualMethod(FPMethodCalledTest$PlainViewINTAPI, drawUnselectedText, int32_t, $Graphics*, int32_t, int32_t, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"getResult", "()Z", nullptr, $PUBLIC, $virtualMethod(FPMethodCalledTest$PlainViewINTAPI, getResult, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$PlainViewINTAPI", "FPMethodCalledTest", "PlainViewINTAPI", $STATIC},
		{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FPMethodCalledTest$PlainViewINTAPI",
		"javax.swing.text.PlainView",
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
	$loadClass(FPMethodCalledTest$PlainViewINTAPI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FPMethodCalledTest$PlainViewINTAPI));
	});
	return class$;
}

$Class* FPMethodCalledTest$PlainViewINTAPI::class$ = nullptr;