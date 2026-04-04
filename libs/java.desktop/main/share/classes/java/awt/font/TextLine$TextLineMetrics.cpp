#include <java/awt/font/TextLine$TextLineMetrics.h>
#include <java/awt/font/TextLine.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

void TextLine$TextLineMetrics::init$(float ascent, float descent, float leading, float advance) {
	this->ascent = ascent;
	this->descent = descent;
	this->leading = leading;
	this->advance = advance;
}

TextLine$TextLineMetrics::TextLine$TextLineMetrics() {
}

$Class* TextLine$TextLineMetrics::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ascent", "F", nullptr, $PUBLIC | $FINAL, $field(TextLine$TextLineMetrics, ascent)},
		{"descent", "F", nullptr, $PUBLIC | $FINAL, $field(TextLine$TextLineMetrics, descent)},
		{"leading", "F", nullptr, $PUBLIC | $FINAL, $field(TextLine$TextLineMetrics, leading)},
		{"advance", "F", nullptr, $PUBLIC | $FINAL, $field(TextLine$TextLineMetrics, advance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(FFFF)V", nullptr, $PUBLIC, $method(TextLine$TextLineMetrics, init$, void, float, float, float, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.font.TextLine$TextLineMetrics", "java.awt.font.TextLine", "TextLineMetrics", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.font.TextLine$TextLineMetrics",
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
		"java.awt.font.TextLine"
	};
	$loadClass(TextLine$TextLineMetrics, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextLine$TextLineMetrics);
	});
	return class$;
}

$Class* TextLine$TextLineMetrics::class$ = nullptr;

		} // font
	} // awt
} // java