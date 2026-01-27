#include <com/sun/org/apache/xpath/internal/operations/Neg.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $UnaryOperation = ::com::sun::org::apache::xpath::internal::operations::UnaryOperation;
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

$FieldInfo _Neg_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Neg, serialVersionUID)},
	{}
};

$MethodInfo _Neg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Neg, init$, void)},
	{"num", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)D", nullptr, $PUBLIC, $virtualMethod(Neg, num, double, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Neg, operate, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Neg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Neg",
	"com.sun.org.apache.xpath.internal.operations.UnaryOperation",
	nullptr,
	_Neg_FieldInfo_,
	_Neg_MethodInfo_
};

$Object* allocate$Neg($Class* clazz) {
	return $of($alloc(Neg));
}

void Neg::init$() {
	$UnaryOperation::init$();
}

$XObject* Neg::operate($XObject* right) {
	return $new($XNumber, -$nc(right)->num());
}

double Neg::num($XPathContext* xctxt) {
	return -($nc(this->m_right)->num(xctxt));
}

Neg::Neg() {
}

$Class* Neg::load$($String* name, bool initialize) {
	$loadClass(Neg, name, initialize, &_Neg_ClassInfo_, allocate$Neg);
	return class$;
}

$Class* Neg::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com