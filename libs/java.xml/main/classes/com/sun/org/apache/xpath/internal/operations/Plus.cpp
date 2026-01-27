#include <com/sun/org/apache/xpath/internal/operations/Plus.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
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

$FieldInfo _Plus_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Plus, serialVersionUID)},
	{}
};

$MethodInfo _Plus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Plus, init$, void)},
	{"num", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)D", nullptr, $PUBLIC, $virtualMethod(Plus, num, double, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Plus, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Plus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Plus",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Plus_FieldInfo_,
	_Plus_MethodInfo_
};

$Object* allocate$Plus($Class* clazz) {
	return $of($alloc(Plus));
}

void Plus::init$() {
	$Operation::init$();
}

$XObject* Plus::operate($XObject* left, $XObject* right) {
	double var$0 = $nc(left)->num();
	return $new($XNumber, var$0 + $nc(right)->num());
}

double Plus::num($XPathContext* xctxt) {
	double var$0 = $nc(this->m_right)->num(xctxt);
	return (var$0 + $nc(this->m_left)->num(xctxt));
}

Plus::Plus() {
}

$Class* Plus::load$($String* name, bool initialize) {
	$loadClass(Plus, name, initialize, &_Plus_ClassInfo_, allocate$Plus);
	return class$;
}

$Class* Plus::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com