#include <com/sun/org/apache/xpath/internal/objects/NotEqualComparator.h>

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

$MethodInfo _NotEqualComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(NotEqualComparator, init$, void)},
	{"compareNumbers", "(DD)Z", nullptr, 0, $virtualMethod(NotEqualComparator, compareNumbers, bool, double, double)},
	{"compareStrings", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, 0, $virtualMethod(NotEqualComparator, compareStrings, bool, $XMLString*, $XMLString*)},
	{}
};

$ClassInfo _NotEqualComparator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.NotEqualComparator",
	"com.sun.org.apache.xpath.internal.objects.Comparator",
	nullptr,
	nullptr,
	_NotEqualComparator_MethodInfo_
};

$Object* allocate$NotEqualComparator($Class* clazz) {
	return $of($alloc(NotEqualComparator));
}

void NotEqualComparator::init$() {
	$Comparator::init$();
}

bool NotEqualComparator::compareStrings($XMLString* s1, $XMLString* s2) {
	return !$nc(s1)->equals(s2);
}

bool NotEqualComparator::compareNumbers(double n1, double n2) {
	return n1 != n2;
}

NotEqualComparator::NotEqualComparator() {
}

$Class* NotEqualComparator::load$($String* name, bool initialize) {
	$loadClass(NotEqualComparator, name, initialize, &_NotEqualComparator_ClassInfo_, allocate$NotEqualComparator);
	return class$;
}

$Class* NotEqualComparator::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com