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

$Class* XMLStreamWriterBase::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"writeStartDocument", "(Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriterBase, writeStartDocument, void, $String*, $String*, bool, bool), "javax.xml.stream.XMLStreamException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.xml.internal.stream.writers.XMLStreamWriterBase",
		nullptr,
		"javax.xml.stream.XMLStreamWriter",
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLStreamWriterBase, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLStreamWriterBase);
	});
	return class$;
}

$Class* XMLStreamWriterBase::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com