#include <com/sun/org/apache/xpath/internal/functions/FuncConcat.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/functions/WrongNumberArgsException.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionMultiArgs = ::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs;
using $WrongNumberArgsException = ::com::sun::org::apache::xpath::internal::functions::WrongNumberArgsException;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncConcat_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncConcat, serialVersionUID)},
	{}
};

$MethodInfo _FuncConcat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncConcat, init$, void)},
	{"checkNumberArgs", "(I)V", nullptr, $PUBLIC, $virtualMethod(FuncConcat, checkNumberArgs, void, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncConcat, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"reportWrongNumberArgs", "()V", nullptr, $PROTECTED, $virtualMethod(FuncConcat, reportWrongNumberArgs, void), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{}
};

$ClassInfo _FuncConcat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncConcat",
	"com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs",
	nullptr,
	_FuncConcat_FieldInfo_,
	_FuncConcat_MethodInfo_
};

$Object* allocate$FuncConcat($Class* clazz) {
	return $of($alloc(FuncConcat));
}

void FuncConcat::init$() {
	$FunctionMultiArgs::init$();
}

$XObject* FuncConcat::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer));
	sb->append($($nc($($nc(this->m_arg0)->execute(xctxt)))->str()));
	sb->append($($nc($($nc(this->m_arg1)->execute(xctxt)))->str()));
	if (nullptr != this->m_arg2) {
		sb->append($($nc($($nc(this->m_arg2)->execute(xctxt)))->str()));
	}
	if (nullptr != this->m_args) {
		for (int32_t i = 0; i < $nc(this->m_args)->length; ++i) {
			sb->append($($nc($($nc($nc(this->m_args)->get(i))->execute(xctxt)))->str()));
		}
	}
	return $new($XString, $(sb->toString()));
}

void FuncConcat::checkNumberArgs(int32_t argNum) {
	if (argNum < 2) {
		reportWrongNumberArgs();
	}
}

void FuncConcat::reportWrongNumberArgs() {
	$throwNew($WrongNumberArgsException, $($XSLMessages::createXPATHMessage("gtone"_s, nullptr)));
}

FuncConcat::FuncConcat() {
}

$Class* FuncConcat::load$($String* name, bool initialize) {
	$loadClass(FuncConcat, name, initialize, &_FuncConcat_ClassInfo_, allocate$FuncConcat);
	return class$;
}

$Class* FuncConcat::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com