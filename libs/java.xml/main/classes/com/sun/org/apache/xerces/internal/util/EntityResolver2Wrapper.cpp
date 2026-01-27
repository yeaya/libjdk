#include <com/sun/org/apache/xerces/internal/util/EntityResolver2Wrapper.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/ext/EntityResolver2.h>
#include <jcpp.h>

using $XMLEntityDescription = ::com::sun::org::apache::xerces::internal::impl::XMLEntityDescription;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLDTDDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLDTDDescription;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $EntityResolver2 = ::org::xml::sax::ext::EntityResolver2;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _EntityResolver2Wrapper_FieldInfo_[] = {
	{"fEntityResolver", "Lorg/xml/sax/ext/EntityResolver2;", nullptr, $PROTECTED, $field(EntityResolver2Wrapper, fEntityResolver)},
	{}
};

$MethodInfo _EntityResolver2Wrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EntityResolver2Wrapper, init$, void)},
	{"<init>", "(Lorg/xml/sax/ext/EntityResolver2;)V", nullptr, $PUBLIC, $method(EntityResolver2Wrapper, init$, void, $EntityResolver2*)},
	{"createXMLInputSource", "(Lorg/xml/sax/InputSource;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PRIVATE, $method(EntityResolver2Wrapper, createXMLInputSource, $XMLInputSource*, $InputSource*, $String*)},
	{"getEntityResolver", "()Lorg/xml/sax/ext/EntityResolver2;", nullptr, $PUBLIC, $virtualMethod(EntityResolver2Wrapper, getEntityResolver, $EntityResolver2*)},
	{"getExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC, $virtualMethod(EntityResolver2Wrapper, getExternalSubset, $XMLInputSource*, $XMLDTDDescription*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"resolveEntity", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC, $virtualMethod(EntityResolver2Wrapper, resolveEntity, $XMLInputSource*, $XMLResourceIdentifier*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"setEntityResolver", "(Lorg/xml/sax/ext/EntityResolver2;)V", nullptr, $PUBLIC, $virtualMethod(EntityResolver2Wrapper, setEntityResolver, void, $EntityResolver2*)},
	{}
};

$ClassInfo _EntityResolver2Wrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.EntityResolver2Wrapper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.ExternalSubsetResolver",
	_EntityResolver2Wrapper_FieldInfo_,
	_EntityResolver2Wrapper_MethodInfo_
};

$Object* allocate$EntityResolver2Wrapper($Class* clazz) {
	return $of($alloc(EntityResolver2Wrapper));
}

void EntityResolver2Wrapper::init$() {
}

void EntityResolver2Wrapper::init$($EntityResolver2* entityResolver) {
	setEntityResolver(entityResolver);
}

void EntityResolver2Wrapper::setEntityResolver($EntityResolver2* entityResolver) {
	$set(this, fEntityResolver, entityResolver);
}

$EntityResolver2* EntityResolver2Wrapper::getEntityResolver() {
	return this->fEntityResolver;
}

$XMLInputSource* EntityResolver2Wrapper::getExternalSubset($XMLDTDDescription* grammarDescription) {
	$useLocalCurrentObjectStackCache();
	if (this->fEntityResolver != nullptr) {
		$var($String, name, $nc(grammarDescription)->getRootName());
		$var($String, baseURI, grammarDescription->getBaseSystemId());
		try {
			$var($InputSource, inputSource, $nc(this->fEntityResolver)->getExternalSubset(name, baseURI));
			return (inputSource != nullptr) ? createXMLInputSource(inputSource, baseURI) : ($XMLInputSource*)nullptr;
		} catch ($SAXException& e) {
			$var($Exception, ex, e->getException());
			if (ex == nullptr) {
				$assign(ex, e);
			}
			$throwNew($XNIException, ex);
		}
	}
	return nullptr;
}

$XMLInputSource* EntityResolver2Wrapper::resolveEntity($XMLResourceIdentifier* resourceIdentifier) {
	$useLocalCurrentObjectStackCache();
	if (this->fEntityResolver != nullptr) {
		$var($String, pubId, $nc(resourceIdentifier)->getPublicId());
		$var($String, sysId, resourceIdentifier->getLiteralSystemId());
		$var($String, baseURI, resourceIdentifier->getBaseSystemId());
		$var($String, name, nullptr);
		if ($instanceOf($XMLDTDDescription, resourceIdentifier)) {
			$assign(name, "[dtd]"_s);
		} else if ($instanceOf($XMLEntityDescription, resourceIdentifier)) {
			$assign(name, $nc(($cast($XMLEntityDescription, resourceIdentifier)))->getEntityName());
		}
		if (pubId == nullptr && sysId == nullptr) {
			return nullptr;
		}
		try {
			$var($InputSource, inputSource, $nc(this->fEntityResolver)->resolveEntity(name, pubId, baseURI, sysId));
			return (inputSource != nullptr) ? createXMLInputSource(inputSource, baseURI) : ($XMLInputSource*)nullptr;
		} catch ($SAXException& e) {
			$var($Exception, ex, e->getException());
			if (ex == nullptr) {
				$assign(ex, e);
			}
			$throwNew($XNIException, ex);
		}
	}
	return nullptr;
}

$XMLInputSource* EntityResolver2Wrapper::createXMLInputSource($InputSource* source, $String* baseURI) {
	$useLocalCurrentObjectStackCache();
	$var($String, publicId, $nc(source)->getPublicId());
	$var($String, systemId, source->getSystemId());
	$var($String, baseSystemId, baseURI);
	$var($InputStream, byteStream, source->getByteStream());
	$var($Reader, charStream, source->getCharacterStream());
	$var($String, encoding, source->getEncoding());
	$var($XMLInputSource, xmlInputSource, $new($XMLInputSource, publicId, systemId, baseSystemId, false));
	xmlInputSource->setByteStream(byteStream);
	xmlInputSource->setCharacterStream(charStream);
	xmlInputSource->setEncoding(encoding);
	return xmlInputSource;
}

EntityResolver2Wrapper::EntityResolver2Wrapper() {
}

$Class* EntityResolver2Wrapper::load$($String* name, bool initialize) {
	$loadClass(EntityResolver2Wrapper, name, initialize, &_EntityResolver2Wrapper_ClassInfo_, allocate$EntityResolver2Wrapper);
	return class$;
}

$Class* EntityResolver2Wrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com