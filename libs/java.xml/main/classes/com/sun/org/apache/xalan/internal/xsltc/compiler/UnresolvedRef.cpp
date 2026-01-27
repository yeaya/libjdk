#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UnresolvedRef.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ParameterRef.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRef.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <jcpp.h>

#undef CIRCULAR_VARIABLE_ERR
#undef ERROR
#undef VARIABLE_UNDEF_ERR

using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $ParameterRef = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ParameterRef;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $VariableRef = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRef;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _UnresolvedRef_FieldInfo_[] = {
	{"_variableName", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(UnresolvedRef, _variableName)},
	{"_ref", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;", nullptr, $PRIVATE, $field(UnresolvedRef, _ref)},
	{}
};

$MethodInfo _UnresolvedRef_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC, $method(UnresolvedRef, init$, void, $QName*)},
	{"getName", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC, $method(UnresolvedRef, getName, $QName*)},
	{"reportError", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;", nullptr, $PRIVATE, $method(UnresolvedRef, reportError, $ErrorMsg*)},
	{"resolve", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;", nullptr, $PRIVATE, $method(UnresolvedRef, resolve, $VariableRefBase*, $Parser*, $SymbolTable*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnresolvedRef, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(UnresolvedRef, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(UnresolvedRef, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _UnresolvedRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.UnresolvedRef",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.VariableRefBase",
	nullptr,
	_UnresolvedRef_FieldInfo_,
	_UnresolvedRef_MethodInfo_
};

$Object* allocate$UnresolvedRef($Class* clazz) {
	return $of($alloc(UnresolvedRef));
}

void UnresolvedRef::init$($QName* name) {
	$VariableRefBase::init$();
	$set(this, _variableName, nullptr);
	$set(this, _ref, nullptr);
	$set(this, _variableName, name);
}

$QName* UnresolvedRef::getName() {
	return (this->_variableName);
}

$ErrorMsg* UnresolvedRef::reportError() {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::VARIABLE_UNDEF_ERR, $of(this->_variableName), static_cast<$SyntaxTreeNode*>(this)));
	$nc($(getParser()))->reportError($Constants::ERROR, err);
	return (err);
}

$VariableRefBase* UnresolvedRef::resolve($Parser* parser, $SymbolTable* stable) {
	$var($VariableBase, ref, $nc(parser)->lookupVariable(this->_variableName));
	if (ref == nullptr) {
		$assign(ref, $cast($VariableBase, $nc(stable)->lookupName(this->_variableName)));
	}
	if (ref == nullptr) {
		reportError();
		return nullptr;
	}
	$set(this, _variable, ref);
	addParentDependency();
	if ($instanceOf($Variable, ref)) {
		return $new($VariableRef, $cast($Variable, ref));
	} else if ($instanceOf($Param, ref)) {
		return $new($ParameterRef, $cast($Param, ref));
	}
	return nullptr;
}

$Type* UnresolvedRef::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	if (this->_ref != nullptr) {
		$var($String, name, $nc(this->_variableName)->toString());
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::CIRCULAR_VARIABLE_ERR, $of(name), static_cast<$SyntaxTreeNode*>(this)));
	}
	if (($set(this, _ref, resolve($(getParser()), stable))) != nullptr) {
		return ($set(this, _type, $nc(this->_ref)->typeCheck(stable)));
	}
	$throwNew($TypeCheckError, $(reportError()));
}

void UnresolvedRef::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	if (this->_ref != nullptr) {
		$nc(this->_ref)->translate(classGen, methodGen);
	} else {
		reportError();
	}
}

$String* UnresolvedRef::toString() {
	return "unresolved-ref()"_s;
}

UnresolvedRef::UnresolvedRef() {
}

$Class* UnresolvedRef::load$($String* name, bool initialize) {
	$loadClass(UnresolvedRef, name, initialize, &_UnresolvedRef_ClassInfo_, allocate$UnresolvedRef);
	return class$;
}

$Class* UnresolvedRef::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com