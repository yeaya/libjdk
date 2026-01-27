#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunction.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/ExtensionsProvider.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunction$ArgExtOwner.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XNull.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHMessages.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED
#undef ER_INCORRECT_PROGRAMMER_ASSERTION

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $ExtensionsProvider = ::com::sun::org::apache::xpath::internal::ExtensionsProvider;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $NodeSequence = ::com::sun::org::apache::xpath::internal::axes::NodeSequence;
using $FuncExtFunction$ArgExtOwner = ::com::sun::org::apache::xpath::internal::functions::FuncExtFunction$ArgExtOwner;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XNull = ::com::sun::org::apache::xpath::internal::objects::XNull;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $XPATHMessages = ::com::sun::org::apache::xpath::internal::res::XPATHMessages;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncExtFunction_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncExtFunction, serialVersionUID)},
	{"m_namespace", "Ljava/lang/String;", nullptr, 0, $field(FuncExtFunction, m_namespace)},
	{"m_extensionName", "Ljava/lang/String;", nullptr, 0, $field(FuncExtFunction, m_extensionName)},
	{"m_methodKey", "Ljava/lang/Object;", nullptr, 0, $field(FuncExtFunction, m_methodKey)},
	{"m_argVec", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xpath/internal/Expression;>;", 0, $field(FuncExtFunction, m_argVec)},
	{}
};

$MethodInfo _FuncExtFunction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(FuncExtFunction, init$, void, $String*, $String*, Object$*)},
	{"callArgVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, callArgVisitors, void, $XPathVisitor*)},
	{"checkNumberArgs", "(I)V", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, checkNumberArgs, void, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"exprSetParent", "(Lcom/sun/org/apache/xpath/internal/ExpressionNode;)V", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, exprSetParent, void, $ExpressionNode*)},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FuncExtFunction, fixupVariables, void, $List*, int32_t)},
	{"getArg", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, getArg, $Expression*, int32_t)},
	{"getArgCount", "()I", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, getArgCount, int32_t)},
	{"getFunctionName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, getFunctionName, $String*)},
	{"getMethodKey", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, getMethodKey, $Object*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, getNamespace, $String*)},
	{"reportWrongNumberArgs", "()V", nullptr, $PROTECTED, $virtualMethod(FuncExtFunction, reportWrongNumberArgs, void), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"setArg", "(Lcom/sun/org/apache/xpath/internal/Expression;I)V", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, setArg, void, $Expression*, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction, toString, $String*)},
	{}
};

$InnerClassInfo _FuncExtFunction_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.functions.FuncExtFunction$ArgExtOwner", "com.sun.org.apache.xpath.internal.functions.FuncExtFunction", "ArgExtOwner", 0},
	{}
};

$ClassInfo _FuncExtFunction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncExtFunction",
	"com.sun.org.apache.xpath.internal.functions.Function",
	nullptr,
	_FuncExtFunction_FieldInfo_,
	_FuncExtFunction_MethodInfo_,
	nullptr,
	nullptr,
	_FuncExtFunction_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.functions.FuncExtFunction$ArgExtOwner"
};

$Object* allocate$FuncExtFunction($Class* clazz) {
	return $of($alloc(FuncExtFunction));
}

void FuncExtFunction::fixupVariables($List* vars, int32_t globalsSize) {
	$useLocalCurrentObjectStackCache();
	if (nullptr != this->m_argVec) {
		int32_t nArgs = $nc(this->m_argVec)->size();
		for (int32_t i = 0; i < nArgs; ++i) {
			$var($Expression, arg, $cast($Expression, $nc(this->m_argVec)->get(i)));
			$nc(arg)->fixupVariables(vars, globalsSize);
		}
	}
}

$String* FuncExtFunction::getNamespace() {
	return this->m_namespace;
}

$String* FuncExtFunction::getFunctionName() {
	return this->m_extensionName;
}

$Object* FuncExtFunction::getMethodKey() {
	return $of(this->m_methodKey);
}

