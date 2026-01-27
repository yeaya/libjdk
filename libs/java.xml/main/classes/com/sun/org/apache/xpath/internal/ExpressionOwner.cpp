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

$MethodInfo _ExpressionOwner_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionOwner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionOwner, setExpression, void, $Expression*)},
	{}
};

$ClassInfo _ExpressionOwner_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	nullptr,
	nullptr,
	nullptr,
	_ExpressionOwner_MethodInfo_
};

$Object* allocate$ExpressionOwner($Class* clazz) {
	return $of($alloc(ExpressionOwner));
}

$Class* ExpressionOwner::load$($String* name, bool initialize) {
	$loadClass(ExpressionOwner, name, initialize, &_ExpressionOwner_ClassInfo_, allocate$ExpressionOwner);
	return class$;
}

$Class* ExpressionOwner::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com