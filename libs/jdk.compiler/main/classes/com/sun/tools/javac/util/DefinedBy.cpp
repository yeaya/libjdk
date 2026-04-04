#include <com/sun/tools/javac/util/DefinedBy.h>
#include <com/sun/tools/javac/util/DefinedBy$Api.h>
#include <jcpp.h>

using $DefinedBy$Api = ::com::sun::tools::javac::util::DefinedBy$Api;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Class* DefinedBy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()Lcom/sun/tools/javac/util/DefinedBy$Api;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DefinedBy, value, $DefinedBy$Api*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.DefinedBy$Api", "com.sun.tools.javac.util.DefinedBy", "Api", $PUBLIC | $STATIC | $FINAL | $ENUM},
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
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"com.sun.tools.javac.util.DefinedBy",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"com.sun.tools.javac.util.DefinedBy$Api"
	};
	$loadClass(DefinedBy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefinedBy);
	});
	return class$;
}

$Class* DefinedBy::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com