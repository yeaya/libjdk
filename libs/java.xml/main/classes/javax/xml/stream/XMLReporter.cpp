#include <javax/xml/stream/XMLReporter.h>

#include <javax/xml/stream/Location.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Location = ::javax::xml::stream::Location;

namespace javax {
	namespace xml {
		namespace stream {

$MethodInfo _XMLReporter_MethodInfo_[] = {
	{"report", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljavax/xml/stream/Location;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReporter, report, void, $String*, $String*, Object$*, $Location*), "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLReporter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.XMLReporter",
	nullptr,
	nullptr,
	nullptr,
	_XMLReporter_MethodInfo_
};

$Object* allocate$XMLReporter($Class* clazz) {
	return $of($alloc(XMLReporter));
}

$Class* XMLReporter::load$($String* name, bool initialize) {
	$loadClass(XMLReporter, name, initialize, &_XMLReporter_ClassInfo_, allocate$XMLReporter);
	return class$;
}

$Class* XMLReporter::class$ = nullptr;

		} // stream
	} // xml
} // javax