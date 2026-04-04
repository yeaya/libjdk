#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSS$CssValue::init$() {
}

$Object* CSS$CssValue::parseCssValue($String* value) {
	return $of(value);
}

$Object* CSS$CssValue::parseHtmlValue($String* value) {
	return parseCssValue(value);
}

$Object* CSS$CssValue::fromStyleConstants($StyleConstants* key, Object$* value) {
	return nullptr;
}

$Object* CSS$CssValue::toStyleConstants($StyleConstants* key, $View* v) {
	return nullptr;
}

$String* CSS$CssValue::toString() {
	return this->svalue;
}

CSS$CssValue::CSS$CssValue() {
}

$Class* CSS$CssValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"svalue", "Ljava/lang/String;", nullptr, 0, $field(CSS$CssValue, svalue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSS$CssValue, init$, void)},
		{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$CssValue, fromStyleConstants, $Object*, $StyleConstants*, Object$*)},
		{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$CssValue, parseCssValue, $Object*, $String*)},
		{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$CssValue, parseHtmlValue, $Object*, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CSS$CssValue, toString, $String*)},
		{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$CssValue, toStyleConstants, $Object*, $StyleConstants*, $View*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSS$CssValue",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.CSS"
	};
	$loadClass(CSS$CssValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$CssValue);
	});
	return class$;
}

$Class* CSS$CssValue::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax