#include <javax/xml/stream/XMLInputFactory.h>

#include <com/sun/xml/internal/stream/XMLInputFactoryImpl.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/ClassLoader.h>
#include <javax/xml/stream/EventFilter.h>
#include <javax/xml/stream/FactoryFinder.h>
#include <javax/xml/stream/StreamFilter.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLReporter.h>
#include <javax/xml/stream/XMLResolver.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/util/XMLEventAllocator.h>
#include <javax/xml/transform/Source.h>
#include <jcpp.h>

#undef ALLOCATOR
#undef DEFAULIMPL
#undef IS_COALESCING
#undef IS_NAMESPACE_AWARE
#undef IS_REPLACING_ENTITY_REFERENCES
#undef IS_SUPPORTING_EXTERNAL_ENTITIES
#undef IS_VALIDATING
#undef REPORTER
#undef RESOLVER
#undef SUPPORT_DTD

using $XMLInputFactoryImpl = ::com::sun::xml::internal::stream::XMLInputFactoryImpl;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EventFilter = ::javax::xml::stream::EventFilter;
using $FactoryFinder = ::javax::xml::stream::FactoryFinder;
using $StreamFilter = ::javax::xml::stream::StreamFilter;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLReporter = ::javax::xml::stream::XMLReporter;
using $XMLResolver = ::javax::xml::stream::XMLResolver;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $XMLEventAllocator = ::javax::xml::stream::util::XMLEventAllocator;
using $Source = ::javax::xml::transform::Source;

