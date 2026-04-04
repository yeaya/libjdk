#include <com/sun/org/apache/xpath/internal/operations/Equals.h>
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

void Equals::init$() {
	$Operation::init$();
}

$XObject* Equals::operate($XObject* left, $XObject* right) {
	$init($XBoolean);
	return $nc(left)->equals(right) ? $XBoolean::S_TRUE : $XBoolean::S_FALSE;
}

bool Equals::bool$($XPathContext* xctxt) {
	$useLocalObjectStack();
	$var($XObject, left, $nc(this->m_left)->execute(xctxt, true));
	$var($XObject, right, $nc(this->m_right)->execute(xctxt, true));
	bool result = $nc(left)->equals(right) ? true : false;
	left->detach();
	$nc(right)->detach();
	return result;
}

Equals::Equals() {
}

$Class* Equals::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Equals, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Equals, init$, void)},
		{"bool", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Z", nullptr, $PUBLIC, $virtualMethod(Equals, bool$, bool, $XPathContext*), "javax.xml.transform.TransformerException"},
		{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Equals, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.operations.Equals",
		"com.sun.org.apache.xpath.internal.operations.Operation",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Equals, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Equals));
	});
	return class$;
}

$Class* Equals::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com