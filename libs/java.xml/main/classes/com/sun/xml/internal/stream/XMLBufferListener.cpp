#include <com/sun/xml/internal/stream/XMLBufferListener.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$MethodInfo _XMLBufferListener_MethodInfo_[] = {
	{"refresh", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLBufferListener, refresh, void)},
	{"refresh", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLBufferListener, refresh, void, int32_t)},
	{}
};

$ClassInfo _XMLBufferListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.xml.internal.stream.XMLBufferListener",
	nullptr,
	nullptr,
	nullptr,
	_XMLBufferListener_MethodInfo_
};

$Object* allocate$XMLBufferListener($Class* clazz) {
	return $of($alloc(XMLBufferListener));
}

$Class* XMLBufferListener::load$($String* name, bool initialize) {
	$loadClass(XMLBufferListener, name, initialize, &_XMLBufferListener_ClassInfo_, allocate$XMLBufferListener);
	return class$;
}

$Class* XMLBufferListener::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com