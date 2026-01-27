#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_en.h>

#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages.h>
#include <jcpp.h>

using $SerializerMessages = ::com::sun::org::apache::xml::internal::serializer::utils::SerializerMessages;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

$MethodInfo _SerializerMessages_en_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SerializerMessages_en, init$, void)},
	{}
};

$ClassInfo _SerializerMessages_en_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_en",
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages",
	nullptr,
	nullptr,
	_SerializerMessages_en_MethodInfo_
};

$Object* allocate$SerializerMessages_en($Class* clazz) {
	return $of($alloc(SerializerMessages_en));
}

void SerializerMessages_en::init$() {
	$SerializerMessages::init$();
}

SerializerMessages_en::SerializerMessages_en() {
}

$Class* SerializerMessages_en::load$($String* name, bool initialize) {
	$loadClass(SerializerMessages_en, name, initialize, &_SerializerMessages_en_ClassInfo_, allocate$SerializerMessages_en);
	return class$;
}

$Class* SerializerMessages_en::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com