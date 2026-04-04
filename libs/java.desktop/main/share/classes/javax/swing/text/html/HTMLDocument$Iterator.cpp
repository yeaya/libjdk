#include <javax/swing/text/html/HTMLDocument$Iterator.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$Iterator::init$() {
}

HTMLDocument$Iterator::HTMLDocument$Iterator() {
}

$Class* HTMLDocument$Iterator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(HTMLDocument$Iterator, init$, void)},
		{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HTMLDocument$Iterator, getAttributes, $AttributeSet*)},
		{"getEndOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HTMLDocument$Iterator, getEndOffset, int32_t)},
		{"getStartOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HTMLDocument$Iterator, getStartOffset, int32_t)},
		{"getTag", "()Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HTMLDocument$Iterator, getTag, $HTML$Tag*)},
		{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HTMLDocument$Iterator, isValid, bool)},
		{"next", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HTMLDocument$Iterator, next, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$Iterator", "javax.swing.text.html.HTMLDocument", "Iterator", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.text.html.HTMLDocument$Iterator",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.HTMLDocument"
	};
	$loadClass(HTMLDocument$Iterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLDocument$Iterator);
	});
	return class$;
}

$Class* HTMLDocument$Iterator::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax