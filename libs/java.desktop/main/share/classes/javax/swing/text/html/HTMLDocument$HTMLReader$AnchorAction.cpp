#include <javax/swing/text/html/HTMLDocument$HTMLReader$AnchorAction.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$CharacterAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$CharacterAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$CharacterAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$HTMLReader$AnchorAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$CharacterAction::init$(this$1);
}

void HTMLDocument$HTMLReader$AnchorAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	this->this$1->emptyAnchor = true;
	$HTMLDocument$HTMLReader$CharacterAction::start(t, attr);
}

void HTMLDocument$HTMLReader$AnchorAction::end($HTML$Tag* t) {
	if (this->this$1->emptyAnchor) {
		$var($chars, one, $new($chars, 1));
		one->set(0, u'\n');
		this->this$1->addContent(one, 0, 1);
	}
	$HTMLDocument$HTMLReader$CharacterAction::end(t);
}

HTMLDocument$HTMLReader$AnchorAction::HTMLDocument$HTMLReader$AnchorAction() {
}

$Class* HTMLDocument$HTMLReader$AnchorAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$AnchorAction, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(HTMLDocument$HTMLReader$AnchorAction, init$, void, $HTMLDocument$HTMLReader*)},
		{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$AnchorAction, end, void, $HTML$Tag*)},
		{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$AnchorAction, start, void, $HTML$Tag*, $MutableAttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$AnchorAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "AnchorAction", 0},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$CharacterAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "CharacterAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$HTMLReader$AnchorAction",
		"javax.swing.text.html.HTMLDocument$HTMLReader$CharacterAction",
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
	$loadClass(HTMLDocument$HTMLReader$AnchorAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLDocument$HTMLReader$AnchorAction);
	});
	return class$;
}

$Class* HTMLDocument$HTMLReader$AnchorAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax