#include <com/sun/org/apache/xpath/internal/operations/And.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <jcpp.h>

#undef S_FALSE
#undef S_TRUE

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
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

$FieldInfo _And_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(And, serialVersionUID)},
	{}
};

$MethodInfo _And_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(And, init$, void)},
	{"bool", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Z", nullptr, $PUBLIC, $virtualMethod(And, bool$, bool, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(And, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _And_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.And",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_And_FieldInfo_,
	_And_MethodInfo_
};

$Object* allocate$And($Class* clazz) {
	return $of($alloc(And));
}

void And::init$() {
	$Operation::init$();
}

$XObject* And::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($XObject, expr1, $nc(this->m_left)->execute(xctxt));
	if ($nc(expr1)->bool$()) {
		$var($XObject, expr2, $nc(this->m_right)->execute(xctxt));
		$init($XBoolean);
		return $nc(expr2)->bool$() ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
	} else {
		$init($XBoolean);
		return $XBoolean::S_FALSE;
	}
}

bool And::bool$($XPathContext* xctxt) {
	bool var$0 = $nc(this->m_left)->bool$(xctxt);
	return (var$0 && $nc(this->m_right)->bool$(xctxt));
}

And::And() {
}

$Class* And::load$($String* name, bool initialize) {
	$loadClass(And, name, initialize, &_And_ClassInfo_, allocate$And);
	return class$;
}

$Class* And::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com