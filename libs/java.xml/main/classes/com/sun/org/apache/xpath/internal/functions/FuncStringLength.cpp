#include <com/sun/org/apache/xpath/internal/functions/FuncStringLength.h>

#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionDef1Arg = ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncStringLength_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncStringLength, serialVersionUID)},
	{}
};

$MethodInfo _FuncStringLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncStringLength, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncStringLength, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncStringLength_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncStringLength",
	"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
	nullptr,
	_FuncStringLength_FieldInfo_,
	_FuncStringLength_MethodInfo_
};

$Object* allocate$FuncStringLength($Class* clazz) {
	return $of($alloc(FuncStringLength));
}

void FuncStringLength::init$() {
	$FunctionDef1Arg::init$();
}

$XObject* FuncStringLength::execute($XPathContext* xctxt) {
	return $new($XNumber, (double)$nc($(getArg0AsString(xctxt)))->length());
}

FuncStringLength::FuncStringLength() {
}

$Class* FuncStringLength::load$($String* name, bool initialize) {
	$loadClass(FuncStringLength, name, initialize, &_FuncStringLength_ClassInfo_, allocate$FuncStringLength);
	return class$;
}

$Class* FuncStringLength::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com