#include <com/sun/org/apache/xpath/internal/operations/Gte.h>

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

$FieldInfo _Gte_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Gte, serialVersionUID)},
	{}
};

$MethodInfo _Gte_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Gte, init$, void)},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Gte, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Gte_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Gte",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Gte_FieldInfo_,
	_Gte_MethodInfo_
};

$Object* allocate$Gte($Class* clazz) {
	return $of($alloc(Gte));
}

void Gte::init$() {
	$Operation::init$();
}

$XObject* Gte::operate($XObject* left, $XObject* right) {
	$init($XBoolean);
	return $nc(left)->greaterThanOrEqual(right) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
}

Gte::Gte() {
}

$Class* Gte::load$($String* name, bool initialize) {
	$loadClass(Gte, name, initialize, &_Gte_ClassInfo_, allocate$Gte);
	return class$;
}

$Class* Gte::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com