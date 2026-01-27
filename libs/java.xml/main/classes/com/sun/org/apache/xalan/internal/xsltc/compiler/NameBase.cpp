#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NameBase.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef NODE_ITERATOR_SIG
#undef OBJECT_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
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

$FieldInfo _NameBase_FieldInfo_[] = {
	{"_param", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(NameBase, _param)},
	{"_paramType", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PRIVATE, $field(NameBase, _paramType)},
	{}
};

$MethodInfo _NameBase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC, $method(NameBase, init$, void, $QName*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(NameBase, init$, void, $QName*, $List*)},
	{"getType", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(NameBase, getType, $Type*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(NameBase, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(NameBase, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _NameBase_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.NameBase",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	_NameBase_FieldInfo_,
	_NameBase_MethodInfo_
};

$Object* allocate$NameBase($Class* clazz) {
	return $of($alloc(NameBase));
}

void NameBase::init$($QName* fname) {
	$FunctionCall::init$(fname);
	$set(this, _param, nullptr);
	$init($Type);
	$set(this, _paramType, $Type::Node);
}

void NameBase::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
	$set(this, _param, nullptr);
	$init($Type);
	$set(this, _paramType, $Type::Node);
	$set(this, _param, argument(0));
}

$Type* NameBase::typeCheck($SymbolTable* stable) {
	switch (argumentCount()) {
	case 0:
		{
			$init($Type);
			$set(this, _paramType, $Type::Node);
			break;
		}
	case 1:
		{
			$set(this, _paramType, $nc(this->_param)->typeCheck(stable));
			break;
		}
	default:
		{
			$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
		}
	}
	$init($Type);
	if ((this->_paramType != $Type::NodeSet) && (this->_paramType != $Type::Node) && (this->_paramType != $Type::Reference)) {
		$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
	}
	return ($set(this, _type, $Type::String));
}

$Type* NameBase::getType() {
	return this->_type;
}

void NameBase::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append($(methodGen->loadDOM()));
	if (argumentCount() == 0) {
		il->append($(methodGen->loadContextNode()));
	} else {
		$init($Type);
		if (this->_paramType == $Type::Node) {
			$nc(this->_param)->translate(classGen, methodGen);
		} else {
			if (this->_paramType == $Type::Reference) {
				$nc(this->_param)->translate(classGen, methodGen);
				$init($Constants);
				il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "referenceToNodeSet"_s, $$str({"("_s, $Constants::OBJECT_SIG, ")"_s, $Constants::NODE_ITERATOR_SIG})))));
				il->append($(methodGen->nextNode()));
			} else {
				$nc(this->_param)->translate(classGen, methodGen);
				$nc(this->_param)->startIterator(classGen, methodGen);
				il->append($(methodGen->nextNode()));
			}
		}
	}
}

NameBase::NameBase() {
}

$Class* NameBase::load$($String* name, bool initialize) {
	$loadClass(NameBase, name, initialize, &_NameBase_ClassInfo_, allocate$NameBase);
	return class$;
}

$Class* NameBase::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com