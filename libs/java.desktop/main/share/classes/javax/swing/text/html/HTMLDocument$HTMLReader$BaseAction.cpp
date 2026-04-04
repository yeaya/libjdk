#include <javax/swing/text/html/HTMLDocument$HTMLReader$BaseAction.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

#undef HREF
#undef TARGET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$HTMLReader$BaseAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$BaseAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	$useLocalObjectStack();
	$init($HTML$Attribute);
	$var($String, href, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::HREF)));
	if (href != nullptr) {
		try {
			$var($URL, newBase, $new($URL, $nc(this->this$1->this$0)->base, href));
			this->this$1->this$0->setBase(newBase);
			this->this$1->this$0->hasBaseTag$ = true;
		} catch ($MalformedURLException& ex) {
		}
	}
	$set($nc(this->this$1->this$0), baseTarget, $cast($String, attr->getAttribute($HTML$Attribute::TARGET)));
}

HTMLDocument$HTMLReader$BaseAction::HTMLDocument$HTMLReader$BaseAction() {
}

$Class* HTMLDocument$HTMLReader$BaseAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$BaseAction, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(HTMLDocument$HTMLReader$BaseAction, init$, void, $HTMLDocument$HTMLReader*)},
		{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$BaseAction, start, void, $HTML$Tag*, $MutableAttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$BaseAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "BaseAction", 0},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$HTMLReader$BaseAction",
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
	$loadClass(HTMLDocument$HTMLReader$BaseAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLDocument$HTMLReader$BaseAction);
	});
	return class$;
}

$Class* HTMLDocument$HTMLReader$BaseAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax