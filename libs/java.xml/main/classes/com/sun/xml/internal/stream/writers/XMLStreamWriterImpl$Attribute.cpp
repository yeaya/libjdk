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

void XMLStreamWriterImpl$Attribute::init$($XMLStreamWriterImpl* this$0, $String* value) {
	$set(this, this$0, this$0);
	$QName::init$();
	$set(this, value, value);
}

XMLStreamWriterImpl$Attribute::XMLStreamWriterImpl$Attribute() {
}

$Class* XMLStreamWriterImpl$Attribute::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLStreamWriterImpl$Attribute, this$0)},
		{"value", "Ljava/lang/String;", nullptr, 0, $field(XMLStreamWriterImpl$Attribute, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;Ljava/lang/String;)V", nullptr, 0, $method(XMLStreamWriterImpl$Attribute, init$, void, $XMLStreamWriterImpl*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$Attribute", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "Attribute", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$Attribute",
		"com.sun.org.apache.xerces.internal.xni.QName",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl"
	};
	$loadClass(XMLStreamWriterImpl$Attribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLStreamWriterImpl$Attribute);
	});
	return class$;
}

$Class* XMLStreamWriterImpl$Attribute::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com