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

$MethodInfo _RawCharacterHandler_MethodInfo_[] = {
	{"charactersRaw", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawCharacterHandler, charactersRaw, void, $chars*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _RawCharacterHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.utils.RawCharacterHandler",
	nullptr,
	nullptr,
	nullptr,
	_RawCharacterHandler_MethodInfo_
};

$Object* allocate$RawCharacterHandler($Class* clazz) {
	return $of($alloc(RawCharacterHandler));
}

$Class* RawCharacterHandler::load$($String* name, bool initialize) {
	$loadClass(RawCharacterHandler, name, initialize, &_RawCharacterHandler_ClassInfo_, allocate$RawCharacterHandler);
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