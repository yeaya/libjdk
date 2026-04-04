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

void Lt::init$() {
	$Operation::init$();
}

$XObject* Lt::operate($XObject* left, $XObject* right) {
	$init($XBoolean);
	return $nc(left)->lessThan(right) ? $XBoolean::S_TRUE : $XBoolean::S_FALSE;
}

Lt::Lt() {
}

$Class* Lt::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Lt, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Lt, init$, void)},
		{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Lt, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.operations.Lt",
		"com.sun.org.apache.xpath.internal.operations.Operation",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Lt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Lt));
	});
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