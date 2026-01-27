#include <com/sun/org/apache/xpath/internal/operations/Number.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>
#include <jcpp.h>

#undef CLASS_NUMBER

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

$FieldInfo _Number_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Number, serialVersionUID)},
	{}
};

$MethodInfo _Number_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Number, init$, void)},
	{"num", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)D", nullptr, $PUBLIC, $virtualMethod(Number, num, double, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Number, operate, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Number_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Number",
	"com.sun.org.apache.xpath.internal.operations.UnaryOperation",
	nullptr,
	_Number_FieldInfo_,
	_Number_MethodInfo_
};

$Object* allocate$Number($Class* clazz) {
	return $of($alloc(Number));
}

void Number::init$() {
	$UnaryOperation::init$();
}

$XObject* Number::operate($XObject* right) {
	if ($XObject::CLASS_NUMBER == $nc(right)->getType()) {
		return right;
	} else {
		return $new($XNumber, right->num());
	}
}

double Number::num($XPathContext* xctxt) {
	return $nc(this->m_right)->num(xctxt);
}

Number::Number() {
}

$Class* Number::load$($String* name, bool initialize) {
	$loadClass(Number, name, initialize, &_Number_ClassInfo_, allocate$Number);
	return class$;
}

$Class* Number::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com