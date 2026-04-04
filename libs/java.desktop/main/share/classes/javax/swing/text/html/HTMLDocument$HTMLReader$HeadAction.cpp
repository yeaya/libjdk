#include <javax/swing/text/html/HTMLDocument$HTMLReader$HeadAction.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$BlockAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <jcpp.h>

#undef HEAD
#undef HREF
#undef IMPLIED
#undef LINK
#undef MEDIA
#undef REL
#undef TITLE
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$BlockAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$BlockAction;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$HTMLReader$HeadAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$BlockAction::init$(this$1);
}

void HTMLDocument$HTMLReader$HeadAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	this->this$1->inHead = true;
	$init($HTML$Tag);
	$init($HTMLEditorKit$ParserCallback);
	if ((this->this$1->insertTag == nullptr && !this->this$1->insertAfterImplied) || (this->this$1->insertTag == $HTML$Tag::HEAD) || (this->this$1->insertAfterImplied && (this->this$1->foundInsertTag$ || !$nc(a)->isDefined($HTMLEditorKit$ParserCallback::IMPLIED)))) {
		$HTMLDocument$HTMLReader$BlockAction::start(t, a);
	}
}

void HTMLDocument$HTMLReader$HeadAction::end($HTML$Tag* t) {
	$useLocalObjectStack();
	this->this$1->inHead = (this->this$1->inStyle = false);
	if (this->this$1->styles != nullptr) {
		bool isDefaultCSS = this->this$1->isStyleCSS;
		for (int32_t counter = 0, maxCounter = this->this$1->styles->size(); counter < maxCounter;) {
			$var($Object, value, $nc(this->this$1->styles)->elementAt(counter));
			$init($HTML$Tag);
			if ($equals(value, $HTML$Tag::LINK)) {
				handleLink($$cast($AttributeSet, this->this$1->styles->elementAt(++counter)));
				++counter;
			} else {
				$var($String, type, $cast($String, $nc(this->this$1->styles)->elementAt(++counter)));
				bool isCSS = (type == nullptr) ? isDefaultCSS : type->equals("text/css"_s);
				while (true) {
					bool var$0 = ++counter < maxCounter;
					if (!(var$0 && ($instanceOf($String, $(this->this$1->styles->elementAt(counter)))))) {
						break;
					}
					{
						if (isCSS) {
							this->this$1->addCSSRules($$cast($String, $nc(this->this$1->styles)->elementAt(counter)));
						}
					}
				}
			}
		}
	}
	$init($HTML$Tag);
	if ((this->this$1->insertTag == nullptr && !this->this$1->insertAfterImplied) || this->this$1->insertTag == $HTML$Tag::HEAD || (this->this$1->insertAfterImplied && this->this$1->foundInsertTag$)) {
		$HTMLDocument$HTMLReader$BlockAction::end(t);
	}
}

bool HTMLDocument$HTMLReader$HeadAction::isEmpty($HTML$Tag* t) {
	return false;
}

void HTMLDocument$HTMLReader$HeadAction::handleLink($AttributeSet* attr) {
	$useLocalObjectStack();
	$init($HTML$Attribute);
	$var($String, type, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::TYPE)));
	if (type == nullptr) {
		$assign(type, $nc(this->this$1->this$0)->getDefaultStyleSheetType());
	}
	if ($nc(type)->equals("text/css"_s)) {
		$var($String, rel, $cast($String, attr->getAttribute($HTML$Attribute::REL)));
		$var($String, title, $cast($String, attr->getAttribute($HTML$Attribute::TITLE)));
		$var($String, media, $cast($String, attr->getAttribute($HTML$Attribute::MEDIA)));
		if (media == nullptr) {
			$assign(media, "all"_s);
		} else {
			$assign(media, media->toLowerCase());
		}
		if (rel != nullptr) {
			$assign(rel, rel->toLowerCase());
			bool var$1 = $nc(media)->indexOf("all"_s) != -1;
			bool var$0 = var$1 || media->indexOf("screen"_s) != -1;
			if (var$0) {
				bool var$2 = rel->equals("stylesheet"_s);
				if (!var$2) {
					bool var$3 = rel->equals("alternate stylesheet"_s);
					var$2 = var$3 && $nc(title)->equals(this->this$1->defaultStyle);
				}
				var$0 = var$2;
			}
			if (var$0) {
				this->this$1->linkCSSStyleSheet($$cast($String, attr->getAttribute($HTML$Attribute::HREF)));
			}
		}
	}
}

HTMLDocument$HTMLReader$HeadAction::HTMLDocument$HTMLReader$HeadAction() {
}

$Class* HTMLDocument$HTMLReader$HeadAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$HeadAction, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(HTMLDocument$HTMLReader$HeadAction, init$, void, $HTMLDocument$HTMLReader*)},
		{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$HeadAction, end, void, $HTML$Tag*)},
		{"handleLink", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PRIVATE, $method(HTMLDocument$HTMLReader$HeadAction, handleLink, void, $AttributeSet*)},
		{"isEmpty", "(Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, 0, $virtualMethod(HTMLDocument$HTMLReader$HeadAction, isEmpty, bool, $HTML$Tag*)},
		{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$HeadAction, start, void, $HTML$Tag*, $MutableAttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$HeadAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "HeadAction", 0},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "BlockAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$HTMLReader$HeadAction",
		"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction",
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
	$loadClass(HTMLDocument$HTMLReader$HeadAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLDocument$HTMLReader$HeadAction);
	});
	return class$;
}

$Class* HTMLDocument$HTMLReader$HeadAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax