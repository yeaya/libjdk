#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState.h>

#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl.h>
#include <jcpp.h>

using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLStreamWriterImpl = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$FieldInfo _XMLStreamWriterImpl$ElementState_FieldInfo_[] = {
	{"this$0", "Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLStreamWriterImpl$ElementState, this$0)},
	{"isEmpty", "Z", nullptr, $PUBLIC, $field(XMLStreamWriterImpl$ElementState, isEmpty)},
	{}
};

$MethodInfo _XMLStreamWriterImpl$ElementState_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;)V", nullptr, $PUBLIC, $method(XMLStreamWriterImpl$ElementState, init$, void, $XMLStreamWriterImpl*)},
	{"<init>", "(Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLStreamWriterImpl$ElementState, init$, void, $XMLStreamWriterImpl*, $String*, $String*, $String*, $String*)},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$ElementState, setValues, void, $String*, $String*, $String*, $String*, bool)},
	{}
};

$InnerClassInfo _XMLStreamWriterImpl$ElementState_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementState", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "ElementState", 0},
	{}
};

$ClassInfo _XMLStreamWriterImpl$ElementState_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementState",
	"com.sun.org.apache.xerces.internal.xni.QName",
	nullptr,
	_XMLStreamWriterImpl$ElementState_FieldInfo_,
	_XMLStreamWriterImpl$ElementState_MethodInfo_,
	nullptr,
	nullptr,
	_XMLStreamWriterImpl$ElementState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl"
};

$Object* allocate$XMLStreamWriterImpl$ElementState($Class* clazz) {
	return $of($alloc(XMLStreamWriterImpl$ElementState));
}

void XMLStreamWriterImpl$ElementState::init$($XMLStreamWriterImpl* this$0) {
	$set(this, this$0, this$0);
	$QName::init$();
	this->isEmpty = false;
}

void XMLStreamWriterImpl$ElementState::init$($XMLStreamWriterImpl* this$0, $String* prefix, $String* localpart, $String* rawname, $String* uri) {
	$set(this, this$0, this$0);
	$QName::init$(prefix, localpart, rawname, uri);
	this->isEmpty = false;
}

void XMLStreamWriterImpl$ElementState::setValues($String* prefix, $String* localpart, $String* rawname, $String* uri, bool isEmpty) {
	$QName::setValues(prefix, localpart, rawname, uri);
	this->isEmpty = isEmpty;
}

XMLStreamWriterImpl$ElementState::XMLStreamWriterImpl$ElementState() {
}

$Class* XMLStreamWriterImpl$ElementState::load$($String* name, bool initialize) {
	$loadClass(XMLStreamWriterImpl$ElementState, name, initialize, &_XMLStreamWriterImpl$ElementState_ClassInfo_, allocate$XMLStreamWriterImpl$ElementState);
	return class$;
}

$Class* XMLStreamWriterImpl$ElementState::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com