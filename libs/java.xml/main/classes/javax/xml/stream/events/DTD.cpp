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

$MethodInfo _DTD_MethodInfo_[] = {
	{"getDocumentTypeDeclaration", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTD, getDocumentTypeDeclaration, $String*)},
	{"getEntities", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/stream/events/EntityDeclaration;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DTD, getEntities, $List*)},
	{"getNotations", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/stream/events/NotationDeclaration;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DTD, getNotations, $List*)},
	{"getProcessedDTD", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTD, getProcessedDTD, $Object*)},
	{}
};

$ClassInfo _DTD_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.DTD",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_DTD_MethodInfo_
};

$Object* allocate$DTD($Class* clazz) {
	return $of($alloc(DTD));
}

$Class* DTD::load$($String* name, bool initialize) {
	$loadClass(DTD, name, initialize, &_DTD_ClassInfo_, allocate$DTD);
	return class$;
}

$Class* DTD::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax