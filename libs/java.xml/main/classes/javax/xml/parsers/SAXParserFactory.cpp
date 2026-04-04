#include <javax/xml/parsers/SAXParserFactory.h>
#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserFactoryImpl.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Package.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/xml/parsers/FactoryFinder.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/validation/Schema.h>
#include <jcpp.h>

#undef DEFAULT_IMPL

using $SAXParserFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::SAXParserFactoryImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FactoryFinder = ::javax::xml::parsers::FactoryFinder;
using $SAXParser = ::javax::xml::parsers::SAXParser;
using $Schema = ::javax::xml::validation::Schema;

namespace javax {
	namespace xml {
		namespace parsers {

$String* SAXParserFactory::DEFAULT_IMPL = nullptr;

void SAXParserFactory::init$() {
	this->validating = false;
	this->namespaceAware = false;
}

SAXParserFactory* SAXParserFactory::newDefaultNSInstance() {
	$init(SAXParserFactory);
	return makeNSAware($$new($SAXParserFactoryImpl));
}

SAXParserFactory* SAXParserFactory::newNSInstance() {
	$init(SAXParserFactory);
	return makeNSAware($$cast(SAXParserFactory, $FactoryFinder::find(SAXParserFactory::class$, SAXParserFactory::DEFAULT_IMPL)));
}

SAXParserFactory* SAXParserFactory::newNSInstance($String* factoryClassName, $ClassLoader* classLoader) {
	$init(SAXParserFactory);
	return makeNSAware($$cast(SAXParserFactory, $FactoryFinder::newInstance(SAXParserFactory::class$, factoryClassName, classLoader, false)));
}

SAXParserFactory* SAXParserFactory::newDefaultInstance() {
	$init(SAXParserFactory);
	return $new($SAXParserFactoryImpl);
}

SAXParserFactory* SAXParserFactory::newInstance() {
	$init(SAXParserFactory);
	return $cast(SAXParserFactory, $FactoryFinder::find(SAXParserFactory::class$, SAXParserFactory::DEFAULT_IMPL));
}

SAXParserFactory* SAXParserFactory::newInstance($String* factoryClassName, $ClassLoader* classLoader) {
	$init(SAXParserFactory);
	return $cast(SAXParserFactory, $FactoryFinder::newInstance(SAXParserFactory::class$, factoryClassName, classLoader, false));
}

SAXParserFactory* SAXParserFactory::makeNSAware(SAXParserFactory* spf) {
	$init(SAXParserFactory);
	$nc(spf)->setNamespaceAware(true);
	return spf;
}

void SAXParserFactory::setNamespaceAware(bool awareness) {
	this->namespaceAware = awareness;
}

void SAXParserFactory::setValidating(bool validating) {
	this->validating = validating;
}

bool SAXParserFactory::isNamespaceAware() {
	return this->namespaceAware;
}

bool SAXParserFactory::isValidating() {
	return this->validating;
}

$Schema* SAXParserFactory::getSchema() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("This parser does not support specification \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationTitle()));
	var$0->append("\" version \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationVersion()));
	var$0->append("\""_s);
	$throwNew($UnsupportedOperationException, $$str(var$0));
	$shouldNotReachHere();
}

void SAXParserFactory::setSchema($Schema* schema) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("This parser does not support specification \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationTitle()));
	var$0->append("\" version \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationVersion()));
	var$0->append("\""_s);
	$throwNew($UnsupportedOperationException, $$str(var$0));
}

void SAXParserFactory::setXIncludeAware(bool state) {
	if (state) {
		$throwNew($UnsupportedOperationException, $$str({" setXIncludeAware is not supported on this JAXP implementation or earlier: "_s, this->getClass()}));
	}
}

bool SAXParserFactory::isXIncludeAware() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("This parser does not support specification \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationTitle()));
	var$0->append("\" version \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationVersion()));
	var$0->append("\""_s);
	$throwNew($UnsupportedOperationException, $$str(var$0));
	$shouldNotReachHere();
}

SAXParserFactory::SAXParserFactory() {
}

void SAXParserFactory::clinit$($Class* clazz) {
	$assignStatic(SAXParserFactory::DEFAULT_IMPL, "com.sun.org.apache.xerces.internal.jaxp.SAXParserFactoryImpl"_s);
}

$Class* SAXParserFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserFactory, DEFAULT_IMPL)},
		{"validating", "Z", nullptr, $PRIVATE, $field(SAXParserFactory, validating)},
		{"namespaceAware", "Z", nullptr, $PRIVATE, $field(SAXParserFactory, namespaceAware)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SAXParserFactory, init$, void)},
		{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParserFactory, getFeature, bool, $String*), "javax.xml.parsers.ParserConfigurationException,org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
		{"getSchema", "()Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, $virtualMethod(SAXParserFactory, getSchema, $Schema*)},
		{"isNamespaceAware", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParserFactory, isNamespaceAware, bool)},
		{"isValidating", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParserFactory, isValidating, bool)},
		{"isXIncludeAware", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParserFactory, isXIncludeAware, bool)},
		{"makeNSAware", "(Ljavax/xml/parsers/SAXParserFactory;)Ljavax/xml/parsers/SAXParserFactory;", nullptr, $PRIVATE | $STATIC, $staticMethod(SAXParserFactory, makeNSAware, SAXParserFactory*, SAXParserFactory*)},
		{"newDefaultInstance", "()Ljavax/xml/parsers/SAXParserFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(SAXParserFactory, newDefaultInstance, SAXParserFactory*)},
		{"newDefaultNSInstance", "()Ljavax/xml/parsers/SAXParserFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(SAXParserFactory, newDefaultNSInstance, SAXParserFactory*)},
		{"newInstance", "()Ljavax/xml/parsers/SAXParserFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(SAXParserFactory, newInstance, SAXParserFactory*)},
		{"newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(SAXParserFactory, newInstance, SAXParserFactory*, $String*, $ClassLoader*)},
		{"newNSInstance", "()Ljavax/xml/parsers/SAXParserFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(SAXParserFactory, newNSInstance, SAXParserFactory*)},
		{"newNSInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/SAXParserFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(SAXParserFactory, newNSInstance, SAXParserFactory*, $String*, $ClassLoader*)},
		{"newSAXParser", "()Ljavax/xml/parsers/SAXParser;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParserFactory, newSAXParser, $SAXParser*), "javax.xml.parsers.ParserConfigurationException,org.xml.sax.SAXException"},
		{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParserFactory, setFeature, void, $String*, bool), "javax.xml.parsers.ParserConfigurationException,org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
		{"setNamespaceAware", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SAXParserFactory, setNamespaceAware, void, bool)},
		{"setSchema", "(Ljavax/xml/validation/Schema;)V", nullptr, $PUBLIC, $virtualMethod(SAXParserFactory, setSchema, void, $Schema*)},
		{"setValidating", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SAXParserFactory, setValidating, void, bool)},
		{"setXIncludeAware", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SAXParserFactory, setXIncludeAware, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.xml.parsers.SAXParserFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SAXParserFactory, name, initialize, &classInfo$$, SAXParserFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SAXParserFactory);
	});
	return class$;
}

$Class* SAXParserFactory::class$ = nullptr;

		} // parsers
	} // xml
} // javax