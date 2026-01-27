#include <com/sun/org/apache/xpath/internal/operations/Gt.h>

#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <jcpp.h>

#undef S_FALSE
#undef S_TRUE

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

$FieldInfo _Gt_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Gt, serialVersionUID)},
	{}
};

$MethodInfo _Gt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Gt, init$, void)},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Gt, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Gt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Gt",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Gt_FieldInfo_,
	_Gt_MethodInfo_
};

$Object* allocate$Gt($Class* clazz) {
	return $of($alloc(Gt));
}

void Gt::init$() {
	$Operation::init$();
}

$XObject* Gt::operate($XObject* left, $XObject* right) {
	$init($XBoolean);
	return $nc(left)->greaterThan(right) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
}

Gt::Gt() {
}

$Class* Gt::load$($String* name, bool initialize) {
	$loadClass(Gt, name, initialize, &_Gt_ClassInfo_, allocate$Gt);
	return class$;
}

$Class* Gt::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com