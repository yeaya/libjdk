#include <org/xml/sax/helpers/ParserFactory.h>

#include <java/lang/ClassLoader.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/xml/sax/Parser.h>
#include <org/xml/sax/helpers/NewInstance.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $Parser = ::org::xml::sax::Parser;
using $NewInstance = ::org::xml::sax::helpers::NewInstance;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$NamedAttribute ParserFactory_Attribute_var$0[] = {
	{"since", 's', "1.5"},
	{}
};

$CompoundAttribute _ParserFactory_Annotations_[] = {
	{"Ljava/lang/Deprecated;", ParserFactory_Attribute_var$0},
	{}
};

$MethodInfo _ParserFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ParserFactory, init$, void)},
	{"makeParser", "()Lorg/xml/sax/Parser;", nullptr, $PUBLIC | $STATIC, $staticMethod(ParserFactory, makeParser, $Parser*), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.NullPointerException,java.lang.ClassCastException"},
	{"makeParser", "(Ljava/lang/String;)Lorg/xml/sax/Parser;", nullptr, $PUBLIC | $STATIC, $staticMethod(ParserFactory, makeParser, $Parser*, $String*), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.ClassCastException"},
	{}
};

$ClassInfo _ParserFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.helpers.ParserFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParserFactory_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ParserFactory_Annotations_
};

$Object* allocate$ParserFactory($Class* clazz) {
	return $of($alloc(ParserFactory));
}

void ParserFactory::init$() {
}

$Parser* ParserFactory::makeParser() {
	$var($String, className, $SecuritySupport::getSystemProperty("org.xml.sax.parser"_s));
	if (className == nullptr) {
		$throwNew($NullPointerException, "No value for sax.parser property"_s);
	} else {
		return makeParser(className);
	}
}

$Parser* ParserFactory::makeParser($String* className) {
	$load($Parser);
	return $cast($Parser, $NewInstance::newInstance($Parser::class$, $($SecuritySupport::getClassLoader()), className));
}

ParserFactory::ParserFactory() {
}

$Class* ParserFactory::load$($String* name, bool initialize) {
	$loadClass(ParserFactory, name, initialize, &_ParserFactory_ClassInfo_, allocate$ParserFactory);
	return class$;
}

$Class* ParserFactory::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org