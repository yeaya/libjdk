#include <javax/annotation/processing/SupportedSourceVersion.h>
#include <javax/lang/model/SourceVersion.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SourceVersion = ::javax::lang::model::SourceVersion;

namespace javax {
	namespace annotation {
		namespace processing {

$Class* SupportedSourceVersion::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SupportedSourceVersion, value, $SourceVersion*)},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; TYPE"},
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
		{"Ljava/lang/annotation/Documented;", nullptr},
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"javax.annotation.processing.SupportedSourceVersion",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SupportedSourceVersion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedSourceVersion);
	});
	return class$;
}

$Class* SupportedSourceVersion::class$ = nullptr;

		} // processing
	} // annotation
} // javax