#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$HTMLReader$TagAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
}

void HTMLDocument$HTMLReader$TagAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
}

void HTMLDocument$HTMLReader$TagAction::end($HTML$Tag* t) {
}

HTMLDocument$HTMLReader$TagAction::HTMLDocument$HTMLReader$TagAction() {
}

$Class* HTMLDocument$HTMLReader$TagAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$TagAction, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(HTMLDocument$HTMLReader$TagAction, init$, void, $HTMLDocument$HTMLReader*)},
		{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$TagAction, end, void, $HTML$Tag*)},
		{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(HTMLDocument$HTMLReader$TagAction, start, void, $HTML$Tag*, $MutableAttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
		{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
		"java.lang.Object",
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
	$loadClass(HTMLDocument$HTMLReader$TagAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLDocument$HTMLReader$TagAction);
	});
	return class$;
}

$Class* HTMLDocument$HTMLReader$TagAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax