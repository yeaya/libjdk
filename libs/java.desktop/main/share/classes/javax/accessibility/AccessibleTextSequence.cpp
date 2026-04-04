#include <javax/accessibility/AccessibleTextSequence.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

void AccessibleTextSequence::init$(int32_t start, int32_t end, $String* txt) {
	this->startIndex = start;
	this->endIndex = end;
	$set(this, text, txt);
}

AccessibleTextSequence::AccessibleTextSequence() {
}

$Class* AccessibleTextSequence::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"startIndex", "I", nullptr, $PUBLIC, $field(AccessibleTextSequence, startIndex)},
		{"endIndex", "I", nullptr, $PUBLIC, $field(AccessibleTextSequence, endIndex)},
		{"text", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AccessibleTextSequence, text)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IILjava/lang/String;)V", nullptr, $PUBLIC, $method(AccessibleTextSequence, init$, void, int32_t, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.accessibility.AccessibleTextSequence",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccessibleTextSequence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleTextSequence);
	});
	return class$;
}

$Class* AccessibleTextSequence::class$ = nullptr;

	} // accessibility
} // javax