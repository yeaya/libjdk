#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

void RegularExpression$ExpressionTarget::init$() {
}

RegularExpression$ExpressionTarget::RegularExpression$ExpressionTarget() {
}

$Class* RegularExpression$ExpressionTarget::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RegularExpression$ExpressionTarget, init$, void)},
		{"charAt", "(I)C", nullptr, $ABSTRACT, $virtualMethod(RegularExpression$ExpressionTarget, charAt, char16_t, int32_t)},
		{"regionMatches", "(ZIILjava/lang/String;I)Z", nullptr, $ABSTRACT, $virtualMethod(RegularExpression$ExpressionTarget, regionMatches, bool, bool, int32_t, int32_t, $String*, int32_t)},
		{"regionMatches", "(ZIIII)Z", nullptr, $ABSTRACT, $virtualMethod(RegularExpression$ExpressionTarget, regionMatches, bool, bool, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "ExpressionTarget", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression"
	};
	$loadClass(RegularExpression$ExpressionTarget, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegularExpression$ExpressionTarget);
	});
	return class$;
}

$Class* RegularExpression$ExpressionTarget::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com