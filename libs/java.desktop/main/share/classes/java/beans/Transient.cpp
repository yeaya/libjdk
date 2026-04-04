#include <java/beans/Transient.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace beans {

$Class* Transient::load$($String* name, bool initialize) {

	$Attribute valuedefaultValue$$ = {
		'Z', "true"
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transient, value, bool), nullptr, &valuedefaultValue$$},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; METHOD"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"java.beans.Transient",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Transient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transient);
	});
	return class$;
}

$Class* Transient::class$ = nullptr;

	} // beans
} // java