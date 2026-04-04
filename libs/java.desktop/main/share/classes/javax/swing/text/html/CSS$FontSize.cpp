#include <javax/swing/text/html/CSS$FontSize.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/NumberFormatException.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS$LengthUnit.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;
using $CSS$LengthUnit = ::javax::swing::text::html::CSS$LengthUnit;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSS$FontSize::init$($CSS* this$0) {
	$set(this, this$0, this$0);
	$CSS$CssValue::init$();
}

int32_t CSS$FontSize::getValue($AttributeSet* a, $StyleSheet* ss$renamed) {
	$useLocalObjectStack();
	$var($StyleSheet, ss, ss$renamed);
	$assign(ss, this->this$0->getStyleSheet(ss));
	if (this->index) {
		return $Math::round(this->this$0->getPointSize($cast(int32_t, this->value), ss));
	} else if (this->lu == nullptr) {
		return $Math::round(this->value);
	} else {
		if (this->lu->type == 0) {
			bool isW3CLengthUnits = (ss == nullptr) ? false : ss->isW3CLengthUnits();
			return $Math::round($nc(this->lu)->getValue(isW3CLengthUnits));
		}
		if (a != nullptr) {
			$var($AttributeSet, resolveParent, a->getResolveParent());
			if (resolveParent != nullptr) {
				int32_t pValue = $StyleConstants::getFontSize(resolveParent);
				float retValue = 0.0;
				if ($nc(this->lu)->type == 1 || this->lu->type == 3) {
					retValue = this->lu->value * (float)pValue;
				} else {
					retValue = this->lu->value + (float)pValue;
				}
				return $Math::round(retValue);
			}
		}
		return 12;
	}
}

$Object* CSS$FontSize::parseCssValue($String* value) {
	$var(CSS$FontSize, fs, $new(CSS$FontSize, this->this$0));
	$set(fs, svalue, value);
	try {
		if ($nc(value)->equals("xx-small"_s)) {
			fs->value = 1;
			fs->index = true;
		} else if (value->equals("x-small"_s)) {
			fs->value = 2;
			fs->index = true;
		} else if (value->equals("small"_s)) {
			fs->value = 3;
			fs->index = true;
		} else if (value->equals("medium"_s)) {
			fs->value = 4;
			fs->index = true;
		} else if (value->equals("large"_s)) {
			fs->value = 5;
			fs->index = true;
		} else if (value->equals("x-large"_s)) {
			fs->value = 6;
			fs->index = true;
		} else if (value->equals("xx-large"_s)) {
			fs->value = 7;
			fs->index = true;
		} else {
			$set(fs, lu, $new($CSS$LengthUnit, value, (int16_t)1, 1.0f));
		}
	} catch ($NumberFormatException& nfe) {
		$assign(fs, nullptr);
	}
	return fs;
}

$Object* CSS$FontSize::parseHtmlValue($String* value) {
	$useLocalObjectStack();
	if ((value == nullptr) || (value->length() == 0)) {
		return nullptr;
	}
	$var(CSS$FontSize, fs, $new(CSS$FontSize, this->this$0));
	$set(fs, svalue, value);
	try {
		int32_t baseFontSize = this->this$0->getBaseFontSize();
		if ($nc(value)->charAt(0) == u'+') {
			int32_t relSize = $($Integer::valueOf($(value->substring(1))))->intValue();
			fs->value = (float)(baseFontSize + relSize);
			fs->index = true;
		} else if (value->charAt(0) == u'-') {
			int32_t relSize = -$($Integer::valueOf($(value->substring(1))))->intValue();
			fs->value = (float)(baseFontSize + relSize);
			fs->index = true;
		} else {
			fs->value = (float)$Integer::parseInt(value);
			if (fs->value > 7) {
				fs->value = 7;
			} else if (fs->value < 0) {
				fs->value = 0;
			}
			fs->index = true;
		}
	} catch ($NumberFormatException& nfe) {
		$assign(fs, nullptr);
	}
	return fs;
}

$Object* CSS$FontSize::fromStyleConstants($StyleConstants* key, Object$* value) {
	$useLocalObjectStack();
	if ($instanceOf($Number, value)) {
		$var(CSS$FontSize, fs, $new(CSS$FontSize, this->this$0));
		$init($StyleSheet);
		fs->value = (float)$CSS::getIndexOfSize($cast($Number, value)->floatValue(), $StyleSheet::sizeMapDefault);
		$set(fs, svalue, $Integer::toString($cast(int32_t, fs->value)));
		fs->index = true;
		return fs;
	}
	return parseCssValue($($nc($of(value))->toString()));
}

$Object* CSS$FontSize::toStyleConstants($StyleConstants* key, $View* v) {
	if (v != nullptr) {
		return $of($Integer::valueOf(getValue($(v->getAttributes()), nullptr)));
	}
	return $of($Integer::valueOf(getValue(nullptr, nullptr)));
}

CSS$FontSize::CSS$FontSize() {
}

$Class* CSS$FontSize::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/CSS;", nullptr, $FINAL | $SYNTHETIC, $field(CSS$FontSize, this$0)},
		{"value", "F", nullptr, 0, $field(CSS$FontSize, value)},
		{"index", "Z", nullptr, 0, $field(CSS$FontSize, index)},
		{"lu", "Ljavax/swing/text/html/CSS$LengthUnit;", nullptr, 0, $field(CSS$FontSize, lu)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/CSS;)V", nullptr, 0, $method(CSS$FontSize, init$, void, $CSS*)},
		{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$FontSize, fromStyleConstants, $Object*, $StyleConstants*, Object$*)},
		{"getValue", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/StyleSheet;)I", nullptr, 0, $virtualMethod(CSS$FontSize, getValue, int32_t, $AttributeSet*, $StyleSheet*)},
		{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$FontSize, parseCssValue, $Object*, $String*)},
		{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$FontSize, parseHtmlValue, $Object*, $String*)},
		{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$FontSize, toStyleConstants, $Object*, $StyleConstants*, $View*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$FontSize", "javax.swing.text.html.CSS", "FontSize", 0},
		{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSS$FontSize",
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
	$loadClass(CSS$FontSize, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$FontSize);
	});
	return class$;
}

$Class* CSS$FontSize::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax