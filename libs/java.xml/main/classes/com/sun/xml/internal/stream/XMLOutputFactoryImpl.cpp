#include <com/sun/xml/internal/stream/XMLOutputFactoryImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/xml/internal/stream/writers/XMLDOMWriterImpl.h>
#include <com/sun/xml/internal/stream/writers/XMLEventWriterImpl.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterBase.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/xml/stream/XMLEventWriter.h>
#include <javax/xml/stream/XMLOutputFactory.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamWriter.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/dom/DOMResult.h>
#include <javax/xml/transform/stax/StAXResult.h>
#include <javax/xml/transform/stream/StreamResult.h>
#include <jcpp.h>

#undef CONTEXT_WRITER
#undef DEBUG
#undef REUSE_INSTANCE

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XMLDOMWriterImpl = ::com::sun::xml::internal::stream::writers::XMLDOMWriterImpl;
using $XMLEventWriterImpl = ::com::sun::xml::internal::stream::writers::XMLEventWriterImpl;
using $XMLStreamWriterBase = ::com::sun::xml::internal::stream::writers::XMLStreamWriterBase;
using $XMLStreamWriterImpl = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $XMLEventWriter = ::javax::xml::stream::XMLEventWriter;
using $XMLOutputFactory = ::javax::xml::stream::XMLOutputFactory;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamWriter = ::javax::xml::stream::XMLStreamWriter;
using $Result = ::javax::xml::transform::Result;
using $DOMResult = ::javax::xml::transform::dom::DOMResult;
using $StAXResult = ::javax::xml::transform::stax::StAXResult;
using $StreamResult = ::javax::xml::transform::stream::StreamResult;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _XMLOutputFactoryImpl_FieldInfo_[] = {
	{"fPropertyManager", "Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;", nullptr, $PRIVATE, $field(XMLOutputFactoryImpl, fPropertyManager)},
	{"fStreamWriter", "Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;", nullptr, $PRIVATE, $field(XMLOutputFactoryImpl, fStreamWriter)},
	{"fReuseInstance", "Z", nullptr, 0, $field(XMLOutputFactoryImpl, fReuseInstance)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLOutputFactoryImpl, DEBUG)},
	{"fPropertyChanged", "Z", nullptr, $PRIVATE, $field(XMLOutputFactoryImpl, fPropertyChanged)},
	{}
};

$MethodInfo _XMLOutputFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLOutputFactoryImpl, init$, void)},
	{"createXMLEventWriter", "(Ljava/io/OutputStream;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, createXMLEventWriter, $XMLEventWriter*, $OutputStream*), "javax.xml.stream.XMLStreamException"},
	{"createXMLEventWriter", "(Ljava/io/OutputStream;Ljava/lang/String;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, createXMLEventWriter, $XMLEventWriter*, $OutputStream*, $String*), "javax.xml.stream.XMLStreamException"},
	{"createXMLEventWriter", "(Ljavax/xml/transform/Result;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, createXMLEventWriter, $XMLEventWriter*, $Result*), "javax.xml.stream.XMLStreamException"},
	{"createXMLEventWriter", "(Ljava/io/Writer;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, createXMLEventWriter, $XMLEventWriter*, $Writer*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamWriter", "(Ljavax/xml/transform/Result;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, createXMLStreamWriter, $XMLStreamWriter*, $Result*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamWriter", "(Ljava/io/Writer;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, createXMLStreamWriter, $XMLStreamWriter*, $Writer*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamWriter", "(Ljava/io/OutputStream;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, createXMLStreamWriter, $XMLStreamWriter*, $OutputStream*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamWriter", "(Ljava/io/OutputStream;Ljava/lang/String;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, createXMLStreamWriter, $XMLStreamWriter*, $OutputStream*, $String*), "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamWriter", "(Ljavax/xml/transform/stream/StreamResult;Ljava/lang/String;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, 0, $virtualMethod(XMLOutputFactoryImpl, createXMLStreamWriter, $XMLStreamWriter*, $StreamResult*, $String*), "javax.xml.stream.XMLStreamException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, getProperty, $Object*, $String*), "java.lang.IllegalArgumentException"},
	{"isPropertySupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, isPropertySupported, bool, $String*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLOutputFactoryImpl, setProperty, void, $String*, Object$*), "java.lang.IllegalArgumentException"},
	{"toStreamResult", "(Ljava/io/OutputStream;Ljava/io/Writer;Ljava/lang/String;)Ljavax/xml/transform/stream/StreamResult;", nullptr, 0, $virtualMethod(XMLOutputFactoryImpl, toStreamResult, $StreamResult*, $OutputStream*, $Writer*, $String*)},
	{}
};

$ClassInfo _XMLOutputFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.XMLOutputFactoryImpl",
	"javax.xml.stream.XMLOutputFactory",
	nullptr,
	_XMLOutputFactoryImpl_FieldInfo_,
	_XMLOutputFactoryImpl_MethodInfo_
};

$Object* allocate$XMLOutputFactoryImpl($Class* clazz) {
	return $of($alloc(XMLOutputFactoryImpl));
}

void XMLOutputFactoryImpl::init$() {
	$XMLOutputFactory::init$();
	$set(this, fPropertyManager, $new($PropertyManager, $PropertyManager::CONTEXT_WRITER));
	$set(this, fStreamWriter, nullptr);
	this->fReuseInstance = false;
}

$XMLEventWriter* XMLOutputFactoryImpl::createXMLEventWriter($OutputStream* outputStream) {
	return createXMLEventWriter(outputStream, nullptr);
}

$XMLEventWriter* XMLOutputFactoryImpl::createXMLEventWriter($OutputStream* outputStream, $String* encoding) {
	return $new($XMLEventWriterImpl, $(createXMLStreamWriter(outputStream, encoding)));
}

$XMLEventWriter* XMLOutputFactoryImpl::createXMLEventWriter($Result* result) {
	if ($instanceOf($StAXResult, result) && $nc(($cast($StAXResult, result)))->getXMLEventWriter() != nullptr) {
		return ($cast($StAXResult, result))->getXMLEventWriter();
	}
	return $new($XMLEventWriterImpl, $(createXMLStreamWriter(result)));
}

$XMLEventWriter* XMLOutputFactoryImpl::createXMLEventWriter($Writer* writer) {
	return $new($XMLEventWriterImpl, $(createXMLStreamWriter(writer)));
}

$XMLStreamWriter* XMLOutputFactoryImpl::createXMLStreamWriter($Result* result) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($StreamResult, result)) {
		return createXMLStreamWriter($cast($StreamResult, result), ($String*)nullptr);
	} else if ($instanceOf($DOMResult, result)) {
		return $new($XMLDOMWriterImpl, $cast($DOMResult, result));
	} else if ($instanceOf($StAXResult, result)) {
		if ($nc(($cast($StAXResult, result)))->getXMLStreamWriter() != nullptr) {
			return ($cast($StAXResult, result))->getXMLStreamWriter();
		} else {
			$throwNew($UnsupportedOperationException, $$str({"Result of type "_s, result, " is not supported"_s}));
		}
	} else if ($nc(result)->getSystemId() != nullptr) {
		return createXMLStreamWriter(static_cast<$Result*>($$new($StreamResult, $(result->getSystemId()))));
	} else {
		$throwNew($UnsupportedOperationException, $$str({"Result of type "_s, result, " is not supported. Supported result types are: DOMResult, StAXResult and StreamResult."_s}));
	}
}

$XMLStreamWriter* XMLOutputFactoryImpl::createXMLStreamWriter($Writer* writer) {
	return createXMLStreamWriter($(toStreamResult(nullptr, writer, nullptr)), ($String*)nullptr);
}

$XMLStreamWriter* XMLOutputFactoryImpl::createXMLStreamWriter($OutputStream* outputStream) {
	return createXMLStreamWriter(outputStream, ($String*)nullptr);
}

$XMLStreamWriter* XMLOutputFactoryImpl::createXMLStreamWriter($OutputStream* outputStream, $String* encoding) {
	return createXMLStreamWriter($(toStreamResult(outputStream, nullptr, nullptr)), encoding);
}

$Object* XMLOutputFactoryImpl::getProperty($String* name) {
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, "Property not supported"_s);
	}
	if ($nc(this->fPropertyManager)->containsProperty(name)) {
		return $of($nc(this->fPropertyManager)->getProperty(name));
	}
	$throwNew($IllegalArgumentException, "Property not supported"_s);
}

