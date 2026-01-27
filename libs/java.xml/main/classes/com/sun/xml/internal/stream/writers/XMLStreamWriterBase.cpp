#include <com/sun/xml/internal/stream/writers/XMLStreamWriterBase.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$MethodInfo _XMLStreamWriterBase_MethodInfo_[] = {
	{"writeStartDocument", "(Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriterBase, writeStartDocument, void, $String*, $String*, bool, bool), "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLStreamWriterBase_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterBase",
	nullptr,
	"javax.xml.stream.XMLStreamWriter",
	nullptr,
	_XMLStreamWriterBase_MethodInfo_
};

$Object* allocate$XMLStreamWriterBase($Class* clazz) {
	return $of($alloc(XMLStreamWriterBase));
}

$Class* XMLStreamWriterBase::load$($String* name, bool initialize) {
	$loadClass(XMLStreamWriterBase, name, initialize, &_XMLStreamWriterBase_ClassInfo_, allocate$XMLStreamWriterBase);
	return class$;
}

$Class* XMLStreamWriterBase::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com