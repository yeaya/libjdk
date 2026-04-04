#include <javax/swing/text/DefaultStyledDocument$SectionElement.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {

void DefaultStyledDocument$SectionElement::init$($DefaultStyledDocument* this$0) {
	$set(this, this$0, this$0);
	$AbstractDocument$BranchElement::init$(this$0, nullptr, nullptr);
}

$String* DefaultStyledDocument$SectionElement::getName() {
	return "section"_s;
}

DefaultStyledDocument$SectionElement::DefaultStyledDocument$SectionElement() {
}

$Class* DefaultStyledDocument$SectionElement::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/DefaultStyledDocument;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultStyledDocument$SectionElement, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/DefaultStyledDocument;)V", nullptr, $PUBLIC, $method(DefaultStyledDocument$SectionElement, init$, void, $DefaultStyledDocument*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultStyledDocument$SectionElement, getName, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultStyledDocument$SectionElement", "javax.swing.text.DefaultStyledDocument", "SectionElement", $PROTECTED},
		{"javax.swing.text.AbstractDocument$BranchElement", "javax.swing.text.AbstractDocument", "BranchElement", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.DefaultStyledDocument$SectionElement",
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
		"javax.swing.text.DefaultStyledDocument"
	};
	$loadClass(DefaultStyledDocument$SectionElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultStyledDocument$SectionElement));
	});
	return class$;
}

$Class* DefaultStyledDocument$SectionElement::class$ = nullptr;

		} // text
	} // swing
} // javax