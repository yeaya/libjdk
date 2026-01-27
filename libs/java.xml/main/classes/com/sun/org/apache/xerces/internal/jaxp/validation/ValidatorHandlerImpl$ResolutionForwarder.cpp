#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl$ResolutionForwarder.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

#undef XML_TYPE

using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LSInput = ::org::w3c::dom::ls::LSInput;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;
using $InputSource = ::org::xml::sax::InputSource;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _ValidatorHandlerImpl$ResolutionForwarder_FieldInfo_[] = {
	{"XML_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValidatorHandlerImpl$ResolutionForwarder, XML_TYPE)},
	{"fEntityResolver", "Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PROTECTED, $field(ValidatorHandlerImpl$ResolutionForwarder, fEntityResolver)},
	{}
};

$MethodInfo _ValidatorHandlerImpl$ResolutionForwarder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ValidatorHandlerImpl$ResolutionForwarder, init$, void)},
	{"<init>", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, $PUBLIC, $method(ValidatorHandlerImpl$ResolutionForwarder, init$, void, $LSResourceResolver*)},
	{"getEntityResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PUBLIC, $method(ValidatorHandlerImpl$ResolutionForwarder, getEntityResolver, $LSResourceResolver*)},
	{"getExternalSubset", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl$ResolutionForwarder, getExternalSubset, $InputSource*, $String*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl$ResolutionForwarder, resolveEntity, $InputSource*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl$ResolutionForwarder, resolveEntity, $InputSource*, $String*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"resolveSystemId", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(ValidatorHandlerImpl$ResolutionForwarder, resolveSystemId, $String*, $String*, $String*)},
	{"setEntityResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, $PUBLIC, $method(ValidatorHandlerImpl$ResolutionForwarder, setEntityResolver, void, $LSResourceResolver*)},
	{}
};

$InnerClassInfo _ValidatorHandlerImpl$ResolutionForwarder_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl$ResolutionForwarder", "com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl", "ResolutionForwarder", $STATIC | $FINAL},
	{}
};

$ClassInfo _ValidatorHandlerImpl$ResolutionForwarder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl$ResolutionForwarder",
	"java.lang.Object",
	"org.xml.sax.ext.EntityResolver2",
	_ValidatorHandlerImpl$ResolutionForwarder_FieldInfo_,
	_ValidatorHandlerImpl$ResolutionForwarder_MethodInfo_,
	nullptr,
	nullptr,
	_ValidatorHandlerImpl$ResolutionForwarder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl"
};

$Object* allocate$ValidatorHandlerImpl$ResolutionForwarder($Class* clazz) {
	return $of($alloc(ValidatorHandlerImpl$ResolutionForwarder));
}

$String* ValidatorHandlerImpl$ResolutionForwarder::XML_TYPE = nullptr;

void ValidatorHandlerImpl$ResolutionForwarder::init$() {
}

void ValidatorHandlerImpl$ResolutionForwarder::init$($LSResourceResolver* entityResolver) {
	setEntityResolver(entityResolver);
}

void ValidatorHandlerImpl$ResolutionForwarder::setEntityResolver($LSResourceResolver* entityResolver) {
	$set(this, fEntityResolver, entityResolver);
}

$LSResourceResolver* ValidatorHandlerImpl$ResolutionForwarder::getEntityResolver() {
	return this->fEntityResolver;
}

$InputSource* ValidatorHandlerImpl$ResolutionForwarder::getExternalSubset($String* name, $String* baseURI) {
	return nullptr;
}

$InputSource* ValidatorHandlerImpl$ResolutionForwarder::resolveEntity($String* name, $String* publicId, $String* baseURI, $String* systemId) {
	$useLocalCurrentObjectStackCache();
	if (this->fEntityResolver != nullptr) {
		$var($LSInput, lsInput, $nc(this->fEntityResolver)->resolveResource(ValidatorHandlerImpl$ResolutionForwarder::XML_TYPE, nullptr, publicId, systemId, baseURI));
		if (lsInput != nullptr) {
			$var($String, pubId, lsInput->getPublicId());
			$var($String, sysId, lsInput->getSystemId());
			$var($String, baseSystemId, lsInput->getBaseURI());
			$var($Reader, charStream, lsInput->getCharacterStream());
			$var($InputStream, byteStream, lsInput->getByteStream());
			$var($String, data, lsInput->getStringData());
			$var($String, encoding, lsInput->getEncoding());
			$var($InputSource, inputSource, $new($InputSource));
			inputSource->setPublicId(pubId);
			inputSource->setSystemId((baseSystemId != nullptr) ? $(resolveSystemId(sysId, baseSystemId)) : sysId);
			if (charStream != nullptr) {
				inputSource->setCharacterStream(charStream);
			} else if (byteStream != nullptr) {
				inputSource->setByteStream(byteStream);
			} else if (data != nullptr && data->length() != 0) {
				inputSource->setCharacterStream($$new($StringReader, data));
			}
			inputSource->setEncoding(encoding);
			return inputSource;
		}
	}
	return nullptr;
}

$InputSource* ValidatorHandlerImpl$ResolutionForwarder::resolveEntity($String* publicId, $String* systemId) {
	return resolveEntity(nullptr, publicId, nullptr, systemId);
}

$String* ValidatorHandlerImpl$ResolutionForwarder::resolveSystemId($String* systemId, $String* baseURI) {
	try {
		return $XMLEntityManager::expandSystemId(systemId, baseURI, false);
	} catch ($URI$MalformedURIException& ex) {
		return systemId;
	}
	$shouldNotReachHere();
}

ValidatorHandlerImpl$ResolutionForwarder::ValidatorHandlerImpl$ResolutionForwarder() {
}

void clinit$ValidatorHandlerImpl$ResolutionForwarder($Class* class$) {
	$assignStatic(ValidatorHandlerImpl$ResolutionForwarder::XML_TYPE, "http://www.w3.org/TR/REC-xml"_s);
}

$Class* ValidatorHandlerImpl$ResolutionForwarder::load$($String* name, bool initialize) {
	$loadClass(ValidatorHandlerImpl$ResolutionForwarder, name, initialize, &_ValidatorHandlerImpl$ResolutionForwarder_ClassInfo_, clinit$ValidatorHandlerImpl$ResolutionForwarder, allocate$ValidatorHandlerImpl$ResolutionForwarder);
	return class$;
}

$Class* ValidatorHandlerImpl$ResolutionForwarder::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com