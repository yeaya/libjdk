#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$Attribute.h>

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

$FieldInfo _XMLStreamWriterImpl$Attribute_FieldInfo_[] = {
	{"this$0", "Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLStreamWriterImpl$Attribute, this$0)},
	{"value", "Ljava/lang/String;", nullptr, 0, $field(XMLStreamWriterImpl$Attribute, value)},
	{}
};

$MethodInfo _XMLStreamWriterImpl$Attribute_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;Ljava/lang/String;)V", nullptr, 0, $method(XMLStreamWriterImpl$Attribute, init$, void, $XMLStreamWriterImpl*, $String*)},
	{}
};

$InnerClassInfo _XMLStreamWriterImpl$Attribute_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$Attribute", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "Attribute", 0},
	{}
};

$ClassInfo _XMLStreamWriterImpl$Attribute_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$Attribute",
	"com.sun.org.apache.xerces.internal.xni.QName",
	nullptr,
	_XMLStreamWriterImpl$Attribute_FieldInfo_,
	_XMLStreamWriterImpl$Attribute_MethodInfo_,
	nullptr,
	nullptr,
	_XMLStreamWriterImpl$Attribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl"
};

$Object* allocate$XMLStreamWriterImpl$Attribute($Class* clazz) {
	return $of($alloc(XMLStreamWriterImpl$Attribute));
}

void XMLStreamWriterImpl$Attribute::init$($XMLStreamWriterImpl* this$0, $String* value) {
	$set(this, this$0, this$0);
	$QName::init$();
	$set(this, value, value);
}

XMLStreamWriterImpl$Attribute::XMLStreamWriterImpl$Attribute() {
}

$Class* XMLStreamWriterImpl$Attribute::load$($String* name, bool initialize) {
	$loadClass(XMLStreamWriterImpl$Attribute, name, initialize, &_XMLStreamWriterImpl$Attribute_ClassInfo_, allocate$XMLStreamWriterImpl$Attribute);
	return class$;
}

$Class* XMLStreamWriterImpl$Attribute::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com