bool XMLOutputFactoryImpl::isPropertySupported($String* name) {
	if (name == nullptr) {
		return false;
	} else {
		return $nc(this->fPropertyManager)->containsProperty(name);
	}
}

void XMLOutputFactoryImpl::setProperty($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr || value == nullptr || !$nc(this->fPropertyManager)->containsProperty(name)) {
		$throwNew($IllegalArgumentException, $$str({"Property "_s, name, "is not supported"_s}));
	}
	$init($Constants);
	if (name == $Constants::REUSE_INSTANCE || $nc(name)->equals($Constants::REUSE_INSTANCE)) {
		this->fReuseInstance = $nc(($cast($Boolean, value)))->booleanValue();
		if (this->fReuseInstance) {
			$throwNew($IllegalArgumentException, $$str({"Property "_s, name, " is not supported: XMLStreamWriters are not Thread safe"_s}));
		}
	} else {
		this->fPropertyChanged = true;
	}
	$nc(this->fPropertyManager)->setProperty(name, value);
}

$StreamResult* XMLOutputFactoryImpl::toStreamResult($OutputStream* os, $Writer* writer, $String* systemId) {
	$var($StreamResult, sr, $new($StreamResult));
	sr->setOutputStream(os);
	sr->setWriter(writer);
	sr->setSystemId(systemId);
	return sr;
}

$XMLStreamWriter* XMLOutputFactoryImpl::createXMLStreamWriter($StreamResult* sr, $String* encoding) {
	try {
		if (this->fReuseInstance && this->fStreamWriter != nullptr && $nc(this->fStreamWriter)->canReuse() && !this->fPropertyChanged) {
			$nc(this->fStreamWriter)->reset();
			$nc(this->fStreamWriter)->setOutput(sr, encoding);
			return this->fStreamWriter;
		}
		return ($set(this, fStreamWriter, $new($XMLStreamWriterImpl, sr, encoding, $$new($PropertyManager, this->fPropertyManager))));
	} catch ($IOException& io) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(io));
	}
	$shouldNotReachHere();
}

XMLOutputFactoryImpl::XMLOutputFactoryImpl() {
}

$Class* XMLOutputFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(XMLOutputFactoryImpl, name, initialize, &_XMLOutputFactoryImpl_ClassInfo_, allocate$XMLOutputFactoryImpl);
	return class$;
}

$Class* XMLOutputFactoryImpl::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com