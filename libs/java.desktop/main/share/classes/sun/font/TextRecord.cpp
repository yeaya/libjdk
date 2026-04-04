#include <sun/font/TextRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void TextRecord::init$() {
}

void TextRecord::init($chars* text, int32_t start, int32_t limit, int32_t min, int32_t max) {
	$set(this, text, text);
	this->start = start;
	this->limit = limit;
	this->min = min;
	this->max = max;
}

TextRecord::TextRecord() {
}

$Class* TextRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"text", "[C", nullptr, $PUBLIC, $field(TextRecord, text)},
		{"start", "I", nullptr, $PUBLIC, $field(TextRecord, start)},
		{"limit", "I", nullptr, $PUBLIC, $field(TextRecord, limit)},
		{"min", "I", nullptr, $PUBLIC, $field(TextRecord, min)},
		{"max", "I", nullptr, $PUBLIC, $field(TextRecord, max)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TextRecord, init$, void)},
		{"init", "([CIIII)V", nullptr, $PUBLIC, $method(TextRecord, init, void, $chars*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.font.TextRecord",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TextRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextRecord);
	});
	return class$;
}

$Class* TextRecord::class$ = nullptr;

	} // font
} // sun