$Expression* FuncExtFunction::getArg(int32_t n) {
	if (n >= 0 && n < $nc(this->m_argVec)->size()) {
		return $cast($Expression, $nc(this->m_argVec)->get(n));
	} else {
		return nullptr;
	}
}

int32_t FuncExtFunction::getArgCount() {
	return $nc(this->m_argVec)->size();
}

void FuncExtFunction::init$($String* namespace$, $String* extensionName, Object$* methodKey) {
	$Function::init$();
	$set(this, m_argVec, $new($ArrayList));
	$set(this, m_namespace, namespace$);
	$set(this, m_extensionName, extensionName);
	$set(this, m_methodKey, methodKey);
}

$XObject* FuncExtFunction::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	if ($nc(xctxt)->isSecureProcessing()) {
		$init($XPATHErrorResources);
		$throwNew($TransformerException, $($XPATHMessages::createXPATHMessage($XPATHErrorResources::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED, $$new($ObjectArray, {$($of(toString()))}))));
	}
	$var($XObject, result, nullptr);
	$var($List, argVec, $new($ArrayList));
	int32_t nArgs = $nc(this->m_argVec)->size();
	for (int32_t i = 0; i < nArgs; ++i) {
		$var($Expression, arg, $cast($Expression, $nc(this->m_argVec)->get(i)));
		$var($XObject, xobj, $nc(arg)->execute(xctxt));
		$nc(xobj)->allowDetachToRelease(false);
		argVec->add(xobj);
	}
	$var($ExtensionsProvider, extProvider, $cast($ExtensionsProvider, $nc(xctxt)->getOwnerObject()));
	$var($Object, val, $nc(extProvider)->extFunction(this, argVec));
	if (nullptr != val) {
		$assign(result, $XObject::create(val, xctxt));
	} else {
		$assign(result, $new($XNull));
	}
	return result;
}

void FuncExtFunction::setArg($Expression* arg, int32_t argNum) {
	$nc(this->m_argVec)->add(arg);
	$nc(arg)->exprSetParent(this);
}

void FuncExtFunction::checkNumberArgs(int32_t argNum) {
}

void FuncExtFunction::callArgVisitors($XPathVisitor* visitor) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->m_argVec)->size(); ++i) {
		$var($Expression, exp, $cast($Expression, $nc(this->m_argVec)->get(i)));
		$nc(exp)->callVisitors($$new($FuncExtFunction$ArgExtOwner, this, exp), visitor);
	}
}

void FuncExtFunction::exprSetParent($ExpressionNode* n) {
	$useLocalCurrentObjectStackCache();
	$Function::exprSetParent(n);
	int32_t nArgs = $nc(this->m_argVec)->size();
	for (int32_t i = 0; i < nArgs; ++i) {
		$var($Expression, arg, $cast($Expression, $nc(this->m_argVec)->get(i)));
		$nc(arg)->exprSetParent(n);
	}
}

void FuncExtFunction::reportWrongNumberArgs() {
	$useLocalCurrentObjectStackCache();
	$init($XPATHErrorResources);
	$var($String, fMsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_INCORRECT_PROGRAMMER_ASSERTION, $$new($ObjectArray, {$of("Programmer\'s assertion:  the method FunctionMultiArgs.reportWrongNumberArgs() should never be called."_s)})));
	$throwNew($RuntimeException, fMsg);
}

$String* FuncExtFunction::toString() {
	if (this->m_namespace != nullptr && $nc(this->m_namespace)->length() > 0) {
		return $str({"{"_s, this->m_namespace, "}"_s, this->m_extensionName});
	} else {
		return this->m_extensionName;
	}
}

FuncExtFunction::FuncExtFunction() {
}

$Class* FuncExtFunction::load$($String* name, bool initialize) {
	$loadClass(FuncExtFunction, name, initialize, &_FuncExtFunction_ClassInfo_, allocate$FuncExtFunction);
	return class$;
}

$Class* FuncExtFunction::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com