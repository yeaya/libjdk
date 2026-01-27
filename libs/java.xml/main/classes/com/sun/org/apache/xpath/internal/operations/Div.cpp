#include <com/sun/org/apache/xpath/internal/operations/Div.h>

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

$FieldInfo _Div_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Div, serialVersionUID)},
	{}
};

$MethodInfo _Div_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Div, init$, void)},
	{"num", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)D", nullptr, $PUBLIC, $virtualMethod(Div, num, double, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Div, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Div_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Div",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Div_FieldInfo_,
	_Div_MethodInfo_
};

$Object* allocate$Div($Class* clazz) {
	return $of($alloc(Div));
}

void Div::init$() {
	$Operation::init$();
}

$XObject* Div::operate($XObject* left, $XObject* right) {
	double var$0 = $nc(left)->num();
	return $new($XNumber, var$0 / $nc(right)->num());
}

double Div::num($XPathContext* xctxt) {
	double var$0 = $nc(this->m_left)->num(xctxt);
	return (var$0 / $nc(this->m_right)->num(xctxt));
}

Div::Div() {
}

$Class* Div::load$($String* name, bool initialize) {
	$loadClass(Div, name, initialize, &_Div_ClassInfo_, allocate$Div);
	return class$;
}

$Class* Div::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com