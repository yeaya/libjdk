#include <javax/xml/stream/XMLEventFactory.h>

#include <com/sun/xml/internal/stream/events/XMLEventFactoryImpl.h>
#include <java/lang/ClassLoader.h>
#include <java/util/Iterator.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/FactoryFinder.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Attribute.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/Comment.h>
#include <javax/xml/stream/events/DTD.h>
#include <javax/xml/stream/events/EndDocument.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/EntityDeclaration.h>
#include <javax/xml/stream/events/EntityReference.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/ProcessingInstruction.h>
#include <javax/xml/stream/events/StartDocument.h>
#include <javax/xml/stream/events/StartElement.h>
#include <jcpp.h>

#undef DEFAULIMPL
#undef JAXPFACTORYID

using $XMLEventFactoryImpl = ::com::sun::xml::internal::stream::events::XMLEventFactoryImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Iterator = ::java::util::Iterator;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $FactoryFinder = ::javax::xml::stream::FactoryFinder;
using $Location = ::javax::xml::stream::Location;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $Characters = ::javax::xml::stream::events::Characters;
using $Comment = ::javax::xml::stream::events::Comment;
using $DTD = ::javax::xml::stream::events::DTD;
using $EndDocument = ::javax::xml::stream::events::EndDocument;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $EntityDeclaration = ::javax::xml::stream::events::EntityDeclaration;
using $EntityReference = ::javax::xml::stream::events::EntityReference;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $ProcessingInstruction = ::javax::xml::stream::events::ProcessingInstruction;
using $StartDocument = ::javax::xml::stream::events::StartDocument;
using $StartElement = ::javax::xml::stream::events::StartElement;

