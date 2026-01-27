#include <com/sun/org/apache/xpath/internal/objects/GreaterThanOrEqualComparator.h>

#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/objects/Comparator.h>
#include <jcpp.h>

using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $Comparator = ::com::sun::org::apache::xpath::internal::objects::Comparator;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$MethodInfo _GreaterThanOrEqualComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(GreaterThanOrEqualComparator, init$, void)},
	{"compareNumbers", "(DD)Z", nullptr, 0, $virtualMethod(GreaterThanOrEqualComparator, compareNumbers, bool, double, double)},
	{"compareStrings", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, 0, $virtualMethod(GreaterThanOrEqualComparator, compareStrings, bool, $XMLString*, $XMLString*)},
	{}
};

$ClassInfo _GreaterThanOrEqualComparator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.GreaterThanOrEqualComparator",
	"com.sun.org.apache.xpath.internal.objects.Comparator",
	nullptr,
	nullptr,
	_GreaterThanOrEqualComparator_MethodInfo_
};

$Object* allocate$GreaterThanOrEqualComparator($Class* clazz) {
	return $of($alloc(GreaterThanOrEqualComparator));
}

void GreaterThanOrEqualComparator::init$() {
	$Comparator::init$();
}

bool GreaterThanOrEqualComparator::compareStrings($XMLString* s1, $XMLString* s2) {
	double var$0 = $nc(s1)->toDouble();
	return (var$0 >= $nc(s2)->toDouble());
}

bool GreaterThanOrEqualComparator::compareNumbers(double n1, double n2) {
	return n1 >= n2;
}

GreaterThanOrEqualComparator::GreaterThanOrEqualComparator() {
}

$Class* GreaterThanOrEqualComparator::load$($String* name, bool initialize) {
	$loadClass(GreaterThanOrEqualComparator, name, initialize, &_GreaterThanOrEqualComparator_ClassInfo_, allocate$GreaterThanOrEqualComparator);
	return class$;
}

$Class* GreaterThanOrEqualComparator::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com