#include <sun/awt/CharsetString.h>
#include <sun/awt/FontDescriptor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontDescriptor = ::sun::awt::FontDescriptor;

namespace sun {
	namespace awt {

void CharsetString::init$($chars* charsetChars, int32_t offset, int32_t length, $FontDescriptor* fontDescriptor) {
	$set(this, charsetChars, charsetChars);
	this->offset = offset;
	this->length = length;
	$set(this, fontDescriptor, fontDescriptor);
}

CharsetString::CharsetString() {
}

$Class* CharsetString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"charsetChars", "[C", nullptr, $PUBLIC, $field(CharsetString, charsetChars)},
		{"offset", "I", nullptr, $PUBLIC, $field(CharsetString, offset)},
		{"length", "I", nullptr, $PUBLIC, $field(CharsetString, length)},
		{"fontDescriptor", "Lsun/awt/FontDescriptor;", nullptr, $PUBLIC, $field(CharsetString, fontDescriptor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([CIILsun/awt/FontDescriptor;)V", nullptr, $PUBLIC, $method(CharsetString, init$, void, $chars*, int32_t, int32_t, $FontDescriptor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.CharsetString",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CharsetString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharsetString);
	});
	return class$;
}

$Class* CharsetString::class$ = nullptr;

	} // awt
} // sun