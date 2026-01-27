#include <javax/xml/xpath/XPathFactory.h>

#include <com/sun/org/apache/xpath/internal/jaxp/XPathFactoryImpl.h>
#include <java/lang/ClassLoader.h>
#include <javax/xml/xpath/XPath.h>
#include <javax/xml/xpath/XPathException.h>
#include <javax/xml/xpath/XPathFactoryConfigurationException.h>
#include <javax/xml/xpath/XPathFactoryFinder.h>
#include <javax/xml/xpath/XPathFunctionResolver.h>
#include <javax/xml/xpath/XPathVariableResolver.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEFAULT_OBJECT_MODEL_URI
#undef DEFAULT_PROPERTY_NAME

using $XPathFactoryImpl = ::com::sun::org::apache::xpath::internal::jaxp::XPathFactoryImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $XPath = ::javax::xml::xpath::XPath;
using $XPathException = ::javax::xml::xpath::XPathException;
using $XPathFactoryConfigurationException = ::javax::xml::xpath::XPathFactoryConfigurationException;
using $XPathFactoryFinder = ::javax::xml::xpath::XPathFactoryFinder;
using $XPathFunctionResolver = ::javax::xml::xpath::XPathFunctionResolver;
using $XPathVariableResolver = ::javax::xml::xpath::XPathVariableResolver;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace javax {
	namespace xml {
		namespace xpath {

$FieldInfo _XPathFactory_FieldInfo_[] = {
	{"DEFAULT_PROPERTY_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathFactory, DEFAULT_PROPERTY_NAME)},
	{"DEFAULT_OBJECT_MODEL_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathFactory, DEFAULT_OBJECT_MODEL_URI)},
	{}
};

$MethodInfo _XPathFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(XPathFactory, init$, void)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFactory, getFeature, bool, $String*), "javax.xml.xpath.XPathFactoryConfigurationException"},
	{"isObjectModelSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFactory, isObjectModelSupported, bool, $String*)},
	{"newDefaultInstance", "()Ljavax/xml/xpath/XPathFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathFactory, newDefaultInstance, XPathFactory*)},
	{"newInstance", "()Ljavax/xml/xpath/XPathFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathFactory, newInstance, XPathFactory*)},
	{"newInstance", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathFactory, newInstance, XPathFactory*, $String*), "javax.xml.xpath.XPathFactoryConfigurationException"},
	{"newInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/xpath/XPathFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathFactory, newInstance, XPathFactory*, $String*, $String*, $ClassLoader*), "javax.xml.xpath.XPathFactoryConfigurationException"},
	{"newXPath", "()Ljavax/xml/xpath/XPath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFactory, newXPath, $XPath*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFactory, setFeature, void, $String*, bool), "javax.xml.xpath.XPathFactoryConfigurationException"},
	{"setXPathFunctionResolver", "(Ljavax/xml/xpath/XPathFunctionResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFactory, setXPathFunctionResolver, void, $XPathFunctionResolver*)},
	{"setXPathVariableResolver", "(Ljavax/xml/xpath/XPathVariableResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFactory, setXPathVariableResolver, void, $XPathVariableResolver*)},
	{}
};

$ClassInfo _XPathFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.xpath.XPathFactory",
	"java.lang.Object",
	nullptr,
	_XPathFactory_FieldInfo_,
	_XPathFactory_MethodInfo_
};

$Object* allocate$XPathFactory($Class* clazz) {
	return $of($alloc(XPathFactory));
}

$String* XPathFactory::DEFAULT_PROPERTY_NAME = nullptr;
$String* XPathFactory::DEFAULT_OBJECT_MODEL_URI = nullptr;

void XPathFactory::init$() {
}

XPathFactory* XPathFactory::newDefaultInstance() {
	$init(XPathFactory);
	return $new($XPathFactoryImpl);
}

XPathFactory* XPathFactory::newInstance() {
	$init(XPathFactory);
	$useLocalCurrentObjectStackCache();
	try {
		return newInstance(XPathFactory::DEFAULT_OBJECT_MODEL_URI);
	} catch ($XPathFactoryConfigurationException& e) {
		$throwNew($RuntimeException, $$str({"XPathFactory#newInstance() failed to create an XPathFactory for the default object model: "_s, XPathFactory::DEFAULT_OBJECT_MODEL_URI, " with the XPathFactoryConfigurationException: "_s, $(e->getMessage())}), e);
	}
	$shouldNotReachHere();
}

XPathFactory* XPathFactory::newInstance($String* uri) {
	$init(XPathFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (uri == nullptr) {
		$throwNew($NullPointerException, "XPathFactory#newInstance(String uri) cannot be called with uri == null"_s);
	}
	if ($nc(uri)->length() == 0) {
		$throwNew($IllegalArgumentException, "XPathFactory#newInstance(String uri) cannot be called with uri == \"\""_s);
	}
	$var($ClassLoader, classLoader, $SecuritySupport::getContextClassLoader());
	if (classLoader == nullptr) {
		$assign(classLoader, XPathFactory::class$->getClassLoader());
	}
	$var(XPathFactory, xpathFactory, $$new($XPathFactoryFinder, classLoader)->newFactory(uri));
	if (xpathFactory == nullptr) {
		$throwNew($XPathFactoryConfigurationException, $$str({"No XPathFactory implementation found for the object model: "_s, uri}));
	}
	return xpathFactory;
}

XPathFactory* XPathFactory::newInstance($String* uri, $String* factoryClassName, $ClassLoader* classLoader) {
	$init(XPathFactory);
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, cl, classLoader);
	if (uri == nullptr) {
		$throwNew($NullPointerException, "XPathFactory#newInstance(String uri) cannot be called with uri == null"_s);
	}
	if ($nc(uri)->length() == 0) {
		$throwNew($IllegalArgumentException, "XPathFactory#newInstance(String uri) cannot be called with uri == \"\""_s);
	}
	if (cl == nullptr) {
		$assign(cl, $SecuritySupport::getContextClassLoader());
	}
	$var(XPathFactory, f, $$new($XPathFactoryFinder, cl)->createInstance(factoryClassName));
	if (f == nullptr) {
		$throwNew($XPathFactoryConfigurationException, $$str({"No XPathFactory implementation found for the object model: "_s, uri}));
	}
	if ($nc(f)->isObjectModelSupported(uri)) {
		return f;
	} else {
		$throwNew($XPathFactoryConfigurationException, $$str({"Factory "_s, factoryClassName, " doesn\'t support given "_s, uri, " object model"_s}));
	}
}

XPathFactory::XPathFactory() {
}

void clinit$XPathFactory($Class* class$) {
	$assignStatic(XPathFactory::DEFAULT_PROPERTY_NAME, "javax.xml.xpath.XPathFactory"_s);
	$assignStatic(XPathFactory::DEFAULT_OBJECT_MODEL_URI, "http://java.sun.com/jaxp/xpath/dom"_s);
}

$Class* XPathFactory::load$($String* name, bool initialize) {
	$loadClass(XPathFactory, name, initialize, &_XPathFactory_ClassInfo_, clinit$XPathFactory, allocate$XPathFactory);
	return class$;
}

$Class* XPathFactory::class$ = nullptr;

		} // xpath
	} // xml
} // javax