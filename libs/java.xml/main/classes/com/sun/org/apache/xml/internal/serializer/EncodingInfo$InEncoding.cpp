#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo$InEncoding.h>
#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$Class* EncodingInfo$InEncoding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isInEncoding", "(C)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EncodingInfo$InEncoding, isInEncoding, bool, char16_t)},
		{"isInEncoding", "(CC)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EncodingInfo$InEncoding, isInEncoding, bool, char16_t, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.serializer.EncodingInfo$InEncoding", "com.sun.org.apache.xml.internal.serializer.EncodingInfo", "InEncoding", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.serializer.EncodingInfo$InEncoding",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.serializer.EncodingInfo"
	};
	$loadClass(EncodingInfo$InEncoding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EncodingInfo$InEncoding);
	});
	return class$;
}

$Class* EncodingInfo$InEncoding::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com