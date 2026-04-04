#include <com/sun/xml/internal/stream/writers/XMLOutputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

void XMLOutputSource::init$() {
}

XMLOutputSource::XMLOutputSource() {
}

$Class* XMLOutputSource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLOutputSource, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.xml.internal.stream.writers.XMLOutputSource",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLOutputSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLOutputSource);
	});
	return class$;
}

$Class* XMLOutputSource::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com