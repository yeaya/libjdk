#include <javax/swing/text/html/HTMLDocument$HTMLReader$CharacterAction.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <jcpp.h>

#undef IMPLIED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$HTMLReader$CharacterAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$CharacterAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	this->this$1->pushCharacterStyle();
	if (!this->this$1->foundInsertTag$) {
		bool insert = this->this$1->canInsertTag(t, attr, false);
		if (this->this$1->foundInsertTag$) {
			if (!this->this$1->inParagraph) {
				this->this$1->inParagraph = (this->this$1->impliedP = true);
			}
		}
		if (!insert) {
			return;
		}
	}
	$init($HTMLEditorKit$ParserCallback);
	if ($nc(attr)->isDefined($HTMLEditorKit$ParserCallback::IMPLIED)) {
		attr->removeAttribute($HTMLEditorKit$ParserCallback::IMPLIED);
	}
	$nc(this->this$1->charAttr)->addAttribute(t, $(attr->copyAttributes()));
	if (this->this$1->styleAttributes != nullptr) {
		$nc(this->this$1->charAttr)->addAttributes(this->this$1->styleAttributes);
	}
}

void HTMLDocument$HTMLReader$CharacterAction::end($HTML$Tag* t) {
	this->this$1->popCharacterStyle();
}

HTMLDocument$HTMLReader$CharacterAction::HTMLDocument$HTMLReader$CharacterAction() {
}

$Class* HTMLDocument$HTMLReader$CharacterAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$CharacterAction, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(HTMLDocument$HTMLReader$CharacterAction, init$, void, $HTMLDocument$HTMLReader*)},
		{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$CharacterAction, end, void, $HTML$Tag*)},
		{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$CharacterAction, start, void, $HTML$Tag*, $MutableAttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$CharacterAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "CharacterAction", $PUBLIC},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$HTMLReader$CharacterAction",
		"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
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
	$loadClass(HTMLDocument$HTMLReader$CharacterAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLDocument$HTMLReader$CharacterAction);
	});
	return class$;
}

$Class* HTMLDocument$HTMLReader$CharacterAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax