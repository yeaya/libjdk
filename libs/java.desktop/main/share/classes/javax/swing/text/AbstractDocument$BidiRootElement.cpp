#include <javax/swing/text/AbstractDocument$BidiRootElement.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {

void AbstractDocument$BidiRootElement::init$($AbstractDocument* this$0) {
	$set(this, this$0, this$0);
	$AbstractDocument$BranchElement::init$(this$0, nullptr, nullptr);
}

$String* AbstractDocument$BidiRootElement::getName() {
	return "bidi root"_s;
}

AbstractDocument$BidiRootElement::AbstractDocument$BidiRootElement() {
}

$Class* AbstractDocument$BidiRootElement::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$BidiRootElement, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/AbstractDocument;)V", nullptr, 0, $method(AbstractDocument$BidiRootElement, init$, void, $AbstractDocument*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$BidiRootElement, getName, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AbstractDocument$BidiRootElement", "javax.swing.text.AbstractDocument", "BidiRootElement", 0},
		{"javax.swing.text.AbstractDocument$BranchElement", "javax.swing.text.AbstractDocument", "BranchElement", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.AbstractDocument$BidiRootElement",
		"javax.swing.text.AbstractDocument$BranchElement",
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
	$loadClass(AbstractDocument$BidiRootElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractDocument$BidiRootElement));
	});
	return class$;
}

$Class* AbstractDocument$BidiRootElement::class$ = nullptr;

		} // text
	} // swing
} // javax