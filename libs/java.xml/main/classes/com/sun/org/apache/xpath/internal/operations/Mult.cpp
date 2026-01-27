#include <com/sun/org/apache/xpath/internal/operations/Mult.h>

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

$FieldInfo _Mult_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Mult, serialVersionUID)},
	{}
};

$MethodInfo _Mult_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Mult, init$, void)},
	{"num", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)D", nullptr, $PUBLIC, $virtualMethod(Mult, num, double, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Mult, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Mult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Mult",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Mult_FieldInfo_,
	_Mult_MethodInfo_
};

$Object* allocate$Mult($Class* clazz) {
	return $of($alloc(Mult));
}

void Mult::init$() {
	$Operation::init$();
}

$XObject* Mult::operate($XObject* left, $XObject* right) {
	double var$0 = $nc(left)->num();
	return $new($XNumber, var$0 * $nc(right)->num());
}

double Mult::num($XPathContext* xctxt) {
	double var$0 = $nc(this->m_left)->num(xctxt);
	return (var$0 * $nc(this->m_right)->num(xctxt));
}

Mult::Mult() {
}

$Class* Mult::load$($String* name, bool initialize) {
	$loadClass(Mult, name, initialize, &_Mult_ClassInfo_, allocate$Mult);
	return class$;
}

$Class* Mult::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com