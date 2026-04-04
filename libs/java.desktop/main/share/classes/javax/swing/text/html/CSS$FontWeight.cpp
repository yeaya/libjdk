#include <javax/swing/text/html/CSS$FontWeight.h>
#include <java/lang/NumberFormatException.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSS$FontWeight::init$() {
	$CSS$CssValue::init$();
}

int32_t CSS$FontWeight::getValue() {
	return this->weight;
}

$Object* CSS$FontWeight::parseCssValue($String* value) {
	$var(CSS$FontWeight, fw, $new(CSS$FontWeight));
	$set(fw, svalue, value);
	if ($nc(value)->equals("bold"_s)) {
		fw->weight = 700;
	} else if (value->equals("normal"_s)) {
		fw->weight = 400;
	} else {
		try {
			fw->weight = $Integer::parseInt(value);
		} catch ($NumberFormatException& nfe) {
			$assign(fw, nullptr);
		}
	}
	return fw;
}

$Object* CSS$FontWeight::fromStyleConstants($StyleConstants* key, Object$* value) {
	if ($nc($of(value))->equals($Boolean::TRUE)) {
		return parseCssValue("bold"_s);
	}
	return parseCssValue("normal"_s);
}

$Object* CSS$FontWeight::toStyleConstants($StyleConstants* key, $View* v) {
	return $of((this->weight > 500) ? $Boolean::TRUE : $Boolean::FALSE);
}

bool CSS$FontWeight::isBold() {
	return (this->weight > 500);
}

CSS$FontWeight::CSS$FontWeight() {
}

$Class* CSS$FontWeight::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"weight", "I", nullptr, 0, $field(CSS$FontWeight, weight)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSS$FontWeight, init$, void)},
		{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$FontWeight, fromStyleConstants, $Object*, $StyleConstants*, Object$*)},
		{"getValue", "()I", nullptr, 0, $virtualMethod(CSS$FontWeight, getValue, int32_t)},
		{"isBold", "()Z", nullptr, 0, $virtualMethod(CSS$FontWeight, isBold, bool)},
		{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$FontWeight, parseCssValue, $Object*, $String*)},
		{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$FontWeight, toStyleConstants, $Object*, $StyleConstants*, $View*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$FontWeight", "javax.swing.text.html.CSS", "FontWeight", $STATIC},
		{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSS$FontWeight",
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
	$loadClass(CSS$FontWeight, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$FontWeight);
	});
	return class$;
}

$Class* CSS$FontWeight::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax