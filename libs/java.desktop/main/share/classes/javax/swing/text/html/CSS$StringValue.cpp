#include <javax/swing/text/html/CSS$StringValue.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef ALIGN_JUSTIFIED
#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef FALSE
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSS$StringValue::init$() {
	$CSS$CssValue::init$();
}

$Object* CSS$StringValue::parseCssValue($String* value) {
	$var(CSS$StringValue, sv, $new(CSS$StringValue));
	$set(sv, svalue, value);
	return sv;
}

$Object* CSS$StringValue::fromStyleConstants($StyleConstants* key, Object$* value) {
	$init($StyleConstants);
	if ($equals(key, $StyleConstants::Italic)) {
		if ($nc($of(value))->equals($Boolean::TRUE)) {
			return parseCssValue("italic"_s);
		}
		return parseCssValue(""_s);
	} else if ($equals(key, $StyleConstants::Underline)) {
		if ($nc($of(value))->equals($Boolean::TRUE)) {
			return parseCssValue("underline"_s);
		}
		return parseCssValue(""_s);
	} else if ($equals(key, $StyleConstants::Alignment)) {
		int32_t align = $nc($cast($Integer, value))->intValue();
		$var($String, ta, nullptr);
		switch (align) {
		case $StyleConstants::ALIGN_LEFT:
			$assign(ta, "left"_s);
			break;
		case $StyleConstants::ALIGN_RIGHT:
			$assign(ta, "right"_s);
			break;
		case $StyleConstants::ALIGN_CENTER:
			$assign(ta, "center"_s);
			break;
		case $StyleConstants::ALIGN_JUSTIFIED:
			$assign(ta, "justify"_s);
			break;
		default:
			$assign(ta, "left"_s);
		}
		return parseCssValue(ta);
	} else if ($equals(key, $StyleConstants::StrikeThrough)) {
		if ($nc($of(value))->equals($Boolean::TRUE)) {
			return parseCssValue("line-through"_s);
		}
		return parseCssValue(""_s);
	} else if ($equals(key, $StyleConstants::Superscript)) {
		if ($nc($of(value))->equals($Boolean::TRUE)) {
			return parseCssValue("super"_s);
		}
		return parseCssValue(""_s);
	} else if ($equals(key, $StyleConstants::Subscript)) {
		if ($nc($of(value))->equals($Boolean::TRUE)) {
			return parseCssValue("sub"_s);
		}
		return parseCssValue(""_s);
	}
	return nullptr;
}

$Object* CSS$StringValue::toStyleConstants($StyleConstants* key, $View* v) {
	$init($StyleConstants);
	if ($equals(key, $StyleConstants::Italic)) {
		if ($nc(this->svalue)->indexOf("italic"_s) >= 0) {
			return $of($Boolean::TRUE);
		}
		return $of($Boolean::FALSE);
	} else if ($equals(key, $StyleConstants::Underline)) {
		if ($nc(this->svalue)->indexOf("underline"_s) >= 0) {
			return $of($Boolean::TRUE);
		}
		return $of($Boolean::FALSE);
	} else if ($equals(key, $StyleConstants::Alignment)) {
		if ($nc(this->svalue)->equals("right"_s)) {
			return $of($Integer::valueOf($StyleConstants::ALIGN_RIGHT));
		} else if (this->svalue->equals("center"_s)) {
			return $of($Integer::valueOf($StyleConstants::ALIGN_CENTER));
		} else if (this->svalue->equals("justify"_s)) {
			return $of($Integer::valueOf($StyleConstants::ALIGN_JUSTIFIED));
		}
		return $of($Integer::valueOf($StyleConstants::ALIGN_LEFT));
	} else if ($equals(key, $StyleConstants::StrikeThrough)) {
		if ($nc(this->svalue)->indexOf("line-through"_s) >= 0) {
			return $of($Boolean::TRUE);
		}
		return $of($Boolean::FALSE);
	} else if ($equals(key, $StyleConstants::Superscript)) {
		if ($nc(this->svalue)->indexOf("super"_s) >= 0) {
			return $of($Boolean::TRUE);
		}
		return $of($Boolean::FALSE);
	} else if ($equals(key, $StyleConstants::Subscript)) {
		if ($nc(this->svalue)->indexOf("sub"_s) >= 0) {
			return $of($Boolean::TRUE);
		}
		return $of($Boolean::FALSE);
	}
	return nullptr;
}

bool CSS$StringValue::isItalic() {
	return ($nc(this->svalue)->indexOf("italic"_s) != -1);
}

bool CSS$StringValue::isStrike() {
	return ($nc(this->svalue)->indexOf("line-through"_s) != -1);
}

bool CSS$StringValue::isUnderline() {
	return ($nc(this->svalue)->indexOf("underline"_s) != -1);
}

bool CSS$StringValue::isSub() {
	return ($nc(this->svalue)->indexOf("sub"_s) != -1);
}

bool CSS$StringValue::isSup() {
	return ($nc(this->svalue)->indexOf("sup"_s) != -1);
}

CSS$StringValue::CSS$StringValue() {
}

$Class* CSS$StringValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSS$StringValue, init$, void)},
		{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$StringValue, fromStyleConstants, $Object*, $StyleConstants*, Object$*)},
		{"isItalic", "()Z", nullptr, 0, $virtualMethod(CSS$StringValue, isItalic, bool)},
		{"isStrike", "()Z", nullptr, 0, $virtualMethod(CSS$StringValue, isStrike, bool)},
		{"isSub", "()Z", nullptr, 0, $virtualMethod(CSS$StringValue, isSub, bool)},
		{"isSup", "()Z", nullptr, 0, $virtualMethod(CSS$StringValue, isSup, bool)},
		{"isUnderline", "()Z", nullptr, 0, $virtualMethod(CSS$StringValue, isUnderline, bool)},
		{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$StringValue, parseCssValue, $Object*, $String*)},
		{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$StringValue, toStyleConstants, $Object*, $StyleConstants*, $View*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$StringValue", "javax.swing.text.html.CSS", "StringValue", $STATIC},
		{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSS$StringValue",
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
	$loadClass(CSS$StringValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$StringValue);
	});
	return class$;
}

$Class* CSS$StringValue::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax