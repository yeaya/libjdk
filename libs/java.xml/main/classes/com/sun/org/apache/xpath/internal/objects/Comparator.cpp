#include <com/sun/org/apache/xpath/internal/objects/Comparator.h>

#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <jcpp.h>

using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$MethodInfo _Comparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Comparator, init$, void)},
	{"compareNumbers", "(DD)Z", nullptr, $ABSTRACT, $virtualMethod(Comparator, compareNumbers, bool, double, double)},
	{"compareStrings", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $ABSTRACT, $virtualMethod(Comparator, compareStrings, bool, $XMLString*, $XMLString*)},
	{}
};

$ClassInfo _Comparator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.objects.Comparator",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Comparator_MethodInfo_
};

$Object* allocate$Comparator($Class* clazz) {
	return $of($alloc(Comparator));
}

void Comparator::init$() {
}

Comparator::Comparator() {
}

$Class* Comparator::load$($String* name, bool initialize) {
	$loadClass(Comparator, name, initialize, &_Comparator_ClassInfo_, allocate$Comparator);
	return class$;
}

$Class* Comparator::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com