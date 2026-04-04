#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$Class* ExpressionOwner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionOwner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionOwner, setExpression, void, $Expression*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xpath.internal.ExpressionOwner",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ExpressionOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExpressionOwner);
	});
	return class$;
}

$Class* ExpressionOwner::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com