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
		this->inputSource->setSystemId(systemId);
	}
}

$String* SAXSource::getSystemId() {
	if (this->inputSource == nullptr) {
		return nullptr;
	} else {
		return this->inputSource->getSystemId();
	}
}

$InputSource* SAXSource::sourceToInputSource($Source* source) {
	$init(SAXSource);
	$useLocalObjectStack();
	if ($instanceOf(SAXSource, source)) {
		return $cast(SAXSource, source)->getInputSource();
	} else if ($instanceOf($StreamSource, source)) {
		$var($StreamSource, ss, $cast($StreamSource, source));
		$var($InputSource, isource, $new($InputSource, $(ss->getSystemId())));
		isource->setByteStream($(ss->getInputStream()));
		isource->setCharacterStream($(ss->getReader()));
		isource->setPublicId($(ss->getPublicId()));
		return isource;
	} else {
		return nullptr;
	}
}

bool SAXSource::isEmpty() {
	bool var$0 = getSystemId() == nullptr;
	return var$0 && (this->inputSource == nullptr || this->inputSource->isEmpty());
}

SAXSource::SAXSource() {
}

void SAXSource::clinit$($Class* clazz) {
	$assignStatic(SAXSource::FEATURE, "http://javax.xml.transform.sax.SAXSource/feature"_s);
}

$Class* SAXSource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SAXSource, FEATURE)},
		{"reader", "Lorg/xml/sax/XMLReader;", nullptr, $PRIVATE, $field(SAXSource, reader)},
		{"inputSource", "Lorg/xml/sax/InputSource;", nullptr, $PRIVATE, $field(SAXSource, inputSource)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.transform.sax.SAXSource",
		"java.lang.Object",
		"javax.xml.transform.Source",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SAXSource, name, initialize, &classInfo$$, SAXSource::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SAXSource);
	});
	return class$;
}

$Class* SAXSource::class$ = nullptr;

			} // sax
		} // transform
	} // xml
} // javax