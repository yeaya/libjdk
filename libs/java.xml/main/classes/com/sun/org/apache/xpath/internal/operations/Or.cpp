#include <com/sun/org/apache/xpath/internal/operations/Or.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <jcpp.h>

#undef S_FALSE
#undef S_TRUE

using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $Operation = ::com::sun::org::apache::xpath::internal::operations::Operation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace operations {

void Or::init$() {
	$Operation::init$();
}

$XObject* Or::execute($XPathContext* xctxt) {
	$useLocalObjectStack();
	$var($XObject, expr1, $nc(this->m_left)->execute(xctxt));
	if (!$nc(expr1)->bool$()) {
		$var($XObject, expr2, $nc(this->m_right)->execute(xctxt));
		$init($XBoolean);
		return $nc(expr2)->bool$() ? $XBoolean::S_TRUE : $XBoolean::S_FALSE;
	} else {
		$init($XBoolean);
		return $XBoolean::S_TRUE;
	}
}

bool Or::bool$($XPathContext* xctxt) {
	bool var$0 = $nc(this->m_left)->bool$(xctxt);
	return (var$0 || $nc(this->m_right)->bool$(xctxt));
}

Or::Or() {
}

$Class* Or::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Or, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Or, init$, void)},
		{"bool", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Z", nullptr, $PUBLIC, $virtualMethod(Or, bool$, bool, $XPathContext*), "javax.xml.transform.TransformerException"},
		{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Or, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.operations.Or",
		"com.sun.org.apache.xpath.internal.operations.Operation",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Or, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Or));
	});
	return class$;
}

$Class* Or::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com