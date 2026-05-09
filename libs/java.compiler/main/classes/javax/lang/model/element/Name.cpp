#include <javax/lang/model/element/Name.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

bool Name::equals(Object$* obj) {
	return this->$CharSequence::equals(obj);
}

int32_t Name::hashCode() {
	return this->$CharSequence::hashCode();
}

$Class* Name::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"contentEquals", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, contentEquals, bool, $CharSequence*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.Name",
		nullptr,
		"java.lang.CharSequence",
		nullptr,
		methodInfos$$
	};
	$loadClass(Name, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Name);
	});
	return class$;
}

$Class* Name::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax