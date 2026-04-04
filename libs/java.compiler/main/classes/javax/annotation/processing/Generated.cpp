#include <javax/annotation/processing/Generated.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace javax {
	namespace annotation {
		namespace processing {

$Class* Generated::load$($String* name, bool initialize) {

	$Attribute commentsdefaultValue$$ = {
		's', ""
	};

	$Attribute datedefaultValue$$ = {
		's', ""
	};
	$MethodInfo methodInfos$$[] = {
		{"comments", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Generated, comments, $String*), nullptr, &commentsdefaultValue$$},
		{"date", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Generated, date, $String*), nullptr, &datedefaultValue$$},
		{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Generated, value, $StringArray*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; PACKAGE"},
		{'e', "Ljava/lang/annotation/ElementType; TYPE"},
		{'e', "Ljava/lang/annotation/ElementType; METHOD"},
		{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
		{'e', "Ljava/lang/annotation/ElementType; FIELD"},
		{'e', "Ljava/lang/annotation/ElementType; LOCAL_VARIABLE"},
		{'e', "Ljava/lang/annotation/ElementType; PARAMETER"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Documented;", nullptr},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"javax.annotation.processing.Generated",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Generated, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Generated);
	});
	return class$;
}

$Class* Generated::class$ = nullptr;

		} // processing
	} // annotation
} // javax