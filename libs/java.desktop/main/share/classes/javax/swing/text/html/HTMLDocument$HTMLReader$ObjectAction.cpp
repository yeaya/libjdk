#include <javax/swing/text/html/HTMLDocument$HTMLReader$ObjectAction.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument$ElementSpec.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$SpecialAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

#undef NAME
#undef PARAM
#undef VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument$ElementSpec = ::javax::swing::text::DefaultStyledDocument$ElementSpec;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$SpecialAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$SpecialAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$HTMLReader$ObjectAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$SpecialAction::init$(this$1);
}

void HTMLDocument$HTMLReader$ObjectAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	$init($HTML$Tag);
	if (t == $HTML$Tag::PARAM) {
		addParameter(a);
	} else {
		$HTMLDocument$HTMLReader$SpecialAction::start(t, a);
	}
}

void HTMLDocument$HTMLReader$ObjectAction::end($HTML$Tag* t) {
	$init($HTML$Tag);
	if (t != $HTML$Tag::PARAM) {
		$HTMLDocument$HTMLReader$SpecialAction::end(t);
	}
}

void HTMLDocument$HTMLReader$ObjectAction::addParameter($AttributeSet* a) {
	$useLocalObjectStack();
	$init($HTML$Attribute);
	$var($String, name, $cast($String, $nc(a)->getAttribute($HTML$Attribute::NAME)));
	$var($String, value, $cast($String, a->getAttribute($HTML$Attribute::VALUE)));
	if ((name != nullptr) && (value != nullptr)) {
		$var($DefaultStyledDocument$ElementSpec, objSpec, $cast($DefaultStyledDocument$ElementSpec, $nc(this->this$1->parseBuffer)->lastElement()));
		$var($MutableAttributeSet, objAttr, $cast($MutableAttributeSet, $nc(objSpec)->getAttributes()));
		$nc(objAttr)->addAttribute(name, value);
	}
}

HTMLDocument$HTMLReader$ObjectAction::HTMLDocument$HTMLReader$ObjectAction() {
}

$Class* HTMLDocument$HTMLReader$ObjectAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$ObjectAction, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(HTMLDocument$HTMLReader$ObjectAction, init$, void, $HTMLDocument$HTMLReader*)},
		{"addParameter", "(Ljavax/swing/text/AttributeSet;)V", nullptr, 0, $virtualMethod(HTMLDocument$HTMLReader$ObjectAction, addParameter, void, $AttributeSet*)},
		{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$ObjectAction, end, void, $HTML$Tag*)},
		{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$ObjectAction, start, void, $HTML$Tag*, $MutableAttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$ObjectAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "ObjectAction", 0},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "SpecialAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$HTMLReader$ObjectAction",
		"javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction",
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
	$loadClass(HTMLDocument$HTMLReader$ObjectAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLDocument$HTMLReader$ObjectAction);
	});
	return class$;
}

$Class* HTMLDocument$HTMLReader$ObjectAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax