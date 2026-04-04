#include <Test.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* Test::load$($String* name, bool initialize) {

	$Attribute onEDTdefaultValue$$ = {
		'Z', "true"
	};
	$MethodInfo methodInfos$$[] = {
		{"onEDT", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test, onEDT, bool), nullptr, &onEDTdefaultValue$$},
		{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test, value, int32_t)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; METHOD"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"Test",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Test, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test);
	});
	return class$;
}

$Class* Test::class$ = nullptr;