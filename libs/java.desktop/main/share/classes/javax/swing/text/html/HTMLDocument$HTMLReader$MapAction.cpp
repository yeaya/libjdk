#include <javax/swing/text/html/HTMLDocument$HTMLReader$MapAction.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/Map.h>
#include <jcpp.h>

#undef NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;
using $Map = ::javax::swing::text::html::Map;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$HTMLReader$MapAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$MapAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	$init($HTML$Attribute);
	$set(this->this$1, lastMap, $new($Map, $$cast($String, $nc(a)->getAttribute($HTML$Attribute::NAME))));
	$nc(this->this$1->this$0)->addMap(this->this$1->lastMap);
}

void HTMLDocument$HTMLReader$MapAction::end($HTML$Tag* t) {
}

HTMLDocument$HTMLReader$MapAction::HTMLDocument$HTMLReader$MapAction() {
}

$Class* HTMLDocument$HTMLReader$MapAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$MapAction, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(HTMLDocument$HTMLReader$MapAction, init$, void, $HTMLDocument$HTMLReader*)},
		{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$MapAction, end, void, $HTML$Tag*)},
		{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$MapAction, start, void, $HTML$Tag*, $MutableAttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$MapAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "MapAction", 0},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$HTMLReader$MapAction",
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
	$loadClass(HTMLDocument$HTMLReader$MapAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLDocument$HTMLReader$MapAction);
	});
	return class$;
}

$Class* HTMLDocument$HTMLReader$MapAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax