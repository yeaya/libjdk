#include <javax/xml/stream/events/DTD.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DTD

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* DTD::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDocumentTypeDeclaration", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTD, getDocumentTypeDeclaration, $String*)},
		{"getEntities", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/stream/events/EntityDeclaration;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DTD, getEntities, $List*)},
		{"getNotations", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/stream/events/NotationDeclaration;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DTD, getNotations, $List*)},
		{"getProcessedDTD", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTD, getProcessedDTD, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.DTD",
		nullptr,
		"javax.xml.stream.events.XMLEvent",
		nullptr,
		methodInfos$$
	};
	$loadClass(DTD, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTD);
	});
	return class$;
}

$Class* DTD::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax