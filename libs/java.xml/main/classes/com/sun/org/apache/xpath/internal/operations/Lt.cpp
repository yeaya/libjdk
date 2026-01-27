#include <com/sun/org/apache/xpath/internal/operations/Lt.h>

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

$FieldInfo _Lt_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Lt, serialVersionUID)},
	{}
};

$MethodInfo _Lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Lt, init$, void)},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Lt, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Lt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Lt",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Lt_FieldInfo_,
	_Lt_MethodInfo_
};

$Object* allocate$Lt($Class* clazz) {
	return $of($alloc(Lt));
}

void Lt::init$() {
	$Operation::init$();
}

$XObject* Lt::operate($XObject* left, $XObject* right) {
	$init($XBoolean);
	return $nc(left)->lessThan(right) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
}

Lt::Lt() {
}

$Class* Lt::load$($String* name, bool initialize) {
	$loadClass(Lt, name, initialize, &_Lt_ClassInfo_, allocate$Lt);
	return class$;
}

$Class* Lt::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com