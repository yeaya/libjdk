#include <com/sun/org/apache/xpath/internal/functions/FuncTrue.h>

#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef S_TRUE

using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncTrue_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncTrue, serialVersionUID)},
	{}
};

$MethodInfo _FuncTrue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncTrue, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncTrue, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FuncTrue, fixupVariables, void, $List*, int32_t)},
	{}
};

$ClassInfo _FuncTrue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncTrue",
	"com.sun.org.apache.xpath.internal.functions.Function",
	nullptr,
	_FuncTrue_FieldInfo_,
	_FuncTrue_MethodInfo_
};

$Object* allocate$FuncTrue($Class* clazz) {
	return $of($alloc(FuncTrue));
}

void FuncTrue::init$() {
	$Function::init$();
}

$XObject* FuncTrue::execute($XPathContext* xctxt) {
	$init($XBoolean);
	return $XBoolean::S_TRUE;
}

void FuncTrue::fixupVariables($List* vars, int32_t globalsSize) {
}

FuncTrue::FuncTrue() {
}

$Class* FuncTrue::load$($String* name, bool initialize) {
	$loadClass(FuncTrue, name, initialize, &_FuncTrue_ClassInfo_, allocate$FuncTrue);
	return class$;
}

$Class* FuncTrue::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com