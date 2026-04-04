#include <com/sun/tools/javac/api/ClientCodeWrapper$Trusted.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$Class* ClientCodeWrapper$Trusted::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.ClientCodeWrapper$Trusted", "com.sun.tools.javac.api.ClientCodeWrapper", "Trusted", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; TYPE"},
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
		"com.sun.tools.javac.api.ClientCodeWrapper$Trusted",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.ClientCodeWrapper"
	};
	$loadClass(ClientCodeWrapper$Trusted, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientCodeWrapper$Trusted);
	});
	return class$;
}

$Class* ClientCodeWrapper$Trusted::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com