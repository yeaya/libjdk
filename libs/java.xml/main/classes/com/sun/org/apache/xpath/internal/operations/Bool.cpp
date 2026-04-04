#include <com/sun/org/apache/xpath/internal/operations/Bool.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>
#include <jcpp.h>

#undef CLASS_BOOLEAN
#undef S_FALSE
#undef S_TRUE

using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
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

void Bool::init$() {
	$UnaryOperation::init$();
}

$XObject* Bool::operate($XObject* right) {
	if ($XObject::CLASS_BOOLEAN == $nc(right)->getType()) {
		return right;
	} else {
		$init($XBoolean);
		return right->bool$() ? $XBoolean::S_TRUE : $XBoolean::S_FALSE;
	}
}

bool Bool::bool$($XPathContext* xctxt) {
	return $nc(this->m_right)->bool$(xctxt);
}

Bool::Bool() {
}

$Class* Bool::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Bool, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bool, init$, void)},
		{"bool", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Z", nullptr, $PUBLIC, $virtualMethod(Bool, bool$, bool, $XPathContext*), "javax.xml.transform.TransformerException"},
		{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Bool, operate, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.operations.Bool",
		"com.sun.org.apache.xpath.internal.operations.UnaryOperation",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bool, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Bool));
	});
	return class$;
}

$Class* Bool::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com