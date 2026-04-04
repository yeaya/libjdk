#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

void JRSUIConstants$Property::init$($JRSUIConstants$PropertyEncoding* encoding, int8_t ordinal) {
	$set(this, encoding, encoding);
	this->value = $sl((int64_t)ordinal, $nc(encoding)->shift);
	this->ordinal = ordinal;
}

int64_t JRSUIConstants$Property::apply(int64_t encodedState) {
	return (encodedState & ~$nc(this->encoding)->mask) | this->value;
}

$String* JRSUIConstants$Property::toString() {
	return $of(this)->getClass()->getSimpleName();
}

JRSUIConstants$Property::JRSUIConstants$Property() {
}

$Class* JRSUIConstants$Property::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"encoding", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $FINAL, $field(JRSUIConstants$Property, encoding)},
		{"value", "J", nullptr, $FINAL, $field(JRSUIConstants$Property, value)},
		{"ordinal", "B", nullptr, $FINAL, $field(JRSUIConstants$Property, ordinal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lapple/laf/JRSUIConstants$PropertyEncoding;B)V", nullptr, 0, $method(JRSUIConstants$Property, init$, void, $JRSUIConstants$PropertyEncoding*, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC, $virtualMethod(JRSUIConstants$Property, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JRSUIConstants$Property, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"apple.laf.JRSUIConstants$Property",
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
		"apple.laf.JRSUIConstants"
	};
	$loadClass(JRSUIConstants$Property, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$Property);
	});
	return class$;
}

$Class* JRSUIConstants$Property::class$ = nullptr;

	} // laf
} // apple