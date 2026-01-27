#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionAvailableCall.h>

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef FALSE
#undef NEED_LITERAL_ERR
#undef TRANSLET_URI
#undef TRUE

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $LiteralExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralExpr;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _FunctionAvailableCall_FieldInfo_[] = {
	{"_arg", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(FunctionAvailableCall, _arg)},
	{"_nameOfFunct", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FunctionAvailableCall, _nameOfFunct)},
	{"_namespaceOfFunct", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FunctionAvailableCall, _namespaceOfFunct)},
	{"_isFunctionAvailable", "Z", nullptr, $PRIVATE, $field(FunctionAvailableCall, _isFunctionAvailable)},
	{}
};

$MethodInfo _FunctionAvailableCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(FunctionAvailableCall, init$, void, $QName*, $List*)},
	{"evaluateAtCompileTime", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FunctionAvailableCall, evaluateAtCompileTime, $Object*)},
	{"getResult", "()Z", nullptr, $PUBLIC, $method(FunctionAvailableCall, getResult, bool)},
	{"hasMethods", "()Z", nullptr, $PRIVATE, $method(FunctionAvailableCall, hasMethods, bool)},
	{"isInternalNamespace", "()Z", nullptr, $PRIVATE, $method(FunctionAvailableCall, isInternalNamespace, bool)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(FunctionAvailableCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(FunctionAvailableCall, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _FunctionAvailableCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionAvailableCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	_FunctionAvailableCall_FieldInfo_,
	_FunctionAvailableCall_MethodInfo_
};

$Object* allocate$FunctionAvailableCall($Class* clazz) {
	return $of($alloc(FunctionAvailableCall));
}

void FunctionAvailableCall::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
	$set(this, _nameOfFunct, nullptr);
	$set(this, _namespaceOfFunct, nullptr);
	this->_isFunctionAvailable = false;
	$set(this, _arg, $cast($Expression, $nc(arguments)->get(0)));
	$set(this, _type, nullptr);
	if ($instanceOf($LiteralExpr, this->_arg)) {
		$var($LiteralExpr, arg, $cast($LiteralExpr, this->_arg));
		$set(this, _namespaceOfFunct, $nc(arg)->getNamespace());
		$set(this, _nameOfFunct, arg->getValue());
		if (!isInternalNamespace()) {
			this->_isFunctionAvailable = hasMethods();
		}
	}
}

$Type* FunctionAvailableCall::typeCheck($SymbolTable* stable) {
	if (this->_type != nullptr) {
		return this->_type;
	}
	if ($instanceOf($LiteralExpr, this->_arg)) {
		$init($Type);
		return $set(this, _type, $Type::Boolean);
	}
	$init($ErrorMsg);
	$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::NEED_LITERAL_ERR, $of("function-available"_s), static_cast<$SyntaxTreeNode*>(this)));
	$throwNew($TypeCheckError, err);
}

$Object* FunctionAvailableCall::evaluateAtCompileTime() {
	$init($Boolean);
	return $of(getResult() ? $Boolean::TRUE : $Boolean::FALSE);
}

bool FunctionAvailableCall::hasMethods() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, className, getClassNameFromUri(this->_namespaceOfFunct));
	$var($String, methodName, nullptr);
	int32_t colonIndex = $nc(this->_nameOfFunct)->indexOf(":"_s);
	if (colonIndex > 0) {
		$var($String, functionName, $nc(this->_nameOfFunct)->substring(colonIndex + 1));
		int32_t lastDotIndex = functionName->lastIndexOf((int32_t)u'.');
		if (lastDotIndex > 0) {
			$assign(methodName, functionName->substring(lastDotIndex + 1));
			if (className != nullptr && className->length() != 0) {
				$assign(className, $str({className, "."_s, $(functionName->substring(0, lastDotIndex))}));
			} else {
				$assign(className, functionName->substring(0, lastDotIndex));
			}
		} else {
			$assign(methodName, functionName);
		}
	} else {
		$assign(methodName, this->_nameOfFunct);
	}
	if (className == nullptr || methodName == nullptr) {
		return false;
	}
	if ($nc(methodName)->indexOf((int32_t)u'-') > 0) {
		$assign(methodName, replaceDash(methodName));
	}
	try {
		$Class* clazz = $ObjectFactory::findProviderClass(className, true);
		if (clazz == nullptr) {
			return false;
		}
		$var($MethodArray, methods, $nc(clazz)->getMethods());
		for (int32_t i = 0; i < $nc(methods)->length; ++i) {
			int32_t mods = $nc(methods->get(i))->getModifiers();
			bool var$1 = $Modifier::isPublic(mods);
			bool var$0 = var$1 && $Modifier::isStatic(mods);
			if (var$0 && $nc($($nc(methods->get(i))->getName()))->equals(methodName)) {
				return true;
			}
		}
	} catch ($ClassNotFoundException& e) {
		return false;
	}
	return false;
}

bool FunctionAvailableCall::getResult() {
	$useLocalCurrentObjectStackCache();
	if (this->_nameOfFunct == nullptr) {
		return false;
	}
	if (isInternalNamespace()) {
		$var($Parser, parser, getParser());
		this->_isFunctionAvailable = $nc(parser)->functionSupported($($Util::getLocalName(this->_nameOfFunct)));
	}
	return this->_isFunctionAvailable;
}

bool FunctionAvailableCall::isInternalNamespace() {
	$init($Constants);
	bool var$0 = this->_namespaceOfFunct == nullptr || $nc(this->_namespaceOfFunct)->equals($Constants::EMPTYSTRING);
	return (var$0 || $nc(this->_namespaceOfFunct)->equals($Constants::TRANSLET_URI));
}

void FunctionAvailableCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$nc($($nc(methodGen)->getInstructionList()))->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, getResult())));
}

FunctionAvailableCall::FunctionAvailableCall() {
}

$Class* FunctionAvailableCall::load$($String* name, bool initialize) {
	$loadClass(FunctionAvailableCall, name, initialize, &_FunctionAvailableCall_ClassInfo_, allocate$FunctionAvailableCall);
	return class$;
}

$Class* FunctionAvailableCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com