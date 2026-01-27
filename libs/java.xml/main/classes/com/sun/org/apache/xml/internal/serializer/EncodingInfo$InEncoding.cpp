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

$MethodInfo _EncodingInfo$InEncoding_MethodInfo_[] = {
	{"isInEncoding", "(C)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EncodingInfo$InEncoding, isInEncoding, bool, char16_t)},
	{"isInEncoding", "(CC)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EncodingInfo$InEncoding, isInEncoding, bool, char16_t, char16_t)},
	{}
};

$InnerClassInfo _EncodingInfo$InEncoding_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.EncodingInfo$InEncoding", "com.sun.org.apache.xml.internal.serializer.EncodingInfo", "InEncoding", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _EncodingInfo$InEncoding_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.EncodingInfo$InEncoding",
	nullptr,
	nullptr,
	nullptr,
	_EncodingInfo$InEncoding_MethodInfo_,
	nullptr,
	nullptr,
	_EncodingInfo$InEncoding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.EncodingInfo"
};

$Object* allocate$EncodingInfo$InEncoding($Class* clazz) {
	return $of($alloc(EncodingInfo$InEncoding));
}

$Class* EncodingInfo$InEncoding::load$($String* name, bool initialize) {
	$loadClass(EncodingInfo$InEncoding, name, initialize, &_EncodingInfo$InEncoding_ClassInfo_, allocate$EncodingInfo$InEncoding);
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