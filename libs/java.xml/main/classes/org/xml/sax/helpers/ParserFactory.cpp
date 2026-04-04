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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ParserFactory, init$, void)},
		{"makeParser", "()Lorg/xml/sax/Parser;", nullptr, $PUBLIC | $STATIC, $staticMethod(ParserFactory, makeParser, $Parser*), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.NullPointerException,java.lang.ClassCastException"},
		{"makeParser", "(Ljava/lang/String;)Lorg/xml/sax/Parser;", nullptr, $PUBLIC | $STATIC, $staticMethod(ParserFactory, makeParser, $Parser*, $String*), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.ClassCastException"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "1.5"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.xml.sax.helpers.ParserFactory",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ParserFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParserFactory);
	});
	return class$;
}

$Class* ParserFactory::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org