#include <javax/swing/text/html/CSS$ShorthandBorderParser.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

#undef ATTRIBUTES
#undef BORDER
#undef BORDER_BOTTOM
#undef BORDER_LEFT
#undef BORDER_RIGHT
#undef BORDER_TOP
#undef DEFAULTS
#undef PARSERS

using $CSS$AttributeArray = $Array<::javax::swing::text::html::CSS$Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSSBorder = ::javax::swing::text::html::CSSBorder;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$CSS$AttributeArray* CSS$ShorthandBorderParser::keys = nullptr;

void CSS$ShorthandBorderParser::init$() {
}

void CSS$ShorthandBorderParser::parseShorthandBorder($MutableAttributeSet* attributes, $CSS$Attribute* key, $String* value) {
	$init(CSS$ShorthandBorderParser);
	$useLocalObjectStack();
	$init($CSSBorder);
	$var($ObjectArray, parts, $new($ObjectArray, $nc($CSSBorder::PARSERS)->length));
	$var($StringArray, strings, $CSS::parseStrings(value));
	{
		$var($StringArray, arr$, strings);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				bool valid = false;
				for (int32_t i = 0; i < parts->length; ++i) {
					$var($Object, v, $nc($CSSBorder::PARSERS->get(i))->parseCssValue(s));
					if (v != nullptr) {
						if (parts->get(i) == nullptr) {
							parts->set(i, v);
							valid = true;
						}
						break;
					}
				}
				if (!valid) {
					return;
				}
			}
		}
	}
	for (int32_t i = 0; i < parts->length; ++i) {
		if (parts->get(i) == nullptr) {
			parts->set(i, $nc($CSSBorder::DEFAULTS)->get(i));
		}
	}
	for (int32_t i = 0; i < $nc(CSS$ShorthandBorderParser::keys)->length; ++i) {
		if ((key == $CSS$Attribute::BORDER) || (key == CSS$ShorthandBorderParser::keys->get(i))) {
			for (int32_t k = 0; k < parts->length; ++k) {
				$nc(attributes)->addAttribute($nc($nc($CSSBorder::ATTRIBUTES)->get(k))->get(i), parts->get(k));
			}
		}
	}
}

void CSS$ShorthandBorderParser::clinit$($Class* clazz) {
	$init($CSS$Attribute);
	$assignStatic(CSS$ShorthandBorderParser::keys, $new($CSS$AttributeArray, {
		$CSS$Attribute::BORDER_TOP,
		$CSS$Attribute::BORDER_RIGHT,
		$CSS$Attribute::BORDER_BOTTOM,
		$CSS$Attribute::BORDER_LEFT
	}));
}

CSS$ShorthandBorderParser::CSS$ShorthandBorderParser() {
}

$Class* CSS$ShorthandBorderParser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"keys", "[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $STATIC, $staticField(CSS$ShorthandBorderParser, keys)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSS$ShorthandBorderParser, init$, void)},
		{"parseShorthandBorder", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/html/CSS$Attribute;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(CSS$ShorthandBorderParser, parseShorthandBorder, void, $MutableAttributeSet*, $CSS$Attribute*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$ShorthandBorderParser", "javax.swing.text.html.CSS", "ShorthandBorderParser", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSS$ShorthandBorderParser",
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
		"javax.swing.text.html.CSS"
	};
	$loadClass(CSS$ShorthandBorderParser, name, initialize, &classInfo$$, CSS$ShorthandBorderParser::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$ShorthandBorderParser);
	});
	return class$;
}

$Class* CSS$ShorthandBorderParser::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax