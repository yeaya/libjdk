#include <com/sun/org/apache/xpath/internal/objects/EqualComparator.h>
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

void EqualComparator::init$() {
	$Comparator::init$();
}

bool EqualComparator::compareStrings($XMLString* s1, $XMLString* s2) {
	return $nc(s1)->equals(s2);
}

bool EqualComparator::compareNumbers(double n1, double n2) {
	return n1 == n2;
}

EqualComparator::EqualComparator() {
}

$Class* EqualComparator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EqualComparator, init$, void)},
		{"compareNumbers", "(DD)Z", nullptr, 0, $virtualMethod(EqualComparator, compareNumbers, bool, double, double)},
		{"compareStrings", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, 0, $virtualMethod(EqualComparator, compareStrings, bool, $XMLString*, $XMLString*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.objects.EqualComparator",
		"com.sun.org.apache.xpath.internal.objects.Comparator",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EqualComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EqualComparator);
	});
	return class$;
}

$Class* EqualComparator::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com