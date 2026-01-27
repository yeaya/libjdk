#include <javax/xml/validation/SchemaFactoryLoader.h>

#include <javax/xml/validation/SchemaFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SchemaFactory = ::javax::xml::validation::SchemaFactory;

namespace javax {
	namespace xml {
		namespace validation {

$MethodInfo _SchemaFactoryLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SchemaFactoryLoader, init$, void)},
	{"newFactory", "(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SchemaFactoryLoader, newFactory, $SchemaFactory*, $String*)},
	{}
};

$ClassInfo _SchemaFactoryLoader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.validation.SchemaFactoryLoader",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SchemaFactoryLoader_MethodInfo_
};

$Object* allocate$SchemaFactoryLoader($Class* clazz) {
	return $of($alloc(SchemaFactoryLoader));
}

void SchemaFactoryLoader::init$() {
}

SchemaFactoryLoader::SchemaFactoryLoader() {
}

$Class* SchemaFactoryLoader::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryLoader, name, initialize, &_SchemaFactoryLoader_ClassInfo_, allocate$SchemaFactoryLoader);
	return class$;
}

$Class* SchemaFactoryLoader::class$ = nullptr;

		} // validation
	} // xml
} // javax