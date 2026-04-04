#include <javax/swing/text/html/CSS$BackgroundPosition.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS$LengthUnit.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;
using $CSS$LengthUnit = ::javax::swing::text::html::CSS$LengthUnit;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSS$BackgroundPosition::init$() {
	$CSS$CssValue::init$();
}

$Object* CSS$BackgroundPosition::parseCssValue($String* value) {
	$useLocalObjectStack();
	$var($StringArray, strings, $CSS::parseStrings(value));
	int32_t count = $nc(strings)->length;
	$var(CSS$BackgroundPosition, bp, $new(CSS$BackgroundPosition));
	bp->relative = 5;
	$set(bp, svalue, value);
	if (count > 0) {
		int16_t found = 0;
		int32_t index = 0;
		while (index < count) {
			$var($String, string, strings->get(index++));
			if ($nc(string)->equals("center"_s)) {
				found |= 4;
				continue;
			} else {
				if ((found & 1) == 0) {
					if (string->equals("top"_s)) {
						found |= 1;
					} else if (string->equals("bottom"_s)) {
						found |= 1;
						bp->verticalPosition = 1;
						continue;
					}
				}
				if ((found & 2) == 0) {
					if (string->equals("left"_s)) {
						found |= 2;
						bp->horizontalPosition = 0;
					} else if (string->equals("right"_s)) {
						found |= 2;
						bp->horizontalPosition = 1;
					}
				}
			}
		}
		if (found != 0) {
			if ((found & 1) == 1) {
				if ((found & 2) == 0) {
					bp->horizontalPosition = 0.5f;
				}
			} else if ((found & 2) == 2) {
				bp->verticalPosition = 0.5f;
			} else {
				bp->horizontalPosition = (bp->verticalPosition = 0.5f);
			}
		} else {
			$var($CSS$LengthUnit, lu, $new($CSS$LengthUnit, strings->get(0), (int16_t)0, 0.0f));
			if (lu->type == 0) {
				bp->horizontalPosition = lu->value;
				bp->relative = (int16_t)(1 ^ bp->relative);
			} else if (lu->type == 1) {
				bp->horizontalPosition = lu->value;
			} else if (lu->type == 3) {
				bp->horizontalPosition = lu->value;
				bp->relative = (int16_t)((1 ^ bp->relative) | 2);
			}
			if (count > 1) {
				$assign(lu, $new($CSS$LengthUnit, strings->get(1), (int16_t)0, 0.0f));
				if (lu->type == 0) {
					bp->verticalPosition = lu->value;
					bp->relative = (int16_t)(4 ^ bp->relative);
				} else if (lu->type == 1) {
					bp->verticalPosition = lu->value;
				} else if (lu->type == 3) {
					bp->verticalPosition = lu->value;
					bp->relative = (int16_t)((4 ^ bp->relative) | 8);
				}
			} else {
				bp->verticalPosition = 0.5f;
			}
		}
	}
	return bp;
}

bool CSS$BackgroundPosition::isHorizontalPositionRelativeToSize() {
	return ((this->relative & 1) == 1);
}

bool CSS$BackgroundPosition::isHorizontalPositionRelativeToFontSize() {
	return ((this->relative & 2) == 2);
}

float CSS$BackgroundPosition::getHorizontalPosition() {
	return this->horizontalPosition;
}

bool CSS$BackgroundPosition::isVerticalPositionRelativeToSize() {
	return ((this->relative & 4) == 4);
}

bool CSS$BackgroundPosition::isVerticalPositionRelativeToFontSize() {
	return ((this->relative & 8) == 8);
}

float CSS$BackgroundPosition::getVerticalPosition() {
	return this->verticalPosition;
}

CSS$BackgroundPosition::CSS$BackgroundPosition() {
}

$Class* CSS$BackgroundPosition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"horizontalPosition", "F", nullptr, 0, $field(CSS$BackgroundPosition, horizontalPosition)},
		{"verticalPosition", "F", nullptr, 0, $field(CSS$BackgroundPosition, verticalPosition)},
		{"relative", "S", nullptr, 0, $field(CSS$BackgroundPosition, relative)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSS$BackgroundPosition, init$, void)},
		{"getHorizontalPosition", "()F", nullptr, 0, $virtualMethod(CSS$BackgroundPosition, getHorizontalPosition, float)},
		{"getVerticalPosition", "()F", nullptr, 0, $virtualMethod(CSS$BackgroundPosition, getVerticalPosition, float)},
		{"isHorizontalPositionRelativeToFontSize", "()Z", nullptr, 0, $virtualMethod(CSS$BackgroundPosition, isHorizontalPositionRelativeToFontSize, bool)},
		{"isHorizontalPositionRelativeToSize", "()Z", nullptr, 0, $virtualMethod(CSS$BackgroundPosition, isHorizontalPositionRelativeToSize, bool)},
		{"isVerticalPositionRelativeToFontSize", "()Z", nullptr, 0, $virtualMethod(CSS$BackgroundPosition, isVerticalPositionRelativeToFontSize, bool)},
		{"isVerticalPositionRelativeToSize", "()Z", nullptr, 0, $virtualMethod(CSS$BackgroundPosition, isVerticalPositionRelativeToSize, bool)},
		{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$BackgroundPosition, parseCssValue, $Object*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$BackgroundPosition", "javax.swing.text.html.CSS", "BackgroundPosition", $STATIC},
		{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSS$BackgroundPosition",
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
	$loadClass(CSS$BackgroundPosition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$BackgroundPosition);
	});
	return class$;
}

$Class* CSS$BackgroundPosition::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax