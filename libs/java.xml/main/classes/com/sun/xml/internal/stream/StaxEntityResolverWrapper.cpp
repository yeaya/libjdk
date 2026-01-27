#include <com/sun/xml/internal/stream/StaxEntityResolverWrapper.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/xml/internal/stream/StaxXMLInputSource.h>
#include <java/io/InputStream.h>
#include <javax/xml/catalog/CatalogException.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLResolver.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <jcpp.h>

using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $StaxXMLInputSource = ::com::sun::xml::internal::stream::StaxXMLInputSource;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CatalogException = ::javax::xml::catalog::CatalogException;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLResolver = ::javax::xml::stream::XMLResolver;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _StaxEntityResolverWrapper_FieldInfo_[] = {
	{"fStaxResolver", "Ljavax/xml/stream/XMLResolver;", nullptr, 0, $field(StaxEntityResolverWrapper, fStaxResolver)},
	{}
};

$MethodInfo _StaxEntityResolverWrapper_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLResolver;)V", nullptr, $PUBLIC, $method(StaxEntityResolverWrapper, init$, void, $XMLResolver*)},
	{"getStaxEntityResolver", "()Ljavax/xml/stream/XMLResolver;", nullptr, $PUBLIC, $virtualMethod(StaxEntityResolverWrapper, getStaxEntityResolver, $XMLResolver*)},
	{"getStaxInputSource", "(Ljava/lang/Object;)Lcom/sun/xml/internal/stream/StaxXMLInputSource;", nullptr, 0, $virtualMethod(StaxEntityResolverWrapper, getStaxInputSource, $StaxXMLInputSource*, Object$*)},
	{"resolveEntity", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)Lcom/sun/xml/internal/stream/StaxXMLInputSource;", nullptr, $PUBLIC, $virtualMethod(StaxEntityResolverWrapper, resolveEntity, $StaxXMLInputSource*, $XMLResourceIdentifier*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"setStaxEntityResolver", "(Ljavax/xml/stream/XMLResolver;)V", nullptr, $PUBLIC, $virtualMethod(StaxEntityResolverWrapper, setStaxEntityResolver, void, $XMLResolver*)},
	{}
};

$ClassInfo _StaxEntityResolverWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.StaxEntityResolverWrapper",
	"java.lang.Object",
	nullptr,
	_StaxEntityResolverWrapper_FieldInfo_,
	_StaxEntityResolverWrapper_MethodInfo_
};

$Object* allocate$StaxEntityResolverWrapper($Class* clazz) {
	return $of($alloc(StaxEntityResolverWrapper));
}

void StaxEntityResolverWrapper::init$($XMLResolver* resolver) {
	$set(this, fStaxResolver, resolver);
}

void StaxEntityResolverWrapper::setStaxEntityResolver($XMLResolver* resolver) {
	$set(this, fStaxResolver, resolver);
}

$XMLResolver* StaxEntityResolverWrapper::getStaxEntityResolver() {
	return this->fStaxResolver;
}

$StaxXMLInputSource* StaxEntityResolverWrapper::resolveEntity($XMLResourceIdentifier* resourceIdentifier) {
	$useLocalCurrentObjectStackCache();
	$var($Object, object, nullptr);
	try {
		$var($String, var$0, $nc(resourceIdentifier)->getPublicId());
		$var($String, var$1, resourceIdentifier->getLiteralSystemId());
		$assign(object, $nc(this->fStaxResolver)->resolveEntity(var$0, var$1, $(resourceIdentifier->getBaseSystemId()), nullptr));
		return getStaxInputSource(object);
	} catch ($XMLStreamException& streamException) {
		$throwNew($XNIException, $cast($Exception, streamException));
	} catch ($CatalogException& streamException) {
		$throwNew($XNIException, $cast($Exception, streamException));
	}
	$shouldNotReachHere();
}

$StaxXMLInputSource* StaxEntityResolverWrapper::getStaxInputSource(Object$* object) {
	if (object == nullptr) {
		return nullptr;
	}
	if ($instanceOf($InputStream, object)) {
		return $new($StaxXMLInputSource, $$new($XMLInputSource, ($String*)nullptr, ($String*)nullptr, ($String*)nullptr, $cast($InputStream, object), ($String*)nullptr), true);
	} else if ($instanceOf($XMLStreamReader, object)) {
		return $new($StaxXMLInputSource, $cast($XMLStreamReader, object), true);
	} else if ($instanceOf($XMLEventReader, object)) {
		return $new($StaxXMLInputSource, $cast($XMLEventReader, object), true);
	}
	return nullptr;
}

StaxEntityResolverWrapper::StaxEntityResolverWrapper() {
}

$Class* StaxEntityResolverWrapper::load$($String* name, bool initialize) {
	$loadClass(StaxEntityResolverWrapper, name, initialize, &_StaxEntityResolverWrapper_ClassInfo_, allocate$StaxEntityResolverWrapper);
	return class$;
}

$Class* StaxEntityResolverWrapper::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com