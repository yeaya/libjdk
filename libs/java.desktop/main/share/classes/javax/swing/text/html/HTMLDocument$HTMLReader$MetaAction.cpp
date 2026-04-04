#include <javax/swing/text/html/HTMLDocument$HTMLReader$MetaAction.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$HiddenAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

#undef CONTENT
#undef HTTPEQUIV

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$HiddenAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$HiddenAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$HTMLReader$MetaAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$HiddenAction::init$(this$1);
}

void HTMLDocument$HTMLReader$MetaAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	$useLocalObjectStack();
	$init($HTML$Attribute);
	$var($Object, equiv, $nc(a)->getAttribute($HTML$Attribute::HTTPEQUIV));
	if (equiv != nullptr) {
		$assign(equiv, $cast($String, equiv)->toLowerCase());
		if (equiv->equals("content-style-type"_s)) {
			$var($String, value, $cast($String, a->getAttribute($HTML$Attribute::CONTENT)));
			$nc(this->this$1->this$0)->setDefaultStyleSheetType(value);
			this->this$1->isStyleCSS = "text/css"_s->equals($(this->this$1->this$0->getDefaultStyleSheetType()));
		} else if (equiv->equals("default-style"_s)) {
			$set(this->this$1, defaultStyle, $cast($String, a->getAttribute($HTML$Attribute::CONTENT)));
		}
	}
	$HTMLDocument$HTMLReader$HiddenAction::start(t, a);
}

bool HTMLDocument$HTMLReader$MetaAction::isEmpty($HTML$Tag* t) {
	return true;
}

HTMLDocument$HTMLReader$MetaAction::HTMLDocument$HTMLReader$MetaAction() {
}

$Class* HTMLDocument$HTMLReader$MetaAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$MetaAction, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(HTMLDocument$HTMLReader$MetaAction, init$, void, $HTMLDocument$HTMLReader*)},
		{"isEmpty", "(Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, 0, $virtualMethod(HTMLDocument$HTMLReader$MetaAction, isEmpty, bool, $HTML$Tag*)},
		{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$MetaAction, start, void, $HTML$Tag*, $MutableAttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$MetaAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "MetaAction", 0},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "HiddenAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$HTMLReader$MetaAction",
		"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction",
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
	$loadClass(HTMLDocument$HTMLReader$MetaAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLDocument$HTMLReader$MetaAction);
	});
	return class$;
}

$Class* HTMLDocument$HTMLReader$MetaAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax