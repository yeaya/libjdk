#include <com/sun/xml/internal/stream/XMLBufferListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$Class* XMLBufferListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"refresh", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLBufferListener, refresh, void)},
		{"refresh", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLBufferListener, refresh, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.xml.internal.stream.XMLBufferListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLBufferListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLBufferListener);
	});
	return class$;
}

$Class* XMLBufferListener::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com