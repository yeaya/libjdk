#include <com/sun/org/apache/xpath/internal/objects/LessThanComparator.h>
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

void LessThanComparator::init$() {
	$Comparator::init$();
}

bool LessThanComparator::compareStrings($XMLString* s1, $XMLString* s2) {
	double var$0 = $nc(s1)->toDouble();
	return (var$0 < $nc(s2)->toDouble());
}

bool LessThanComparator::compareNumbers(double n1, double n2) {
	return n1 < n2;
}

LessThanComparator::LessThanComparator() {
}

$Class* LessThanComparator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LessThanComparator, init$, void)},
		{"compareNumbers", "(DD)Z", nullptr, 0, $virtualMethod(LessThanComparator, compareNumbers, bool, double, double)},
		{"compareStrings", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, 0, $virtualMethod(LessThanComparator, compareStrings, bool, $XMLString*, $XMLString*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.objects.LessThanComparator",
		"com.sun.org.apache.xpath.internal.objects.Comparator",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LessThanComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LessThanComparator);
	});
	return class$;
}

$Class* LessThanComparator::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com