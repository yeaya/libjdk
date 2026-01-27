#include <com/sun/org/apache/xpath/internal/operations/Minus.h>

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

$FieldInfo _Minus_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Minus, serialVersionUID)},
	{}
};

$MethodInfo _Minus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Minus, init$, void)},
	{"num", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)D", nullptr, $PUBLIC, $virtualMethod(Minus, num, double, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Minus, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Minus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Minus",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Minus_FieldInfo_,
	_Minus_MethodInfo_
};

$Object* allocate$Minus($Class* clazz) {
	return $of($alloc(Minus));
}

void Minus::init$() {
	$Operation::init$();
}

$XObject* Minus::operate($XObject* left, $XObject* right) {
	double var$0 = $nc(left)->num();
	return $new($XNumber, var$0 - $nc(right)->num());
}

double Minus::num($XPathContext* xctxt) {
	double var$0 = $nc(this->m_left)->num(xctxt);
	return (var$0 - $nc(this->m_right)->num(xctxt));
}

Minus::Minus() {
}

$Class* Minus::load$($String* name, bool initialize) {
	$loadClass(Minus, name, initialize, &_Minus_ClassInfo_, allocate$Minus);
	return class$;
}

$Class* Minus::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com