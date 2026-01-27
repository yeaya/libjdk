#include <com/sun/org/apache/xerces/internal/util/EntityResolverWrapper.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <javax/xml/catalog/CatalogException.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CatalogException = ::javax::xml::catalog::CatalogException;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _EntityResolverWrapper_FieldInfo_[] = {
	{"fEntityResolver", "Lorg/xml/sax/EntityResolver;", nullptr, $PROTECTED, $field(EntityResolverWrapper, fEntityResolver)},
	{}
};

$MethodInfo _EntityResolverWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EntityResolverWrapper, init$, void)},
	{"<init>", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $method(EntityResolverWrapper, init$, void, $EntityResolver*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(EntityResolverWrapper, getEntityResolver, $EntityResolver*)},
	{"resolveEntity", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC, $virtualMethod(EntityResolverWrapper, resolveEntity, $XMLInputSource*, $XMLResourceIdentifier*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(EntityResolverWrapper, setEntityResolver, void, $EntityResolver*)},
	{}
};

$ClassInfo _EntityResolverWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.EntityResolverWrapper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver",
	_EntityResolverWrapper_FieldInfo_,
	_EntityResolverWrapper_MethodInfo_
};

$Object* allocate$EntityResolverWrapper($Class* clazz) {
	return $of($alloc(EntityResolverWrapper));
}

void EntityResolverWrapper::init$() {
}

void EntityResolverWrapper::init$($EntityResolver* entityResolver) {
	setEntityResolver(entityResolver);
}

void EntityResolverWrapper::setEntityResolver($EntityResolver* entityResolver) {
	$set(this, fEntityResolver, entityResolver);
}

$EntityResolver* EntityResolverWrapper::getEntityResolver() {
	return this->fEntityResolver;
}

$XMLInputSource* EntityResolverWrapper::resolveEntity($XMLResourceIdentifier* resourceIdentifier) {
	$useLocalCurrentObjectStackCache();
	$var($String, pubId, $nc(resourceIdentifier)->getPublicId());
	$var($String, sysId, resourceIdentifier->getExpandedSystemId());
	if (pubId == nullptr && sysId == nullptr) {
		return nullptr;
	}
	if (this->fEntityResolver != nullptr && resourceIdentifier != nullptr) {
		try {
			$var($InputSource, inputSource, $nc(this->fEntityResolver)->resolveEntity(pubId, sysId));
			if (inputSource != nullptr) {
				$var($String, publicId, inputSource->getPublicId());
				$var($String, systemId, inputSource->getSystemId());
				$var($String, baseSystemId, resourceIdentifier->getBaseSystemId());
				$var($InputStream, byteStream, inputSource->getByteStream());
				$var($Reader, charStream, inputSource->getCharacterStream());
				$var($String, encoding, inputSource->getEncoding());
				$var($XMLInputSource, xmlInputSource, $new($XMLInputSource, publicId, systemId, baseSystemId, true));
				xmlInputSource->setByteStream(byteStream);
				xmlInputSource->setCharacterStream(charStream);
				xmlInputSource->setEncoding(encoding);
				return xmlInputSource;
			}
		} catch ($SAXException& e) {
			$var($Exception, ex, e->getException());
			if (ex == nullptr) {
				$assign(ex, e);
			}
			$throwNew($XNIException, ex);
		} catch ($CatalogException& e) {
			$throwNew($XNIException, static_cast<$Exception*>(e));
		}
	}
	return nullptr;
}

EntityResolverWrapper::EntityResolverWrapper() {
}

$Class* EntityResolverWrapper::load$($String* name, bool initialize) {
	$loadClass(EntityResolverWrapper, name, initialize, &_EntityResolverWrapper_ClassInfo_, allocate$EntityResolverWrapper);
	return class$;
}

$Class* EntityResolverWrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com