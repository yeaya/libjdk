#include <javax/accessibility/AccessibleAttributeSequence.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace accessibility {

void AccessibleAttributeSequence::init$(int32_t start, int32_t end, $AttributeSet* attr) {
	this->startIndex = start;
	this->endIndex = end;
	$set(this, attributes, attr);
}

AccessibleAttributeSequence::AccessibleAttributeSequence() {
}

$Class* AccessibleAttributeSequence::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"startIndex", "I", nullptr, $PUBLIC, $field(AccessibleAttributeSequence, startIndex)},
		{"endIndex", "I", nullptr, $PUBLIC, $field(AccessibleAttributeSequence, endIndex)},
		{"attributes", "Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $field(AccessibleAttributeSequence, attributes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IILjavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(AccessibleAttributeSequence, init$, void, int32_t, int32_t, $AttributeSet*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.accessibility.AccessibleAttributeSequence",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccessibleAttributeSequence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleAttributeSequence);
	});
	return class$;
}

$Class* AccessibleAttributeSequence::class$ = nullptr;

	} // accessibility
} // javax