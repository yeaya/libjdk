#include <com/sun/xml/internal/stream/StaxXMLInputSource.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <jcpp.h>

using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _StaxXMLInputSource_FieldInfo_[] = {
	{"fStreamReader", "Ljavax/xml/stream/XMLStreamReader;", nullptr, 0, $field(StaxXMLInputSource, fStreamReader)},
	{"fEventReader", "Ljavax/xml/stream/XMLEventReader;", nullptr, 0, $field(StaxXMLInputSource, fEventReader)},
	{"fInputSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, 0, $field(StaxXMLInputSource, fInputSource)},
	{"fIsCreatedByResolver", "Z", nullptr, 0, $field(StaxXMLInputSource, fIsCreatedByResolver)},
	{}
};

$MethodInfo _StaxXMLInputSource_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;Z)V", nullptr, $PUBLIC, $method(StaxXMLInputSource, init$, void, $XMLStreamReader*, bool)},
	{"<init>", "(Ljavax/xml/stream/XMLEventReader;Z)V", nullptr, $PUBLIC, $method(StaxXMLInputSource, init$, void, $XMLEventReader*, bool)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Z)V", nullptr, $PUBLIC, $method(StaxXMLInputSource, init$, void, $XMLInputSource*, bool)},
	{"getXMLEventReader", "()Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, $virtualMethod(StaxXMLInputSource, getXMLEventReader, $XMLEventReader*)},
	{"getXMLInputSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC, $virtualMethod(StaxXMLInputSource, getXMLInputSource, $XMLInputSource*)},
	{"getXMLStreamReader", "()Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, $virtualMethod(StaxXMLInputSource, getXMLStreamReader, $XMLStreamReader*)},
	{"hasXMLStreamOrXMLEventReader", "()Z", nullptr, $PUBLIC, $virtualMethod(StaxXMLInputSource, hasXMLStreamOrXMLEventReader, bool)},
	{"isCreatedByResolver", "()Z", nullptr, $PUBLIC, $virtualMethod(StaxXMLInputSource, isCreatedByResolver, bool)},
	{}
};

$ClassInfo _StaxXMLInputSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.StaxXMLInputSource",
	"java.lang.Object",
	nullptr,
	_StaxXMLInputSource_FieldInfo_,
	_StaxXMLInputSource_MethodInfo_
};

$Object* allocate$StaxXMLInputSource($Class* clazz) {
	return $of($alloc(StaxXMLInputSource));
}

void StaxXMLInputSource::init$($XMLStreamReader* streamReader, bool byResolver) {
	this->fIsCreatedByResolver = false;
	$set(this, fStreamReader, streamReader);
}

void StaxXMLInputSource::init$($XMLEventReader* eventReader, bool byResolver) {
	this->fIsCreatedByResolver = false;
	$set(this, fEventReader, eventReader);
}

void StaxXMLInputSource::init$($XMLInputSource* inputSource, bool byResolver) {
	this->fIsCreatedByResolver = false;
	$set(this, fInputSource, inputSource);
	this->fIsCreatedByResolver = byResolver;
}

$XMLStreamReader* StaxXMLInputSource::getXMLStreamReader() {
	return this->fStreamReader;
}

$XMLEventReader* StaxXMLInputSource::getXMLEventReader() {
	return this->fEventReader;
}

$XMLInputSource* StaxXMLInputSource::getXMLInputSource() {
	return this->fInputSource;
}

bool StaxXMLInputSource::hasXMLStreamOrXMLEventReader() {
	return (this->fStreamReader == nullptr) && (this->fEventReader == nullptr) ? false : true;
}

bool StaxXMLInputSource::isCreatedByResolver() {
	return this->fIsCreatedByResolver;
}

StaxXMLInputSource::StaxXMLInputSource() {
}

$Class* StaxXMLInputSource::load$($String* name, bool initialize) {
	$loadClass(StaxXMLInputSource, name, initialize, &_StaxXMLInputSource_ClassInfo_, allocate$StaxXMLInputSource);
	return class$;
}

$Class* StaxXMLInputSource::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com