namespace javax {
	namespace xml {
		namespace stream {

$NamedAttribute XMLInputFactory_Attribute_var$0[] = {
	{"since", 's', "1.7"},
	{}
};

$CompoundAttribute _XMLInputFactory_MethodAnnotations_newInstance25[] = {
	{"Ljava/lang/Deprecated;", XMLInputFactory_Attribute_var$0},
	{}
};

$FieldInfo _XMLInputFactory_FieldInfo_[] = {
	{"IS_NAMESPACE_AWARE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLInputFactory, IS_NAMESPACE_AWARE)},
	{"IS_VALIDATING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLInputFactory, IS_VALIDATING)},
	{"IS_COALESCING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLInputFactory, IS_COALESCING)},
	{"IS_REPLACING_ENTITY_REFERENCES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLInputFactory, IS_REPLACING_ENTITY_REFERENCES)},
	{"IS_SUPPORTING_EXTERNAL_ENTITIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLInputFactory, IS_SUPPORTING_EXTERNAL_ENTITIES)},
	{"SUPPORT_DTD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLInputFactory, SUPPORT_DTD)},
	{"REPORTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLInputFactory, REPORTER)},
	{"RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLInputFactory, RESOLVER)},
	{"ALLOCATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLInputFactory, ALLOCATOR)},
	{"DEFAULIMPL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLInputFactory, DEFAULIMPL)},
	{}
};

$MethodInfo _XMLInputFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(XMLInputFactory, init$, void)},
	{"createFilteredReader", "(Ljavax/xml/stream/XMLStreamReader;Ljavax/xml/stream/StreamFilter;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createFilteredReader, $XMLStreamReader*, $XMLStreamReader*, $StreamFilter*), "javax.xml.stream.XMLStreamException"},
	{"createFilteredReader", "(Ljavax/xml/stream/XMLEventReader;Ljavax/xml/stream/EventFilter;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createFilteredReader, $XMLEventReader*, $XMLEventReader*, $EventFilter*), "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljava/io/Reader;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLEventReader, $XMLEventReader*, $Reader*), "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljava/lang/String;Ljava/io/Reader;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLEventReader, $XMLEventReader*, $String*, $Reader*), "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljavax/xml/stream/XMLStreamReader;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLEventReader, $XMLEventReader*, $XMLStreamReader*), "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljavax/xml/transform/Source;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLEventReader, $XMLEventReader*, $Source*), "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljava/io/InputStream;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLEventReader, $XMLEventReader*, $InputStream*), "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljava/io/InputStream;Ljava/lang/String;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLEventReader, $XMLEventReader*, $InputStream*, $String*), "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljava/lang/String;Ljava/io/InputStream;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLEventReader, $XMLEventReader*, $String*, $InputStream*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljava/io/Reader;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLStreamReader, $XMLStreamReader*, $Reader*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljavax/xml/transform/Source;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLStreamReader, $XMLStreamReader*, $Source*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljava/io/InputStream;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLStreamReader, $XMLStreamReader*, $InputStream*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljava/io/InputStream;Ljava/lang/String;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLStreamReader, $XMLStreamReader*, $InputStream*, $String*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljava/lang/String;Ljava/io/InputStream;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLStreamReader, $XMLStreamReader*, $String*, $InputStream*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljava/lang/String;Ljava/io/Reader;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, createXMLStreamReader, $XMLStreamReader*, $String*, $Reader*), "javax.xml.stream.XMLStreamException"},
	{"getEventAllocator", "()Ljavax/xml/stream/util/XMLEventAllocator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, getEventAllocator, $XMLEventAllocator*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, getProperty, $Object*, $String*), "java.lang.IllegalArgumentException"},
	{"getXMLReporter", "()Ljavax/xml/stream/XMLReporter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, getXMLReporter, $XMLReporter*)},
	{"getXMLResolver", "()Ljavax/xml/stream/XMLResolver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, getXMLResolver, $XMLResolver*)},
	{"isPropertySupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, isPropertySupported, bool, $String*)},
	{"newDefaultFactory", "()Ljavax/xml/stream/XMLInputFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLInputFactory, newDefaultFactory, XMLInputFactory*)},
	{"newFactory", "()Ljavax/xml/stream/XMLInputFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLInputFactory, newFactory, XMLInputFactory*), "javax.xml.stream.FactoryConfigurationError"},
	{"newFactory", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/stream/XMLInputFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLInputFactory, newFactory, XMLInputFactory*, $String*, $ClassLoader*), "javax.xml.stream.FactoryConfigurationError"},
	{"newInstance", "()Ljavax/xml/stream/XMLInputFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLInputFactory, newInstance, XMLInputFactory*), "javax.xml.stream.FactoryConfigurationError"},
	{"newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/stream/XMLInputFactory;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(XMLInputFactory, newInstance, XMLInputFactory*, $String*, $ClassLoader*), "javax.xml.stream.FactoryConfigurationError", nullptr, _XMLInputFactory_MethodAnnotations_newInstance25},
	{"setEventAllocator", "(Ljavax/xml/stream/util/XMLEventAllocator;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, setEventAllocator, void, $XMLEventAllocator*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, setProperty, void, $String*, Object$*), "java.lang.IllegalArgumentException"},
	{"setXMLReporter", "(Ljavax/xml/stream/XMLReporter;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, setXMLReporter, void, $XMLReporter*)},
	{"setXMLResolver", "(Ljavax/xml/stream/XMLResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLInputFactory, setXMLResolver, void, $XMLResolver*)},
	{}
};

$ClassInfo _XMLInputFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.stream.XMLInputFactory",
	"java.lang.Object",
	nullptr,
	_XMLInputFactory_FieldInfo_,
	_XMLInputFactory_MethodInfo_
};

$Object* allocate$XMLInputFactory($Class* clazz) {
	return $of($alloc(XMLInputFactory));
}

$String* XMLInputFactory::IS_NAMESPACE_AWARE = nullptr;
$String* XMLInputFactory::IS_VALIDATING = nullptr;
$String* XMLInputFactory::IS_COALESCING = nullptr;
$String* XMLInputFactory::IS_REPLACING_ENTITY_REFERENCES = nullptr;
$String* XMLInputFactory::IS_SUPPORTING_EXTERNAL_ENTITIES = nullptr;
$String* XMLInputFactory::SUPPORT_DTD = nullptr;
$String* XMLInputFactory::REPORTER = nullptr;
$String* XMLInputFactory::RESOLVER = nullptr;
$String* XMLInputFactory::ALLOCATOR = nullptr;
$String* XMLInputFactory::DEFAULIMPL = nullptr;

void XMLInputFactory::init$() {
}

XMLInputFactory* XMLInputFactory::newDefaultFactory() {
	$init(XMLInputFactory);
	return $new($XMLInputFactoryImpl);
}

XMLInputFactory* XMLInputFactory::newInstance() {
	$init(XMLInputFactory);
	return $cast(XMLInputFactory, $FactoryFinder::find(XMLInputFactory::class$, XMLInputFactory::DEFAULIMPL));
}

XMLInputFactory* XMLInputFactory::newFactory() {
	$init(XMLInputFactory);
	return $cast(XMLInputFactory, $FactoryFinder::find(XMLInputFactory::class$, XMLInputFactory::DEFAULIMPL));
}

XMLInputFactory* XMLInputFactory::newInstance($String* factoryId, $ClassLoader* classLoader) {
	$init(XMLInputFactory);
	return $cast(XMLInputFactory, $FactoryFinder::find(XMLInputFactory::class$, factoryId, classLoader, nullptr));
}

XMLInputFactory* XMLInputFactory::newFactory($String* factoryId, $ClassLoader* classLoader) {
	$init(XMLInputFactory);
	return $cast(XMLInputFactory, $FactoryFinder::find(XMLInputFactory::class$, factoryId, classLoader, nullptr));
}

XMLInputFactory::XMLInputFactory() {
}

void clinit$XMLInputFactory($Class* class$) {
	$assignStatic(XMLInputFactory::IS_NAMESPACE_AWARE, "javax.xml.stream.isNamespaceAware"_s);
	$assignStatic(XMLInputFactory::IS_VALIDATING, "javax.xml.stream.isValidating"_s);
	$assignStatic(XMLInputFactory::IS_COALESCING, "javax.xml.stream.isCoalescing"_s);
	$assignStatic(XMLInputFactory::IS_REPLACING_ENTITY_REFERENCES, "javax.xml.stream.isReplacingEntityReferences"_s);
	$assignStatic(XMLInputFactory::IS_SUPPORTING_EXTERNAL_ENTITIES, "javax.xml.stream.isSupportingExternalEntities"_s);
	$assignStatic(XMLInputFactory::SUPPORT_DTD, "javax.xml.stream.supportDTD"_s);
	$assignStatic(XMLInputFactory::REPORTER, "javax.xml.stream.reporter"_s);
	$assignStatic(XMLInputFactory::RESOLVER, "javax.xml.stream.resolver"_s);
	$assignStatic(XMLInputFactory::ALLOCATOR, "javax.xml.stream.allocator"_s);
	$assignStatic(XMLInputFactory::DEFAULIMPL, "com.sun.xml.internal.stream.XMLInputFactoryImpl"_s);
}

$Class* XMLInputFactory::load$($String* name, bool initialize) {
	$loadClass(XMLInputFactory, name, initialize, &_XMLInputFactory_ClassInfo_, clinit$XMLInputFactory, allocate$XMLInputFactory);
	return class$;
}

$Class* XMLInputFactory::class$ = nullptr;

		} // stream
	} // xml
} // javax