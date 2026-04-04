#include <javax/swing/text/html/CSS$ColorValue.h>
#include <java/awt/Color.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSS$ColorValue::init$() {
	$CSS$CssValue::init$();
}

$Color* CSS$ColorValue::getValue() {
	return this->c;
}

$Object* CSS$ColorValue::parseCssValue($String* value) {
	$useLocalObjectStack();
	$var($Color, c, $CSS::stringToColor(value));
	if (c != nullptr) {
		$var(CSS$ColorValue, cv, $new(CSS$ColorValue));
		$set(cv, svalue, value);
		$set(cv, c, c);
		return cv;
	}
	return nullptr;
}

$Object* CSS$ColorValue::parseHtmlValue($String* value) {
	return parseCssValue(value);
}

$Object* CSS$ColorValue::fromStyleConstants($StyleConstants* key, Object$* value) {
	$var(CSS$ColorValue, colorValue, $new(CSS$ColorValue));
	$set(colorValue, c, $cast($Color, value));
	$set(colorValue, svalue, $CSS::colorToHex(colorValue->c));
	return colorValue;
}

$Object* CSS$ColorValue::toStyleConstants($StyleConstants* key, $View* v) {
	return $of(this->c);
}

CSS$ColorValue::CSS$ColorValue() {
}

$Class* CSS$ColorValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c", "Ljava/awt/Color;", nullptr, 0, $field(CSS$ColorValue, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSS$ColorValue, init$, void)},
		{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$ColorValue, fromStyleConstants, $Object*, $StyleConstants*, Object$*)},
		{"getValue", "()Ljava/awt/Color;", nullptr, 0, $virtualMethod(CSS$ColorValue, getValue, $Color*)},
		{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$ColorValue, parseCssValue, $Object*, $String*)},
		{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$ColorValue, parseHtmlValue, $Object*, $String*)},
		{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$ColorValue, toStyleConstants, $Object*, $StyleConstants*, $View*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$ColorValue", "javax.swing.text.html.CSS", "ColorValue", $STATIC},
		{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSS$ColorValue",
		"javax.swing.text.html.CSS$CssValue",
		nullptr,
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
	$loadClass(CSS$ColorValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$ColorValue);
	});
	return class$;
}

$Class* CSS$ColorValue::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax