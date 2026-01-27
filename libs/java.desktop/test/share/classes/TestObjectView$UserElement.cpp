#include <TestObjectView$UserElement.h>

#include <TestObjectView$UserElement$1.h>
#include <TestObjectView.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $TestObjectView$UserElement$1 = ::TestObjectView$UserElement$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;

$MethodInfo _TestObjectView$UserElement_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TestObjectView$UserElement, init$, void)},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement, getAttributes, $AttributeSet*)},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement, getDocument, $Document*)},
	{"getElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement, getElement, $Element*, int32_t)},
	{"getElementCount", "()I", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement, getElementCount, int32_t)},
	{"getElementIndex", "(I)I", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement, getElementIndex, int32_t, int32_t)},
	{"getEndOffset", "()I", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement, getEndOffset, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement, getName, $String*)},
	{"getParentElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement, getParentElement, $Element*)},
	{"getStartOffset", "()I", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement, getStartOffset, int32_t)},
	{"isLeaf", "()Z", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement, isLeaf, bool)},
	{}
};

$InnerClassInfo _TestObjectView$UserElement_InnerClassesInfo_[] = {
	{"TestObjectView$UserElement", "TestObjectView", "UserElement", $PUBLIC | $STATIC},
	{"TestObjectView$UserElement$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestObjectView$UserElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestObjectView$UserElement",
	"java.lang.Object",
	"javax.swing.text.Element",
	nullptr,
	_TestObjectView$UserElement_MethodInfo_,
	nullptr,
	nullptr,
	_TestObjectView$UserElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestObjectView"
};

$Object* allocate$TestObjectView$UserElement($Class* clazz) {
	return $of($alloc(TestObjectView$UserElement));
}

void TestObjectView$UserElement::init$() {
}

$Document* TestObjectView$UserElement::getDocument() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Element* TestObjectView$UserElement::getParentElement() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$String* TestObjectView$UserElement::getName() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$AttributeSet* TestObjectView$UserElement::getAttributes() {
	return $new($TestObjectView$UserElement$1, this);
}

int32_t TestObjectView$UserElement::getStartOffset() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

int32_t TestObjectView$UserElement::getEndOffset() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

int32_t TestObjectView$UserElement::getElementIndex(int32_t offset) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

int32_t TestObjectView$UserElement::getElementCount() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Element* TestObjectView$UserElement::getElement(int32_t index) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bool TestObjectView$UserElement::isLeaf() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

TestObjectView$UserElement::TestObjectView$UserElement() {
}

$Class* TestObjectView$UserElement::load$($String* name, bool initialize) {
	$loadClass(TestObjectView$UserElement, name, initialize, &_TestObjectView$UserElement_ClassInfo_, allocate$TestObjectView$UserElement);
	return class$;
}

$Class* TestObjectView$UserElement::class$ = nullptr;