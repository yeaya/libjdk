#include <javax/xml/stream/XMLOutputFactory.h>
#include <com/sun/xml/internal/stream/XMLOutputFactoryImpl.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/ClassLoader.h>
#include <javax/xml/stream/FactoryFinder.h>
#include <javax/xml/stream/XMLEventWriter.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/stream/XMLStreamWriter.h>
#include <javax/xml/transform/Result.h>
#include <jcpp.h>

#undef DEFAULIMPL
#undef IS_REPAIRING_NAMESPACES

using $XMLOutputFactoryImpl = ::com::sun::xml::internal::stream::XMLOutputFactoryImpl;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $FactoryFinder = ::javax::xml::stream::FactoryFinder;
using $XMLEventWriter = ::javax::xml::stream::XMLEventWriter;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $XMLStreamWriter = ::javax::xml::stream::XMLStreamWriter;
using $Result = ::javax::xml::transform::Result;

namespace javax {
	namespace xml {
		namespace stream {

$String* XMLOutputFactory::IS_REPAIRING_NAMESPACES = nullptr;
$String* XMLOutputFactory::DEFAULIMPL = nullptr;

void XMLOutputFactory::init$() {
}

XMLOutputFactory* XMLOutputFactory::newDefaultFactory() {
	$init(XMLOutputFactory);
	return $new($XMLOutputFactoryImpl);
}

XMLOutputFactory* XMLOutputFactory::newInstance() {
	$init(XMLOutputFactory);
	return $cast(XMLOutputFactory, $FactoryFinder::find(XMLOutputFactory::class$, XMLOutputFactory::DEFAULIMPL));
}

XMLOutputFactory* XMLOutputFactory::newFactory() {
	$init(XMLOutputFactory);
	return $cast(XMLOutputFactory, $FactoryFinder::find(XMLOutputFactory::class$, XMLOutputFactory::DEFAULIMPL));
}

$XMLInputFactory* XMLOutputFactory::newInstance($String* factoryId, $ClassLoader* classLoader) {
	$init(XMLOutputFactory);
	$load($XMLInputFactory);
	return $cast($XMLInputFactory, $FactoryFinder::find($XMLInputFactory::class$, factoryId, classLoader, nullptr));
}

XMLOutputFactory* XMLOutputFactory::newFactory($String* factoryId, $ClassLoader* classLoader) {
	$init(XMLOutputFactory);
	return $cast(XMLOutputFactory, $FactoryFinder::find(XMLOutputFactory::class$, factoryId, classLoader, nullptr));
}

XMLOutputFactory::XMLOutputFactory() {
}

void XMLOutputFactory::clinit$($Class* clazz) {
	$assignStatic(XMLOutputFactory::IS_REPAIRING_NAMESPACES, "javax.xml.stream.isRepairingNamespaces"_s);
	$assignStatic(XMLOutputFactory::DEFAULIMPL, "com.sun.xml.internal.stream.XMLOutputFactoryImpl"_s);
}

$Class* XMLOutputFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"IS_REPAIRING_NAMESPACES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLOutputFactory, IS_REPAIRING_NAMESPACES)},
		{"DEFAULIMPL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLOutputFactory, DEFAULIMPL)},
		{}
	};
	$NamedAttribute newInstancemethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "1.7"},
		{}
	};
	$CompoundAttribute newInstancemethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", newInstancemethodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(XMLOutputFactory, init$, void)},
		{"createXMLEventWriter", "(Ljavax/xml/transform/Result;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, createXMLEventWriter, $XMLEventWriter*, $Result*), "javax.xml.stream.XMLStreamException"},
		{"createXMLEventWriter", "(Ljava/io/OutputStream;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, createXMLEventWriter, $XMLEventWriter*, $OutputStream*), "javax.xml.stream.XMLStreamException"},
		{"createXMLEventWriter", "(Ljava/io/OutputStream;Ljava/lang/String;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, createXMLEventWriter, $XMLEventWriter*, $OutputStream*, $String*), "javax.xml.stream.XMLStreamException"},
		{"createXMLEventWriter", "(Ljava/io/Writer;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, createXMLEventWriter, $XMLEventWriter*, $Writer*), "javax.xml.stream.XMLStreamException"},
		{"createXMLStreamWriter", "(Ljava/io/Writer;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, createXMLStreamWriter, $XMLStreamWriter*, $Writer*), "javax.xml.stream.XMLStreamException"},
		{"createXMLStreamWriter", "(Ljava/io/OutputStream;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, createXMLStreamWriter, $XMLStreamWriter*, $OutputStream*), "javax.xml.stream.XMLStreamException"},
		{"createXMLStreamWriter", "(Ljava/io/OutputStream;Ljava/lang/String;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, createXMLStreamWriter, $XMLStreamWriter*, $OutputStream*, $String*), "javax.xml.stream.XMLStreamException"},
		{"createXMLStreamWriter", "(Ljavax/xml/transform/Result;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, createXMLStreamWriter, $XMLStreamWriter*, $Result*), "javax.xml.stream.XMLStreamException"},
		{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, getProperty, $Object*, $String*), "java.lang.IllegalArgumentException"},
		{"isPropertySupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, isPropertySupported, bool, $String*)},
		{"newDefaultFactory", "()Ljavax/xml/stream/XMLOutputFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLOutputFactory, newDefaultFactory, XMLOutputFactory*)},
		{"newFactory", "()Ljavax/xml/stream/XMLOutputFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLOutputFactory, newFactory, XMLOutputFactory*), "javax.xml.stream.FactoryConfigurationError"},
		{"newFactory", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/stream/XMLOutputFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLOutputFactory, newFactory, XMLOutputFactory*, $String*, $ClassLoader*), "javax.xml.stream.FactoryConfigurationError"},
		{"newInstance", "()Ljavax/xml/stream/XMLOutputFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLOutputFactory, newInstance, XMLOutputFactory*), "javax.xml.stream.FactoryConfigurationError"},
		{"newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/stream/XMLInputFactory;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(XMLOutputFactory, newInstance, $XMLInputFactory*, $String*, $ClassLoader*), "javax.xml.stream.FactoryConfigurationError", nullptr, newInstancemethodAnnotations$$$1},
		{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLOutputFactory, setProperty, void, $String*, Object$*), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.xml.stream.XMLOutputFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XMLOutputFactory, name, initialize, &classInfo$$, XMLOutputFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XMLOutputFactory);
	});
	return class$;
}

$Class* XMLOutputFactory::class$ = nullptr;

		} // stream
	} // xml
} // javax