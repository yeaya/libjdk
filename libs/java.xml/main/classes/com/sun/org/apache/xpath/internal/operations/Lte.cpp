#include <com/sun/org/apache/xpath/internal/operations/Lte.h>

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

$FieldInfo _Lte_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Lte, serialVersionUID)},
	{}
};

$MethodInfo _Lte_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Lte, init$, void)},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Lte, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Lte_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Lte",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Lte_FieldInfo_,
	_Lte_MethodInfo_
};

$Object* allocate$Lte($Class* clazz) {
	return $of($alloc(Lte));
}

void Lte::init$() {
	$Operation::init$();
}

$XObject* Lte::operate($XObject* left, $XObject* right) {
	$init($XBoolean);
	return $nc(left)->lessThanOrEqual(right) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
}

Lte::Lte() {
}

$Class* Lte::load$($String* name, bool initialize) {
	$loadClass(Lte, name, initialize, &_Lte_ClassInfo_, allocate$Lte);
	return class$;
}

$Class* Lte::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com