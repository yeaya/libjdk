#include <com/sun/org/apache/xml/internal/serializer/OutputPropertyUtils.h>

#include <java/util/Properties.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _OutputPropertyUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OutputPropertyUtils, init$, void)},
	{"getBooleanProperty", "(Ljava/lang/String;Ljava/util/Properties;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(OutputPropertyUtils, getBooleanProperty, bool, $String*, $Properties*)},
	{"getIntProperty", "(Ljava/lang/String;Ljava/util/Properties;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(OutputPropertyUtils, getIntProperty, int32_t, $String*, $Properties*)},
	{}
};

$ClassInfo _OutputPropertyUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.OutputPropertyUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OutputPropertyUtils_MethodInfo_
};

$Object* allocate$OutputPropertyUtils($Class* clazz) {
	return $of($alloc(OutputPropertyUtils));
}

void OutputPropertyUtils::init$() {
}

bool OutputPropertyUtils::getBooleanProperty($String* key, $Properties* props) {
	$var($String, s, $nc(props)->getProperty(key));
	if (nullptr == s || !$nc(s)->equals("yes"_s)) {
		return false;
	} else {
		return true;
	}
}

int32_t OutputPropertyUtils::getIntProperty($String* key, $Properties* props) {
	$var($String, s, $nc(props)->getProperty(key));
	if (nullptr == s) {
		return 0;
	} else {
		return $Integer::parseInt(s);
	}
}

OutputPropertyUtils::OutputPropertyUtils() {
}

$Class* OutputPropertyUtils::load$($String* name, bool initialize) {
	$loadClass(OutputPropertyUtils, name, initialize, &_OutputPropertyUtils_ClassInfo_, allocate$OutputPropertyUtils);
	return class$;
}

$Class* OutputPropertyUtils::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com