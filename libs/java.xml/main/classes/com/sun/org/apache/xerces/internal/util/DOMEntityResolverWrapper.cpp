#include <com/sun/org/apache/xerces/internal/util/DOMEntityResolverWrapper.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <jcpp.h>

#undef XML_SCHEMA
#undef XML_TYPE
#undef XSD_TYPE

using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LSInput = ::org::w3c::dom::ls::LSInput;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _DOMEntityResolverWrapper_FieldInfo_[] = {
	{"XML_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMEntityResolverWrapper, XML_TYPE)},
	{"XSD_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMEntityResolverWrapper, XSD_TYPE)},
	{"fEntityResolver", "Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PROTECTED, $field(DOMEntityResolverWrapper, fEntityResolver)},
	{}
};

$MethodInfo _DOMEntityResolverWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMEntityResolverWrapper, init$, void)},
	{"<init>", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, $PUBLIC, $method(DOMEntityResolverWrapper, init$, void, $LSResourceResolver*)},
	{"getEntityResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PUBLIC, $virtualMethod(DOMEntityResolverWrapper, getEntityResolver, $LSResourceResolver*)},
	{"getType", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)Ljava/lang/String;", nullptr, $PRIVATE, $method(DOMEntityResolverWrapper, getType, $String*, $XMLResourceIdentifier*)},
	{"resolveEntity", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC, $virtualMethod(DOMEntityResolverWrapper, resolveEntity, $XMLInputSource*, $XMLResourceIdentifier*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"setEntityResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, $PUBLIC, $virtualMethod(DOMEntityResolverWrapper, setEntityResolver, void, $LSResourceResolver*)},
	{}
};

$ClassInfo _DOMEntityResolverWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.DOMEntityResolverWrapper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver",
	_DOMEntityResolverWrapper_FieldInfo_,
	_DOMEntityResolverWrapper_MethodInfo_
};

$Object* allocate$DOMEntityResolverWrapper($Class* clazz) {
	return $of($alloc(DOMEntityResolverWrapper));
}

$String* DOMEntityResolverWrapper::XML_TYPE = nullptr;
$String* DOMEntityResolverWrapper::XSD_TYPE = nullptr;

void DOMEntityResolverWrapper::init$() {
}

void DOMEntityResolverWrapper::init$($LSResourceResolver* entityResolver) {
	setEntityResolver(entityResolver);
}

void DOMEntityResolverWrapper::setEntityResolver($LSResourceResolver* entityResolver) {
	$set(this, fEntityResolver, entityResolver);
}

$LSResourceResolver* DOMEntityResolverWrapper::getEntityResolver() {
	return this->fEntityResolver;
}

$XMLInputSource* DOMEntityResolverWrapper::resolveEntity($XMLResourceIdentifier* resourceIdentifier) {
	$useLocalCurrentObjectStackCache();
	if (this->fEntityResolver != nullptr) {
		$var($LSInput, var$0, nullptr);
		if (resourceIdentifier == nullptr) {
			$assign(var$0, $nc(this->fEntityResolver)->resolveResource(nullptr, nullptr, nullptr, nullptr, nullptr));
		} else {
			$var($String, var$1, getType(resourceIdentifier));
			$var($String, var$2, $nc(resourceIdentifier)->getNamespace());
			$var($String, var$3, resourceIdentifier->getPublicId());
			$var($String, var$4, resourceIdentifier->getLiteralSystemId());
			$assign(var$0, $nc(this->fEntityResolver)->resolveResource(var$1, var$2, var$3, var$4, $(resourceIdentifier->getBaseSystemId())));
		}
		$var($LSInput, inputSource, var$0);
		if (inputSource != nullptr) {
			$var($String, publicId, inputSource->getPublicId());
			$var($String, systemId, inputSource->getSystemId());
			$var($String, baseSystemId, inputSource->getBaseURI());
			$var($InputStream, byteStream, inputSource->getByteStream());
			$var($Reader, charStream, inputSource->getCharacterStream());
			$var($String, encoding, inputSource->getEncoding());
			$var($String, data, inputSource->getStringData());
			$var($XMLInputSource, xmlInputSource, $new($XMLInputSource, publicId, systemId, baseSystemId, true));
			if (charStream != nullptr) {
				xmlInputSource->setCharacterStream(charStream);
			} else if (byteStream != nullptr) {
				xmlInputSource->setByteStream(byteStream);
			} else if (data != nullptr && data->length() != 0) {
				xmlInputSource->setCharacterStream($$new($StringReader, data));
			}
			xmlInputSource->setEncoding(encoding);
			return xmlInputSource;
		}
	}
	return nullptr;
}

$String* DOMEntityResolverWrapper::getType($XMLResourceIdentifier* resourceIdentifier) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($XMLGrammarDescription, resourceIdentifier)) {
		$var($XMLGrammarDescription, desc, $cast($XMLGrammarDescription, resourceIdentifier));
		$init($XMLGrammarDescription);
		if ($nc($XMLGrammarDescription::XML_SCHEMA)->equals($($nc(desc)->getGrammarType()))) {
			return DOMEntityResolverWrapper::XSD_TYPE;
		}
	}
	return DOMEntityResolverWrapper::XML_TYPE;
}

DOMEntityResolverWrapper::DOMEntityResolverWrapper() {
}

void clinit$DOMEntityResolverWrapper($Class* class$) {
	$assignStatic(DOMEntityResolverWrapper::XML_TYPE, "http://www.w3.org/TR/REC-xml"_s);
	$assignStatic(DOMEntityResolverWrapper::XSD_TYPE, "http://www.w3.org/2001/XMLSchema"_s);
}

$Class* DOMEntityResolverWrapper::load$($String* name, bool initialize) {
	$loadClass(DOMEntityResolverWrapper, name, initialize, &_DOMEntityResolverWrapper_ClassInfo_, clinit$DOMEntityResolverWrapper, allocate$DOMEntityResolverWrapper);
	return class$;
}

$Class* DOMEntityResolverWrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com