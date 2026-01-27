#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/generic/ACONST_NULL.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/DCONST.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/ICONST.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ACC_PUBLIC
#undef VARIABLE_REDEF_ERR

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $ACONST_NULL = ::com::sun::org::apache::bcel::internal::generic::ACONST_NULL;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $DCONST = ::com::sun::org::apache::bcel::internal::generic::DCONST;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $ICONST = ::com::sun::org::apache::bcel::internal::generic::ICONST;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $IntType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::IntType;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$MethodInfo _Variable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Variable, init$, void)},
	{"getIndex", "()I", nullptr, $PUBLIC, $method(Variable, getIndex, int32_t)},
	{"initialize", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(Variable, initialize, void, $ClassGenerator*, $MethodGenerator*)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Variable, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Variable, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Variable, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Variable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Variable",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.VariableBase",
	nullptr,
	nullptr,
	_Variable_MethodInfo_
};

$Object* allocate$Variable($Class* clazz) {
	return $of($alloc(Variable));
}

void Variable::init$() {
	$VariableBase::init$();
}

int32_t Variable::getIndex() {
	return (this->_local != nullptr) ? $nc(this->_local)->getIndex() : -1;
}

void Variable::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$VariableBase::parseContents(parser);
	$var($SyntaxTreeNode, parent, getParent());
	if ($instanceOf($Stylesheet, parent)) {
		this->_isLocal = false;
		$var(Variable, var, $nc($($nc(parser)->getSymbolTable()))->lookupVariable(this->_name));
		if (var != nullptr) {
			int32_t us = this->getImportPrecedence();
			int32_t them = var->getImportPrecedence();
			if (us == them) {
				$var($String, name, $nc(this->_name)->toString());
				$init($ErrorMsg);
				reportError(this, parser, $ErrorMsg::VARIABLE_REDEF_ERR, name);
			} else if (them > us) {
				this->_ignore = true;
				copyReferences(var);
				return;
			} else {
				var->copyReferences(this);
				var->disable();
			}
		}
		$nc(($cast($Stylesheet, parent)))->addVariable(this);
		$nc($(parser->getSymbolTable()))->addVariable(this);
	} else {
		this->_isLocal = true;
	}
}

$Type* Variable::typeCheck($SymbolTable* stable) {
	if (this->_select != nullptr) {
		$set(this, _type, $nc(this->_select)->typeCheck(stable));
	} else if (hasContents()) {
		typeCheckContents(stable);
		$init($Type);
		$set(this, _type, $Type::ResultTree);
	} else {
		$init($Type);
		$set(this, _type, $Type::Reference);
	}
	$init($Type);
	return $Type::Void;
}

void Variable::initialize($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	bool var$0 = isLocal();
	if (var$0 && !$nc(this->_refs)->isEmpty()) {
		if (this->_local == nullptr) {
			$var($String, var$1, getEscapedName());
			$set(this, _local, methodGen->addLocalVariable2(var$1, $($nc(this->_type)->toJCType()), nullptr));
		}
		if (($instanceOf($IntType, this->_type)) || ($instanceOf($NodeType, this->_type)) || ($instanceOf($BooleanType, this->_type))) {
			$nc(il)->append(static_cast<$Instruction*>($$new($ICONST, 0)));
		} else if ($instanceOf($RealType, this->_type)) {
			$nc(il)->append(static_cast<$Instruction*>($$new($DCONST, (double)0)));
		} else {
			$nc(il)->append(static_cast<$Instruction*>($$new($ACONST_NULL)));
		}
		$nc(this->_local)->setStart($($nc(il)->append($($nc(this->_type)->STORE($nc(this->_local)->getIndex())))));
	}
}

void Variable::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if ($nc(this->_refs)->isEmpty()) {
		this->_ignore = true;
	}
	if (this->_ignore) {
		return;
	}
	this->_ignore = true;
	$var($String, name, getEscapedName());
	if (isLocal()) {
		translateValue(classGen, methodGen);
		bool createLocal = this->_local == nullptr;
		if (createLocal) {
			mapRegister(methodGen);
		}
		$var($InstructionHandle, storeInst, $nc(il)->append($($nc(this->_type)->STORE($nc(this->_local)->getIndex()))));
		if (createLocal) {
			$nc(this->_local)->setStart(storeInst);
		}
	} else {
		$var($String, signature, $nc(this->_type)->toSignature());
		if (classGen->containsField(name) == nullptr) {
			int32_t var$0 = $Constants::ACC_PUBLIC;
			int32_t var$1 = $nc(cpg)->addUtf8(name);
			int32_t var$2 = cpg->addUtf8(signature);
			classGen->addField($$new($Field, var$0, var$1, var$2, nullptr, $(cpg->getConstantPool())));
			$nc(il)->append($(classGen->loadTranslet()));
			translateValue(classGen, methodGen);
			il->append(static_cast<$Instruction*>($$new($PUTFIELD, $nc(cpg)->addFieldref($(classGen->getClassName()), name, signature))));
		}
	}
}

Variable::Variable() {
}

$Class* Variable::load$($String* name, bool initialize) {
	$loadClass(Variable, name, initialize, &_Variable_ClassInfo_, allocate$Variable);
	return class$;
}

$Class* Variable::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com