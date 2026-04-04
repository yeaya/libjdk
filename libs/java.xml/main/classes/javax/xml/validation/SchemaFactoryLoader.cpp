#include <javax/xml/validation/SchemaFactoryLoader.h>
#include <javax/xml/validation/SchemaFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SchemaFactory = ::javax::xml::validation::SchemaFactory;

namespace javax {
	namespace xml {
		namespace validation {

void SchemaFactoryLoader::init$() {
}

SchemaFactoryLoader::SchemaFactoryLoader() {
}

$Class* SchemaFactoryLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SchemaFactoryLoader, init$, void)},
		{"newFactory", "(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SchemaFactoryLoader, newFactory, $SchemaFactory*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.xml.validation.SchemaFactoryLoader",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SchemaFactoryLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SchemaFactoryLoader);
	});
	return class$;
}

$Class* SchemaFactoryLoader::class$ = nullptr;

		} // validation
	} // xml
} // javax