#include <javax/xml/stream/XMLReporter.h>
#include <javax/xml/stream/Location.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Location = ::javax::xml::stream::Location;

namespace javax {
	namespace xml {
		namespace stream {

$Class* XMLReporter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"report", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljavax/xml/stream/Location;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReporter, report, void, $String*, $String*, Object$*, $Location*), "javax.xml.stream.XMLStreamException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.XMLReporter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLReporter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLReporter);
	});
	return class$;
}

$Class* XMLReporter::class$ = nullptr;

		} // stream
	} // xml
} // javax