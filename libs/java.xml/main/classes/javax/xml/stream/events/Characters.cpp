#include <javax/xml/stream/events/Characters.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _Characters_MethodInfo_[] = {
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Characters, getData, $String*)},
	{"isCData", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Characters, isCData, bool)},
	{"isIgnorableWhiteSpace", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Characters, isIgnorableWhiteSpace, bool)},
	{"isWhiteSpace", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Characters, isWhiteSpace, bool)},
	{}
};

$ClassInfo _Characters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.Characters",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_Characters_MethodInfo_
};

$Object* allocate$Characters($Class* clazz) {
	return $of($alloc(Characters));
}

$Class* Characters::load$($String* name, bool initialize) {
	$loadClass(Characters, name, initialize, &_Characters_ClassInfo_, allocate$Characters);
	return class$;
}

$Class* Characters::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax