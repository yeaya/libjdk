#include <javax/swing/text/html/CSS$CssValueMapper.h>
#include <java/util/Hashtable.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSS$CssValueMapper::init$() {
	$CSS$CssValue::init$();
}

$Object* CSS$CssValueMapper::parseCssValue($String* value) {
	$useLocalObjectStack();
	$init($CSS);
	$var($Object, retValue, $nc($CSS::cssValueToInternalValueMap)->get(value));
	if (retValue == nullptr) {
		$assign(retValue, $CSS::cssValueToInternalValueMap->get($($nc(value)->toLowerCase())));
	}
	return retValue;
}

$Object* CSS$CssValueMapper::parseHtmlValue($String* value) {
	$useLocalObjectStack();
	$init($CSS);
	$var($Object, retValue, $nc($CSS::htmlValueToCssValueMap)->get(value));
	if (retValue == nullptr) {
		$assign(retValue, $CSS::htmlValueToCssValueMap->get($($nc(value)->toLowerCase())));
	}
	return retValue;
}

CSS$CssValueMapper::CSS$CssValueMapper() {
}

$Class* CSS$CssValueMapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSS$CssValueMapper, init$, void)},
		{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$CssValueMapper, parseCssValue, $Object*, $String*)},
		{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$CssValueMapper, parseHtmlValue, $Object*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$CssValueMapper", "javax.swing.text.html.CSS", "CssValueMapper", $STATIC},
		{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSS$CssValueMapper",
		"javax.swing.text.html.CSS$CssValue",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.CSS"
	};
	$loadClass(CSS$CssValueMapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$CssValueMapper);
	});
	return class$;
}

$Class* CSS$CssValueMapper::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax