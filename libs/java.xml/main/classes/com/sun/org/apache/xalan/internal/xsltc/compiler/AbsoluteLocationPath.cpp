#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AbsoluteLocationPath.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef ABSOLUTE_ITERATOR
#undef DOM_INTF
#undef DUP
#undef NODE_ITERATOR_SIG

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
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

$FieldInfo _AbsoluteLocationPath_FieldInfo_[] = {
	{"_path", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(AbsoluteLocationPath, _path)},
	{}
};

$MethodInfo _AbsoluteLocationPath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbsoluteLocationPath, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PUBLIC, $method(AbsoluteLocationPath, init$, void, $Expression*)},
	{"getPath", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC, $method(AbsoluteLocationPath, getPath, $Expression*)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(AbsoluteLocationPath, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbsoluteLocationPath, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(AbsoluteLocationPath, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(AbsoluteLocationPath, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _AbsoluteLocationPath_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.AbsoluteLocationPath",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_AbsoluteLocationPath_FieldInfo_,
	_AbsoluteLocationPath_MethodInfo_
};

$Object* allocate$AbsoluteLocationPath($Class* clazz) {
	return $of($alloc(AbsoluteLocationPath));
}

void AbsoluteLocationPath::init$() {
	$Expression::init$();
	$set(this, _path, nullptr);
}

void AbsoluteLocationPath::init$($Expression* path) {
	$Expression::init$();
	$set(this, _path, path);
	if (path != nullptr) {
		$nc(this->_path)->setParent(this);
	}
}

void AbsoluteLocationPath::setParser($Parser* parser) {
	$Expression::setParser(parser);
	if (this->_path != nullptr) {
		$nc(this->_path)->setParser(parser);
	}
}

$Expression* AbsoluteLocationPath::getPath() {
	return (this->_path);
}

$String* AbsoluteLocationPath::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"AbsoluteLocationPath("_s, (this->_path != nullptr ? $($nc(this->_path)->toString()) : "null"_s), $$str(u')')});
}

$Type* AbsoluteLocationPath::typeCheck($SymbolTable* stable) {
	if (this->_path != nullptr) {
		$var($Type, ptype, $nc(this->_path)->typeCheck(stable));
		if ($instanceOf($NodeType, ptype)) {
			$init($Type);
			$set(this, _path, $new($CastExpr, this->_path, $Type::NodeSet));
		}
	}
	$init($Type);
	return $set(this, _type, $Type::NodeSet);
}

void AbsoluteLocationPath::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_path != nullptr) {
		$init($Constants);
		int32_t initAI = $nc(cpg)->addMethodref($Constants::ABSOLUTE_ITERATOR, "<init>"_s, $$str({"("_s, $Constants::NODE_ITERATOR_SIG, ")V"_s}));
		$nc(this->_path)->translate(classGen, methodGen);
		$var($LocalVariableGen, relPathIterator, methodGen->addLocalVariable("abs_location_path_tmp"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
		$nc(relPathIterator)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, relPathIterator->getIndex())))));
		$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::ABSOLUTE_ITERATOR))));
		il->append(static_cast<$Instruction*>($Constants::DUP));
		relPathIterator->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, relPathIterator->getIndex())))));
		il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, initAI)));
	} else {
		$init($Constants);
		int32_t gitr = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getIterator"_s, $$str({"()"_s, $Constants::NODE_ITERATOR_SIG}));
		$nc(il)->append($(methodGen->loadDOM()));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, gitr, 1)));
	}
}

AbsoluteLocationPath::AbsoluteLocationPath() {
}

$Class* AbsoluteLocationPath::load$($String* name, bool initialize) {
	$loadClass(AbsoluteLocationPath, name, initialize, &_AbsoluteLocationPath_ClassInfo_, allocate$AbsoluteLocationPath);
	return class$;
}

$Class* AbsoluteLocationPath::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com