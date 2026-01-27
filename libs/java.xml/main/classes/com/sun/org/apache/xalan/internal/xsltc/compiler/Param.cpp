#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNONNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ACC_PUBLIC
#undef ADD_PARAMETER
#undef ADD_PARAMETER_SIG
#undef DUP
#undef EMPTYSTRING
#undef NOP
#undef TRANSLET_CLASS
#undef VARIABLE_REDEF_ERR

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $IFNONNULL = ::com::sun::org::apache::bcel::internal::generic::IFNONNULL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Template = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $ObjectType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ObjectType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _Param_FieldInfo_[] = {
	{"_isInSimpleNamedTemplate", "Z", nullptr, $PRIVATE, $field(Param, _isInSimpleNamedTemplate)},
	{}
};

$MethodInfo _Param_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Param, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(Param, display, void, int32_t)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Param, parseContents, void, $Parser*)},
	{"setLoadInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $method(Param, setLoadInstruction, $Instruction*, $Instruction*)},
	{"setStoreInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $method(Param, setStoreInstruction, $Instruction*, $Instruction*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Param, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Param, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Param, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Param_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Param",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.VariableBase",
	nullptr,
	_Param_FieldInfo_,
	_Param_MethodInfo_
};

$Object* allocate$Param($Class* clazz) {
	return $of($alloc(Param));
}

void Param::init$() {
	$VariableBase::init$();
	this->_isInSimpleNamedTemplate = false;
}

$String* Param::toString() {
	return $str({"param("_s, this->_name, ")"_s});
}

$Instruction* Param::setLoadInstruction($Instruction* instruction) {
	$var($Instruction, tmp, this->_loadInstruction);
	$set(this, _loadInstruction, instruction);
	return tmp;
}

$Instruction* Param::setStoreInstruction($Instruction* instruction) {
	$var($Instruction, tmp, this->_storeInstruction);
	$set(this, _storeInstruction, instruction);
	return tmp;
}

void Param::display(int32_t indent) {
	$useLocalCurrentObjectStackCache();
	this->indent(indent);
	$nc($System::out)->println($$str({"param "_s, this->_name}));
	if (this->_select != nullptr) {
		this->indent(indent + $SyntaxTreeNode::IndentIncrement);
		$nc($System::out)->println($$str({"select "_s, $($nc(this->_select)->toString())}));
	}
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

void Param::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$VariableBase::parseContents(parser);
	$var($SyntaxTreeNode, parent, getParent());
	if ($instanceOf($Stylesheet, parent)) {
		this->_isLocal = false;
		$var(Param, param, $nc($($nc(parser)->getSymbolTable()))->lookupParam(this->_name));
		if (param != nullptr) {
			int32_t us = this->getImportPrecedence();
			int32_t them = param->getImportPrecedence();
			if (us == them) {
				$var($String, name, $nc(this->_name)->toString());
				$init($ErrorMsg);
				reportError(this, parser, $ErrorMsg::VARIABLE_REDEF_ERR, name);
			} else if (them > us) {
				this->_ignore = true;
				copyReferences(param);
				return;
			} else {
				param->copyReferences(this);
				param->disable();
			}
		}
		$nc(($cast($Stylesheet, parent)))->addParam(this);
		$nc($(parser->getSymbolTable()))->addParam(this);
	} else if ($instanceOf($Template, parent)) {
		$var($Template, template$, $cast($Template, parent));
		this->_isLocal = true;
		$nc(template$)->addParameter(this);
		if (template$->isSimpleNamedTemplate()) {
			this->_isInSimpleNamedTemplate = true;
		}
	}
}

$Type* Param::typeCheck($SymbolTable* stable) {
	if (this->_select != nullptr) {
		$set(this, _type, $nc(this->_select)->typeCheck(stable));
		if ($instanceOf($ReferenceType, this->_type) == false && !($instanceOf($ObjectType, this->_type))) {
			$init($Type);
			$set(this, _select, $new($CastExpr, this->_select, $Type::Reference));
		}
	} else if (hasContents()) {
		typeCheckContents(stable);
	}
	$init($Type);
	$set(this, _type, $Type::Reference);
	return $Type::Void;
}

void Param::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_ignore) {
		return;
	}
	this->_ignore = true;
	$var($String, name, $BasisLibrary::mapQNameToJavaName($($nc(this->_name)->toString())));
	$var($String, signature, $nc(this->_type)->toSignature());
	$var($String, className, $nc(this->_type)->getClassName());
	if (isLocal()) {
		if (this->_isInSimpleNamedTemplate) {
			$nc(il)->append($(loadInstruction()));
			$var($BranchHandle, ifBlock, il->append(static_cast<$BranchInstruction*>($$new($IFNONNULL, nullptr))));
			translateValue(classGen, methodGen);
			il->append($(storeInstruction()));
			$init($Constants);
			$nc(ifBlock)->setTarget($(il->append($Constants::NOP)));
			return;
		}
		$nc(il)->append($(classGen->loadTranslet()));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, name)));
		translateValue(classGen, methodGen);
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, true)));
		$init($Constants);
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, $Constants::ADD_PARAMETER, $Constants::ADD_PARAMETER_SIG))));
		if (className != $Constants::EMPTYSTRING) {
			il->append(static_cast<$Instruction*>($$new($CHECKCAST, $nc(cpg)->addClass(className))));
		}
		$nc(this->_type)->translateUnBox(classGen, methodGen);
		if ($nc(this->_refs)->isEmpty()) {
			il->append($($nc(this->_type)->POP()));
			$set(this, _local, nullptr);
		} else {
			$var($String, var$0, name);
			$var($1Type, var$1, $nc(this->_type)->toJCType());
			$set(this, _local, methodGen->addLocalVariable2(var$0, var$1, $(il->getEnd())));
			il->append($($nc(this->_type)->STORE($nc(this->_local)->getIndex())));
		}
	} else if (classGen->containsField(name) == nullptr) {
		int32_t var$2 = $Constants::ACC_PUBLIC;
		int32_t var$3 = $nc(cpg)->addUtf8(name);
		int32_t var$4 = cpg->addUtf8(signature);
		classGen->addField($$new($Field, var$2, var$3, var$4, nullptr, $(cpg->getConstantPool())));
		$nc(il)->append($(classGen->loadTranslet()));
		$init($Constants);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, name)));
		translateValue(classGen, methodGen);
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, true)));
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, $Constants::ADD_PARAMETER, $Constants::ADD_PARAMETER_SIG))));
		$nc(this->_type)->translateUnBox(classGen, methodGen);
		if (className != $Constants::EMPTYSTRING) {
			il->append(static_cast<$Instruction*>($$new($CHECKCAST, $nc(cpg)->addClass(className))));
		}
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, $nc(cpg)->addFieldref($(classGen->getClassName()), name, signature))));
	}
}

Param::Param() {
}

$Class* Param::load$($String* name, bool initialize) {
	$loadClass(Param, name, initialize, &_Param_ClassInfo_, allocate$Param);
	return class$;
}

$Class* Param::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com