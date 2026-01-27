#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputSource = ::org::xml::sax::InputSource;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$FieldInfo _XMLInputSource_FieldInfo_[] = {
	{"fPublicId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLInputSource, fPublicId)},
	{"fSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLInputSource, fSystemId)},
	{"fBaseSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLInputSource, fBaseSystemId)},
	{"fByteStream", "Ljava/io/InputStream;", nullptr, $PROTECTED, $field(XMLInputSource, fByteStream)},
	{"fCharStream", "Ljava/io/Reader;", nullptr, $PROTECTED, $field(XMLInputSource, fCharStream)},
	{"fEncoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLInputSource, fEncoding)},
	{"fIsCreatedByResolver", "Z", nullptr, 0, $field(XMLInputSource, fIsCreatedByResolver)},
	{}
};

$MethodInfo _XMLInputSource_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(XMLInputSource, init$, void, $String*, $String*, $String*, bool)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)V", nullptr, $PUBLIC, $method(XMLInputSource, init$, void, $XMLResourceIdentifier*)},
	{"<init>", "(Lorg/xml/sax/InputSource;Z)V", nullptr, $PUBLIC, $method(XMLInputSource, init$, void, $InputSource*, bool)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLInputSource, init$, void, $String*, $String*, $String*, $InputStream*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/io/Reader;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLInputSource, init$, void, $String*, $String*, $String*, $Reader*, $String*)},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, getBaseSystemId, $String*)},
	{"getByteStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, getByteStream, $InputStream*)},
	{"getCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, getCharacterStream, $Reader*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, getEncoding, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, getSystemId, $String*)},
	{"isCreatedByResolver", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, isCreatedByResolver, bool)},
	{"setBaseSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, setBaseSystemId, void, $String*)},
	{"setByteStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, setByteStream, void, $InputStream*)},
	{"setCharacterStream", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, setCharacterStream, void, $Reader*)},
	{"setCreatedByResolver", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, setCreatedByResolver, void, bool)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, setEncoding, void, $String*)},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, setPublicId, void, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLInputSource, setSystemId, void, $String*)},
	{}
};

$ClassInfo _XMLInputSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource",
	"java.lang.Object",
	nullptr,
	_XMLInputSource_FieldInfo_,
	_XMLInputSource_MethodInfo_
};

$Object* allocate$XMLInputSource($Class* clazz) {
	return $of($alloc(XMLInputSource));
}

void XMLInputSource::init$($String* publicId, $String* systemId, $String* baseSystemId, bool isCreatedByResolver) {
	this->fIsCreatedByResolver = false;
	$set(this, fPublicId, publicId);
	$set(this, fSystemId, systemId);
	$set(this, fBaseSystemId, baseSystemId);
	this->fIsCreatedByResolver = isCreatedByResolver;
}

void XMLInputSource::init$($XMLResourceIdentifier* resourceIdentifier) {
	this->fIsCreatedByResolver = false;
	$set(this, fPublicId, $nc(resourceIdentifier)->getPublicId());
	$set(this, fSystemId, resourceIdentifier->getLiteralSystemId());
	$set(this, fBaseSystemId, resourceIdentifier->getBaseSystemId());
}

void XMLInputSource::init$($InputSource* inputSource, bool isCreatedByResolver) {
	this->fIsCreatedByResolver = false;
	$set(this, fPublicId, $nc(inputSource)->getPublicId());
	$set(this, fSystemId, inputSource->getSystemId());
	$set(this, fByteStream, inputSource->getByteStream());
	$set(this, fCharStream, inputSource->getCharacterStream());
	$set(this, fEncoding, inputSource->getEncoding());
	this->fIsCreatedByResolver = isCreatedByResolver;
}

void XMLInputSource::init$($String* publicId, $String* systemId, $String* baseSystemId, $InputStream* byteStream, $String* encoding) {
	this->fIsCreatedByResolver = false;
	$set(this, fPublicId, publicId);
	$set(this, fSystemId, systemId);
	$set(this, fBaseSystemId, baseSystemId);
	$set(this, fByteStream, byteStream);
	$set(this, fEncoding, encoding);
}

void XMLInputSource::init$($String* publicId, $String* systemId, $String* baseSystemId, $Reader* charStream, $String* encoding) {
	this->fIsCreatedByResolver = false;
	$set(this, fPublicId, publicId);
	$set(this, fSystemId, systemId);
	$set(this, fBaseSystemId, baseSystemId);
	$set(this, fCharStream, charStream);
	$set(this, fEncoding, encoding);
}

void XMLInputSource::setPublicId($String* publicId) {
	$set(this, fPublicId, publicId);
}

$String* XMLInputSource::getPublicId() {
	return this->fPublicId;
}

void XMLInputSource::setSystemId($String* systemId) {
	$set(this, fSystemId, systemId);
}

$String* XMLInputSource::getSystemId() {
	return this->fSystemId;
}

void XMLInputSource::setBaseSystemId($String* baseSystemId) {
	$set(this, fBaseSystemId, baseSystemId);
}

$String* XMLInputSource::getBaseSystemId() {
	return this->fBaseSystemId;
}

void XMLInputSource::setByteStream($InputStream* byteStream) {
	$set(this, fByteStream, byteStream);
}

$InputStream* XMLInputSource::getByteStream() {
	return this->fByteStream;
}

void XMLInputSource::setCharacterStream($Reader* charStream) {
	$set(this, fCharStream, charStream);
}

$Reader* XMLInputSource::getCharacterStream() {
	return this->fCharStream;
}

void XMLInputSource::setEncoding($String* encoding) {
	$set(this, fEncoding, encoding);
}

$String* XMLInputSource::getEncoding() {
	return this->fEncoding;
}

void XMLInputSource::setCreatedByResolver(bool createdByResolver) {
	this->fIsCreatedByResolver = createdByResolver;
}

bool XMLInputSource::isCreatedByResolver() {
	return this->fIsCreatedByResolver;
}

XMLInputSource::XMLInputSource() {
}

$Class* XMLInputSource::load$($String* name, bool initialize) {
	$loadClass(XMLInputSource, name, initialize, &_XMLInputSource_ClassInfo_, allocate$XMLInputSource);
	return class$;
}

$Class* XMLInputSource::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com