#include <javax/swing/text/html/HTMLDocument$RunElement.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument$LeafElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument$LeafElement = ::javax::swing::text::AbstractDocument$LeafElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$RunElement::init$($HTMLDocument* this$0, $Element* parent, $AttributeSet* a, int32_t offs0, int32_t offs1) {
	$set(this, this$0, this$0);
	$AbstractDocument$LeafElement::init$(this$0, parent, a, offs0, offs1);
}

$String* HTMLDocument$RunElement::getName() {
	$init($StyleConstants);
	$var($Object, o, getAttribute($StyleConstants::NameAttribute));
	if (o != nullptr) {
		return o->toString();
	}
	return $AbstractDocument$LeafElement::getName();
}

$AttributeSet* HTMLDocument$RunElement::getResolveParent() {
	return nullptr;
}

HTMLDocument$RunElement::HTMLDocument$RunElement() {
}

$Class* HTMLDocument$RunElement::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/HTMLDocument;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$RunElement, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HTMLDocument;Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;II)V", nullptr, $PUBLIC, $method(HTMLDocument$RunElement, init$, void, $HTMLDocument*, $Element*, $AttributeSet*, int32_t, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$RunElement, getName, $String*)},
		{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$RunElement, getResolveParent, $AttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$RunElement", "javax.swing.text.html.HTMLDocument", "RunElement", $PUBLIC},
		{"javax.swing.text.AbstractDocument$LeafElement", "javax.swing.text.AbstractDocument", "LeafElement", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$RunElement",
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
		"javax.swing.text.html.HTMLDocument"
	};
	$loadClass(HTMLDocument$RunElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HTMLDocument$RunElement));
	});
	return class$;
}

$Class* HTMLDocument$RunElement::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax