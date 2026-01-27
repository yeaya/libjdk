#include <javax/xml/transform/sax/SAXSource.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef FEATURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Source = ::javax::xml::transform::Source;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $InputSource = ::org::xml::sax::InputSource;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

$FieldInfo _SAXSource_FieldInfo_[] = {
	{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SAXSource, FEATURE)},
	{"reader", "Lorg/xml/sax/XMLReader;", nullptr, $PRIVATE, $field(SAXSource, reader)},
	{"inputSource", "Lorg/xml/sax/InputSource;", nullptr, $PRIVATE, $field(SAXSource, inputSource)},
	{}
};

$MethodInfo _SAXSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SAXSource, init$, void)},
	{"<init>", "(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $method(SAXSource, init$, void, $XMLReader*, $InputSource*)},
	{"<init>", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $method(SAXSource, init$, void, $InputSource*)},
	{"getInputSource", "()Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(SAXSource, getInputSource, $InputSource*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXSource, getSystemId, $String*)},
	{"getXMLReader", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC, $virtualMethod(SAXSource, getXMLReader, $XMLReader*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXSource, isEmpty, bool)},
	{"setInputSource", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(SAXSource, setInputSource, void, $InputSource*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXSource, setSystemId, void, $String*)},
	{"setXMLReader", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC, $virtualMethod(SAXSource, setXMLReader, void, $XMLReader*)},
	{"sourceToInputSource", "(Ljavax/xml/transform/Source;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC | $STATIC, $staticMethod(SAXSource, sourceToInputSource, $InputSource*, $Source*)},
	{}
};

$ClassInfo _SAXSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.sax.SAXSource",
	"java.lang.Object",
	"javax.xml.transform.Source",
	_SAXSource_FieldInfo_,
	_SAXSource_MethodInfo_
};

$Object* allocate$SAXSource($Class* clazz) {
	return $of($alloc(SAXSource));
}

$String* SAXSource::FEATURE = nullptr;

void SAXSource::init$() {
}

void SAXSource::init$($XMLReader* reader, $InputSource* inputSource) {
	$set(this, reader, reader);
	$set(this, inputSource, inputSource);
}

void SAXSource::init$($InputSource* inputSource) {
	$set(this, inputSource, inputSource);
}

void SAXSource::setXMLReader($XMLReader* reader) {
	$set(this, reader, reader);
}

$XMLReader* SAXSource::getXMLReader() {
	return this->reader;
}

void SAXSource::setInputSource($InputSource* inputSource) {
	$set(this, inputSource, inputSource);
}

$InputSource* SAXSource::getInputSource() {
	return this->inputSource;
}

void SAXSource::setSystemId($String* systemId) {
	if (nullptr == this->inputSource) {
		$set(this, inputSource, $new($InputSource, systemId));
	} else {
		$nc(this->inputSource)->setSystemId(systemId);
	}
}

$String* SAXSource::getSystemId() {
	if (this->inputSource == nullptr) {
		return nullptr;
	} else {
		return $nc(this->inputSource)->getSystemId();
	}
}

$InputSource* SAXSource::sourceToInputSource($Source* source) {
	$init(SAXSource);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(SAXSource, source)) {
		return $nc(($cast(SAXSource, source)))->getInputSource();
	} else if ($instanceOf($StreamSource, source)) {
		$var($StreamSource, ss, $cast($StreamSource, source));
		$var($InputSource, isource, $new($InputSource, $($nc(ss)->getSystemId())));
		isource->setByteStream($($nc(ss)->getInputStream()));
		isource->setCharacterStream($($nc(ss)->getReader()));
		isource->setPublicId($($nc(ss)->getPublicId()));
		return isource;
	} else {
		return nullptr;
	}
}

bool SAXSource::isEmpty() {
	bool var$0 = getSystemId() == nullptr;
	return var$0 && (this->inputSource == nullptr || $nc(this->inputSource)->isEmpty());
}

SAXSource::SAXSource() {
}

void clinit$SAXSource($Class* class$) {
	$assignStatic(SAXSource::FEATURE, "http://javax.xml.transform.sax.SAXSource/feature"_s);
}

$Class* SAXSource::load$($String* name, bool initialize) {
	$loadClass(SAXSource, name, initialize, &_SAXSource_ClassInfo_, clinit$SAXSource, allocate$SAXSource);
	return class$;
}

$Class* SAXSource::class$ = nullptr;

			} // sax
		} // transform
	} // xml
} // javax