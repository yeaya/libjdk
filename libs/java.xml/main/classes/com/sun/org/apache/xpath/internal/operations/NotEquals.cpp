#include <com/sun/org/apache/xpath/internal/operations/NotEquals.h>

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

$FieldInfo _NotEquals_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NotEquals, serialVersionUID)},
	{}
};

$MethodInfo _NotEquals_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NotEquals, init$, void)},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(NotEquals, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _NotEquals_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.NotEquals",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_NotEquals_FieldInfo_,
	_NotEquals_MethodInfo_
};

$Object* allocate$NotEquals($Class* clazz) {
	return $of($alloc(NotEquals));
}

void NotEquals::init$() {
	$Operation::init$();
}

$XObject* NotEquals::operate($XObject* left, $XObject* right) {
	$init($XBoolean);
	return ($nc(left)->notEquals(right)) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
}

NotEquals::NotEquals() {
}

$Class* NotEquals::load$($String* name, bool initialize) {
	$loadClass(NotEquals, name, initialize, &_NotEquals_ClassInfo_, allocate$NotEquals);
	return class$;
}

$Class* NotEquals::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com