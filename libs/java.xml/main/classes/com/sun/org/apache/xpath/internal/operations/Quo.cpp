#include <com/sun/org/apache/xpath/internal/operations/Quo.h>

#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <jcpp.h>

using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $Operation = ::com::sun::org::apache::xpath::internal::operations::Operation;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace operations {

$CompoundAttribute _Quo_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Quo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Quo, serialVersionUID)},
	{}
};

$MethodInfo _Quo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Quo, init$, void)},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Quo, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Quo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Quo",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Quo_FieldInfo_,
	_Quo_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Quo_Annotations_
};

$Object* allocate$Quo($Class* clazz) {
	return $of($alloc(Quo));
}

void Quo::init$() {
	$Operation::init$();
}

$XObject* Quo::operate($XObject* left, $XObject* right) {
	double var$0 = $nc(left)->num();
	return $new($XNumber, (double)$cast(int32_t, (var$0 / $nc(right)->num())));
}

Quo::Quo() {
}

$Class* Quo::load$($String* name, bool initialize) {
	$loadClass(Quo, name, initialize, &_Quo_ClassInfo_, allocate$Quo);
	return class$;
}

$Class* Quo::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com