namespace javax {
	namespace xml {
		namespace stream {

$NamedAttribute XMLEventFactory_Attribute_var$0[] = {
	{"since", 's', "1.7"},
	{}
};

$CompoundAttribute _XMLEventFactory_MethodAnnotations_newInstance30[] = {
	{"Ljava/lang/Deprecated;", XMLEventFactory_Attribute_var$0},
	{}
};

$FieldInfo _XMLEventFactory_FieldInfo_[] = {
	{"JAXPFACTORYID", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLEventFactory, JAXPFACTORYID)},
	{"DEFAULIMPL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLEventFactory, DEFAULIMPL)},
	{}
};

$MethodInfo _XMLEventFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(XMLEventFactory, init$, void)},
	{"createAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createAttribute, $Attribute*, $String*, $String*, $String*, $String*)},
	{"createAttribute", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createAttribute, $Attribute*, $String*, $String*)},
	{"createAttribute", "(Ljavax/xml/namespace/QName;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createAttribute, $Attribute*, $QName*, $String*)},
	{"createCData", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createCData, $Characters*, $String*)},
	{"createCharacters", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createCharacters, $Characters*, $String*)},
	{"createComment", "(Ljava/lang/String;)Ljavax/xml/stream/events/Comment;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createComment, $Comment*, $String*)},
	{"createDTD", "(Ljava/lang/String;)Ljavax/xml/stream/events/DTD;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createDTD, $DTD*, $String*)},
	{"createEndDocument", "()Ljavax/xml/stream/events/EndDocument;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createEndDocument, $EndDocument*)},
	{"createEndElement", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator;)Ljavax/xml/stream/events/EndElement;", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/EndElement;", $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createEndElement, $EndElement*, $QName*, $Iterator*)},
	{"createEndElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/EndElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createEndElement, $EndElement*, $String*, $String*, $String*)},
	{"createEndElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;)Ljavax/xml/stream/events/EndElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/EndElement;", $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createEndElement, $EndElement*, $String*, $String*, $String*, $Iterator*)},
	{"createEntityReference", "(Ljava/lang/String;Ljavax/xml/stream/events/EntityDeclaration;)Ljavax/xml/stream/events/EntityReference;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createEntityReference, $EntityReference*, $String*, $EntityDeclaration*)},
	{"createIgnorableSpace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createIgnorableSpace, $Characters*, $String*)},
	{"createNamespace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Namespace;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createNamespace, $Namespace*, $String*)},
	{"createNamespace", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Namespace;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createNamespace, $Namespace*, $String*, $String*)},
	{"createProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/ProcessingInstruction;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createProcessingInstruction, $ProcessingInstruction*, $String*, $String*)},
	{"createSpace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createSpace, $Characters*, $String*)},
	{"createStartDocument", "()Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createStartDocument, $StartDocument*)},
	{"createStartDocument", "(Ljava/lang/String;Ljava/lang/String;Z)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createStartDocument, $StartDocument*, $String*, $String*, bool)},
	{"createStartDocument", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createStartDocument, $StartDocument*, $String*, $String*)},
	{"createStartDocument", "(Ljava/lang/String;)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createStartDocument, $StartDocument*, $String*)},
	{"createStartElement", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator;Ljava/util/Iterator;)Ljavax/xml/stream/events/StartElement;", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/StartElement;", $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createStartElement, $StartElement*, $QName*, $Iterator*, $Iterator*)},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/StartElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createStartElement, $StartElement*, $String*, $String*, $String*)},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;Ljava/util/Iterator;)Ljavax/xml/stream/events/StartElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/StartElement;", $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createStartElement, $StartElement*, $String*, $String*, $String*, $Iterator*, $Iterator*)},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;Ljava/util/Iterator;Ljavax/xml/namespace/NamespaceContext;)Ljavax/xml/stream/events/StartElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;Ljavax/xml/namespace/NamespaceContext;)Ljavax/xml/stream/events/StartElement;", $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, createStartElement, $StartElement*, $String*, $String*, $String*, $Iterator*, $Iterator*, $NamespaceContext*)},
	{"newDefaultFactory", "()Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLEventFactory, newDefaultFactory, XMLEventFactory*)},
	{"newFactory", "()Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLEventFactory, newFactory, XMLEventFactory*), "javax.xml.stream.FactoryConfigurationError"},
	{"newFactory", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLEventFactory, newFactory, XMLEventFactory*, $String*, $ClassLoader*), "javax.xml.stream.FactoryConfigurationError"},
	{"newInstance", "()Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLEventFactory, newInstance, XMLEventFactory*), "javax.xml.stream.FactoryConfigurationError"},
	{"newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(XMLEventFactory, newInstance, XMLEventFactory*, $String*, $ClassLoader*), "javax.xml.stream.FactoryConfigurationError", nullptr, _XMLEventFactory_MethodAnnotations_newInstance30},
	{"setLocation", "(Ljavax/xml/stream/Location;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventFactory, setLocation, void, $Location*)},
	{}
};

$ClassInfo _XMLEventFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.stream.XMLEventFactory",
	"java.lang.Object",
	nullptr,
	_XMLEventFactory_FieldInfo_,
	_XMLEventFactory_MethodInfo_
};

$Object* allocate$XMLEventFactory($Class* clazz) {
	return $of($alloc(XMLEventFactory));
}

$String* XMLEventFactory::JAXPFACTORYID = nullptr;
$String* XMLEventFactory::DEFAULIMPL = nullptr;

void XMLEventFactory::init$() {
}

XMLEventFactory* XMLEventFactory::newDefaultFactory() {
	$init(XMLEventFactory);
	return $new($XMLEventFactoryImpl);
}

XMLEventFactory* XMLEventFactory::newInstance() {
	$init(XMLEventFactory);
	return $cast(XMLEventFactory, $FactoryFinder::find(XMLEventFactory::class$, XMLEventFactory::DEFAULIMPL));
}

XMLEventFactory* XMLEventFactory::newFactory() {
	$init(XMLEventFactory);
	return $cast(XMLEventFactory, $FactoryFinder::find(XMLEventFactory::class$, XMLEventFactory::DEFAULIMPL));
}

XMLEventFactory* XMLEventFactory::newInstance($String* factoryId, $ClassLoader* classLoader) {
	$init(XMLEventFactory);
	return $cast(XMLEventFactory, $FactoryFinder::find(XMLEventFactory::class$, factoryId, classLoader, nullptr));
}

XMLEventFactory* XMLEventFactory::newFactory($String* factoryId, $ClassLoader* classLoader) {
	$init(XMLEventFactory);
	return $cast(XMLEventFactory, $FactoryFinder::find(XMLEventFactory::class$, factoryId, classLoader, nullptr));
}

XMLEventFactory::XMLEventFactory() {
}

void clinit$XMLEventFactory($Class* class$) {
	$assignStatic(XMLEventFactory::JAXPFACTORYID, "javax.xml.stream.XMLEventFactory"_s);
	$assignStatic(XMLEventFactory::DEFAULIMPL, "com.sun.xml.internal.stream.events.XMLEventFactoryImpl"_s);
}

$Class* XMLEventFactory::load$($String* name, bool initialize) {
	$loadClass(XMLEventFactory, name, initialize, &_XMLEventFactory_ClassInfo_, clinit$XMLEventFactory, allocate$XMLEventFactory);
	return class$;
}

$Class* XMLEventFactory::class$ = nullptr;

		} // stream
	} // xml
} // javax