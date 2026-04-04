#include <com/sun/org/apache/xml/internal/utils/RawCharacterHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$Class* RawCharacterHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"charactersRaw", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawCharacterHandler, charactersRaw, void, $chars*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.utils.RawCharacterHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RawCharacterHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RawCharacterHandler);
	});
	return class$;
}

$Class* RawCharacterHandler::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com