#include <com/sun/org/apache/xpath/internal/functions/FuncFalse.h>

#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef S_FALSE

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

$FieldInfo _FuncFalse_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncFalse, serialVersionUID)},
	{}
};

$MethodInfo _FuncFalse_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncFalse, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncFalse, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FuncFalse, fixupVariables, void, $List*, int32_t)},
	{}
};

$ClassInfo _FuncFalse_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncFalse",
	"com.sun.org.apache.xpath.internal.functions.Function",
	nullptr,
	_FuncFalse_FieldInfo_,
	_FuncFalse_MethodInfo_
};

$Object* allocate$FuncFalse($Class* clazz) {
	return $of($alloc(FuncFalse));
}

void FuncFalse::init$() {
	$Function::init$();
}

$XObject* FuncFalse::execute($XPathContext* xctxt) {
	$init($XBoolean);
	return $XBoolean::S_FALSE;
}

void FuncFalse::fixupVariables($List* vars, int32_t globalsSize) {
}

FuncFalse::FuncFalse() {
}

$Class* FuncFalse::load$($String* name, bool initialize) {
	$loadClass(FuncFalse, name, initialize, &_FuncFalse_ClassInfo_, allocate$FuncFalse);
	return class$;
}

$Class* FuncFalse::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com