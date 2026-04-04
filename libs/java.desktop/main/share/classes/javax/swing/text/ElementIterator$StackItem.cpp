#include <javax/swing/text/ElementIterator$StackItem.h>
#include <java/lang/Cloneable.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;

namespace javax {
	namespace swing {
		namespace text {

void ElementIterator$StackItem::init$($ElementIterator* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$set(this, item, elem);
	this->childIndex = -1;
}

void ElementIterator$StackItem::incrementIndex() {
	++this->childIndex;
}

$Element* ElementIterator$StackItem::getElement() {
	return this->item;
}

int32_t ElementIterator$StackItem::getIndex() {
	return this->childIndex;
}

$Object* ElementIterator$StackItem::clone() {
	return $Cloneable::clone();
}

ElementIterator$StackItem::ElementIterator$StackItem() {
}

$Class* ElementIterator$StackItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/ElementIterator;", nullptr, $FINAL | $SYNTHETIC, $field(ElementIterator$StackItem, this$0)},
		{"item", "Ljavax/swing/text/Element;", nullptr, 0, $field(ElementIterator$StackItem, item)},
		{"childIndex", "I", nullptr, 0, $field(ElementIterator$StackItem, childIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/ElementIterator;Ljavax/swing/text/Element;)V", nullptr, $PRIVATE, $method(ElementIterator$StackItem, init$, void, $ElementIterator*, $Element*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(ElementIterator$StackItem, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{"getElement", "()Ljavax/swing/text/Element;", nullptr, $PRIVATE, $method(ElementIterator$StackItem, getElement, $Element*)},
		{"getIndex", "()I", nullptr, $PRIVATE, $method(ElementIterator$StackItem, getIndex, int32_t)},
		{"incrementIndex", "()V", nullptr, $PRIVATE, $method(ElementIterator$StackItem, incrementIndex, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.ElementIterator$StackItem", "javax.swing.text.ElementIterator", "StackItem", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.ElementIterator$StackItem",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.ElementIterator"
	};
	$loadClass(ElementIterator$StackItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementIterator$StackItem);
	});
	return class$;
}

$Class* ElementIterator$StackItem::class$ = nullptr;

		} // text
	} // swing
} // javax