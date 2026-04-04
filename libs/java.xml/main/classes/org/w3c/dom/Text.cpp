#include <org/w3c/dom/Text.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$Class* Text::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getWholeText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Text, getWholeText, $String*)},
		{"isElementContentWhitespace", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Text, isElementContentWhitespace, bool)},
		{"replaceWholeText", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Text, replaceWholeText, Text*, $String*), "org.w3c.dom.DOMException"},
		{"splitText", "(I)Lorg/w3c/dom/Text;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Text, splitText, Text*, int32_t), "org.w3c.dom.DOMException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.Text",
		nullptr,
		"org.w3c.dom.CharacterData",
		nullptr,
		methodInfos$$
	};
	$loadClass(Text, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Text);
	});
	return class$;
}

$Class* Text::class$ = nullptr;

		} // dom
	} // w3c
} // org