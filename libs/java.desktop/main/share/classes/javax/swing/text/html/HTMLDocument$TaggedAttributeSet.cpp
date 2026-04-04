#include <javax/swing/text/html/HTMLDocument$TaggedAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLDocument$TaggedAttributeSet::init$() {
	$SimpleAttributeSet::init$();
}

HTMLDocument$TaggedAttributeSet::HTMLDocument$TaggedAttributeSet() {
}

$Class* HTMLDocument$TaggedAttributeSet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HTMLDocument$TaggedAttributeSet, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLDocument$TaggedAttributeSet", "javax.swing.text.html.HTMLDocument", "TaggedAttributeSet", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLDocument$TaggedAttributeSet",
		"javax.swing.text.SimpleAttributeSet",
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
	$loadClass(HTMLDocument$TaggedAttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HTMLDocument$TaggedAttributeSet));
	});
	return class$;
}

$Class* HTMLDocument$TaggedAttributeSet::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax