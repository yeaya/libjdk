#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>

#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$MethodInfo _MessageFormatter_MethodInfo_[] = {
	{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MessageFormatter, formatMessage, $String*, $Locale*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
	{}
};

$ClassInfo _MessageFormatter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.util.MessageFormatter",
	nullptr,
	nullptr,
	nullptr,
	_MessageFormatter_MethodInfo_
};

$Object* allocate$MessageFormatter($Class* clazz) {
	return $of($alloc(MessageFormatter));
}

$Class* MessageFormatter::load$($String* name, bool initialize) {
	$loadClass(MessageFormatter, name, initialize, &_MessageFormatter_ClassInfo_, allocate$MessageFormatter);
	return class$;
}

$Class* MessageFormatter::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com