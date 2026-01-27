#include <javax/xml/transform/stax/StAXResult.h>

#include <java/lang/UnsupportedOperationException.h>
#include <javax/xml/stream/XMLEventWriter.h>
#include <javax/xml/stream/XMLStreamWriter.h>
#include <jcpp.h>

#undef FEATURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $XMLEventWriter = ::javax::xml::stream::XMLEventWriter;
using $XMLStreamWriter = ::javax::xml::stream::XMLStreamWriter;

namespace javax {
	namespace xml {
		namespace transform {
			namespace stax {

$FieldInfo _StAXResult_FieldInfo_[] = {
	{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StAXResult, FEATURE)},
	{"xmlEventWriter", "Ljavax/xml/stream/XMLEventWriter;", nullptr, $PRIVATE, $field(StAXResult, xmlEventWriter)},
	{"xmlStreamWriter", "Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PRIVATE, $field(StAXResult, xmlStreamWriter)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StAXResult, systemId)},
	{}
};

$MethodInfo _StAXResult_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLEventWriter;)V", nullptr, $PUBLIC, $method(StAXResult, init$, void, $XMLEventWriter*)},
	{"<init>", "(Ljavax/xml/stream/XMLStreamWriter;)V", nullptr, $PUBLIC, $method(StAXResult, init$, void, $XMLStreamWriter*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXResult, getSystemId, $String*)},
	{"getXMLEventWriter", "()Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC, $virtualMethod(StAXResult, getXMLEventWriter, $XMLEventWriter*)},
	{"getXMLStreamWriter", "()Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC, $virtualMethod(StAXResult, getXMLStreamWriter, $XMLStreamWriter*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StAXResult, setSystemId, void, $String*)},
	{}
};

$ClassInfo _StAXResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.stax.StAXResult",
	"java.lang.Object",
	"javax.xml.transform.Result",
	_StAXResult_FieldInfo_,
	_StAXResult_MethodInfo_
};

$Object* allocate$StAXResult($Class* clazz) {
	return $of($alloc(StAXResult));
}

$String* StAXResult::FEATURE = nullptr;

void StAXResult::init$($XMLEventWriter* xmlEventWriter) {
	$set(this, xmlEventWriter, nullptr);
	$set(this, xmlStreamWriter, nullptr);
	$set(this, systemId, nullptr);
	if (xmlEventWriter == nullptr) {
		$throwNew($IllegalArgumentException, "StAXResult(XMLEventWriter) with XMLEventWriter == null"_s);
	}
	$set(this, xmlEventWriter, xmlEventWriter);
}

void StAXResult::init$($XMLStreamWriter* xmlStreamWriter) {
	$set(this, xmlEventWriter, nullptr);
	$set(this, xmlStreamWriter, nullptr);
	$set(this, systemId, nullptr);
	if (xmlStreamWriter == nullptr) {
		$throwNew($IllegalArgumentException, "StAXResult(XMLStreamWriter) with XMLStreamWriter == null"_s);
	}
	$set(this, xmlStreamWriter, xmlStreamWriter);
}

$XMLEventWriter* StAXResult::getXMLEventWriter() {
	return this->xmlEventWriter;
}

$XMLStreamWriter* StAXResult::getXMLStreamWriter() {
	return this->xmlStreamWriter;
}

void StAXResult::setSystemId($String* systemId) {
	$throwNew($UnsupportedOperationException, "StAXResult#setSystemId(systemId) cannot set the system identifier for a StAXResult"_s);
}

$String* StAXResult::getSystemId() {
	return nullptr;
}

StAXResult::StAXResult() {
}

void clinit$StAXResult($Class* class$) {
	$assignStatic(StAXResult::FEATURE, "http://javax.xml.transform.stax.StAXResult/feature"_s);
}

$Class* StAXResult::load$($String* name, bool initialize) {
	$loadClass(StAXResult, name, initialize, &_StAXResult_ClassInfo_, clinit$StAXResult, allocate$StAXResult);
	return class$;
}

$Class* StAXResult::class$ = nullptr;

			} // stax
		} // transform
	} // xml
} // javax