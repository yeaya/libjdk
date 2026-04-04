#include <javax/swing/text/AbstractDocument$BidiElement.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument$LeafElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$LeafElement = ::javax::swing::text::AbstractDocument$LeafElement;
using $Element = ::javax::swing::text::Element;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;

namespace javax {
	namespace swing {
		namespace text {

void AbstractDocument$BidiElement::init$($AbstractDocument* this$0, $Element* parent, int32_t start, int32_t end, int32_t level) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$AbstractDocument$LeafElement::init$(this$0, parent, $$new($SimpleAttributeSet), start, end);
	$init($StyleConstants);
	addAttribute($StyleConstants::BidiLevel, $($Integer::valueOf(level)));
}

$String* AbstractDocument$BidiElement::getName() {
	return "bidi level"_s;
}

int32_t AbstractDocument$BidiElement::getLevel() {
	$init($StyleConstants);
	$var($Integer, o, $cast($Integer, getAttribute($StyleConstants::BidiLevel)));
	if (o != nullptr) {
		return o->intValue();
	}
	return 0;
}

bool AbstractDocument$BidiElement::isLeftToRight() {
	return ((getLevel() % 2) == 0);
}

AbstractDocument$BidiElement::AbstractDocument$BidiElement() {
}

$Class* AbstractDocument$BidiElement::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$BidiElement, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/AbstractDocument;Ljavax/swing/text/Element;III)V", nullptr, 0, $method(AbstractDocument$BidiElement, init$, void, $AbstractDocument*, $Element*, int32_t, int32_t, int32_t)},
		{"getLevel", "()I", nullptr, 0, $virtualMethod(AbstractDocument$BidiElement, getLevel, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$BidiElement, getName, $String*)},
		{"isLeftToRight", "()Z", nullptr, 0, $virtualMethod(AbstractDocument$BidiElement, isLeftToRight, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AbstractDocument$BidiElement", "javax.swing.text.AbstractDocument", "BidiElement", 0},
		{"javax.swing.text.AbstractDocument$LeafElement", "javax.swing.text.AbstractDocument", "LeafElement", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.AbstractDocument$BidiElement",
		"javax.swing.text.AbstractDocument$LeafElement",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.AbstractDocument"
	};
	$loadClass(AbstractDocument$BidiElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractDocument$BidiElement));
	});
	return class$;
}

$Class* AbstractDocument$BidiElement::class$ = nullptr;

		} // text
	} // swing
} // javax