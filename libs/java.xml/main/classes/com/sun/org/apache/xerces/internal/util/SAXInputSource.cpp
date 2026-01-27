#include <com/sun/org/apache/xerces/internal/util/SAXInputSource.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputSource = ::org::xml::sax::InputSource;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _SAXInputSource_FieldInfo_[] = {
	{"fXMLReader", "Lorg/xml/sax/XMLReader;", nullptr, $PRIVATE, $field(SAXInputSource, fXMLReader)},
	{"fInputSource", "Lorg/xml/sax/InputSource;", nullptr, $PRIVATE, $field(SAXInputSource, fInputSource)},
	{}
};

$MethodInfo _SAXInputSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SAXInputSource, init$, void)},
	{"<init>", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $method(SAXInputSource, init$, void, $InputSource*)},
	{"<init>", "(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $method(SAXInputSource, init$, void, $XMLReader*, $InputSource*)},
	{"getInputSource", "()Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $method(SAXInputSource, getInputSource, $InputSource*)},
	{"getXMLReader", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC, $method(SAXInputSource, getXMLReader, $XMLReader*)},
	{"setByteStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $virtualMethod(SAXInputSource, setByteStream, void, $InputStream*)},
	{"setCharacterStream", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $virtualMethod(SAXInputSource, setCharacterStream, void, $Reader*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXInputSource, setEncoding, void, $String*)},
	{"setInputSource", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $method(SAXInputSource, setInputSource, void, $InputSource*)},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXInputSource, setPublicId, void, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXInputSource, setSystemId, void, $String*)},
	{"setXMLReader", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC, $method(SAXInputSource, setXMLReader, void, $XMLReader*)},
	{}
};

$ClassInfo _SAXInputSource_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.SAXInputSource",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource",
	nullptr,
	_SAXInputSource_FieldInfo_,
	_SAXInputSource_MethodInfo_
};

$Object* allocate$SAXInputSource($Class* clazz) {
	return $of($alloc(SAXInputSource));
}

void SAXInputSource::init$() {
	SAXInputSource::init$(nullptr);
}

void SAXInputSource::init$($InputSource* inputSource) {
	SAXInputSource::init$(nullptr, inputSource);
}

void SAXInputSource::init$($XMLReader* reader, $InputSource* inputSource) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, inputSource != nullptr ? $nc(inputSource)->getPublicId() : ($String*)nullptr);
	$XMLInputSource::init$(var$0, inputSource != nullptr ? $(inputSource->getSystemId()) : ($String*)nullptr, nullptr, false);
	if (inputSource != nullptr) {
		setByteStream($(inputSource->getByteStream()));
		setCharacterStream($(inputSource->getCharacterStream()));
		setEncoding($(inputSource->getEncoding()));
	}
	$set(this, fInputSource, inputSource);
	$set(this, fXMLReader, reader);
}

void SAXInputSource::setXMLReader($XMLReader* reader) {
	$set(this, fXMLReader, reader);
}

$XMLReader* SAXInputSource::getXMLReader() {
	return this->fXMLReader;
}

void SAXInputSource::setInputSource($InputSource* inputSource) {
	$useLocalCurrentObjectStackCache();
	if (inputSource != nullptr) {
		setPublicId($(inputSource->getPublicId()));
		setSystemId($(inputSource->getSystemId()));
		setByteStream($(inputSource->getByteStream()));
		setCharacterStream($(inputSource->getCharacterStream()));
		setEncoding($(inputSource->getEncoding()));
	} else {
		setPublicId(nullptr);
		setSystemId(nullptr);
		setByteStream(nullptr);
		setCharacterStream(nullptr);
		setEncoding(nullptr);
	}
	$set(this, fInputSource, inputSource);
}

$InputSource* SAXInputSource::getInputSource() {
	return this->fInputSource;
}

void SAXInputSource::setPublicId($String* publicId) {
	$XMLInputSource::setPublicId(publicId);
	if (this->fInputSource == nullptr) {
		$set(this, fInputSource, $new($InputSource));
	}
	$nc(this->fInputSource)->setPublicId(publicId);
}

void SAXInputSource::setSystemId($String* systemId) {
	$XMLInputSource::setSystemId(systemId);
	if (this->fInputSource == nullptr) {
		$set(this, fInputSource, $new($InputSource));
	}
	$nc(this->fInputSource)->setSystemId(systemId);
}

void SAXInputSource::setByteStream($InputStream* byteStream) {
	$XMLInputSource::setByteStream(byteStream);
	if (this->fInputSource == nullptr) {
		$set(this, fInputSource, $new($InputSource));
	}
	$nc(this->fInputSource)->setByteStream(byteStream);
}

void SAXInputSource::setCharacterStream($Reader* charStream) {
	$XMLInputSource::setCharacterStream(charStream);
	if (this->fInputSource == nullptr) {
		$set(this, fInputSource, $new($InputSource));
	}
	$nc(this->fInputSource)->setCharacterStream(charStream);
}

void SAXInputSource::setEncoding($String* encoding) {
	$XMLInputSource::setEncoding(encoding);
	if (this->fInputSource == nullptr) {
		$set(this, fInputSource, $new($InputSource));
	}
	$nc(this->fInputSource)->setEncoding(encoding);
}

SAXInputSource::SAXInputSource() {
}

$Class* SAXInputSource::load$($String* name, bool initialize) {
	$loadClass(SAXInputSource, name, initialize, &_SAXInputSource_ClassInfo_, allocate$SAXInputSource);
	return class$;
}

$Class* SAXInputSource::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com