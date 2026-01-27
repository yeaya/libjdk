#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ApplyImports.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Mode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef POP_PARAM_FRAME
#undef POP_PARAM_FRAME_SIG
#undef PUSH_PARAM_FRAME
#undef PUSH_PARAM_FRAME_SIG
#undef TRANSLET_CLASS

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Mode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Template = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
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

$FieldInfo _ApplyImports_FieldInfo_[] = {
	{"_modeName", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(ApplyImports, _modeName)},
	{"_precedence", "I", nullptr, $PRIVATE, $field(ApplyImports, _precedence)},
	{}
};

$MethodInfo _ApplyImports_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ApplyImports, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(ApplyImports, display, void, int32_t)},
	{"getMinPrecedence", "(I)I", nullptr, $PRIVATE, $method(ApplyImports, getMinPrecedence, int32_t, int32_t)},
	{"hasWithParams", "()Z", nullptr, $PUBLIC, $method(ApplyImports, hasWithParams, bool)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(ApplyImports, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ApplyImports, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(ApplyImports, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _ApplyImports_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ApplyImports",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_ApplyImports_FieldInfo_,
	_ApplyImports_MethodInfo_
};

$Object* allocate$ApplyImports($Class* clazz) {
	return $of($alloc(ApplyImports));
}

void ApplyImports::init$() {
	$Instruction::init$();
}

void ApplyImports::display(int32_t indent) {
	this->indent(indent);
	$Util::println("ApplyTemplates"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	if (this->_modeName != nullptr) {
		this->indent(indent + $SyntaxTreeNode::IndentIncrement);
		$Util::println($$str({"mode "_s, this->_modeName}));
	}
}

bool ApplyImports::hasWithParams() {
	return hasContents();
}

int32_t ApplyImports::getMinPrecedence(int32_t max) {
	$var($Stylesheet, includeRoot, getStylesheet());
	while ($nc(includeRoot)->_includedFrom != nullptr) {
		$assign(includeRoot, includeRoot->_includedFrom);
	}
	return $nc(includeRoot)->getMinimumDescendantPrecedence();
}

void ApplyImports::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($Stylesheet, stylesheet, getStylesheet());
	$nc(stylesheet)->setTemplateInlining(false);
	$var($Template, template$, getTemplate());
	$set(this, _modeName, $nc(template$)->getModeName());
	this->_precedence = template$->getImportPrecedence();
	$assign(stylesheet, $nc(parser)->getTopLevelStylesheet());
	parseChildren(parser);
}

$Type* ApplyImports::typeCheck($SymbolTable* stable) {
	typeCheckContents(stable);
	$init($Type);
	return $Type::Void;
}

void ApplyImports::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($Stylesheet, stylesheet, $nc(classGen)->getStylesheet());
	$var($ConstantPoolGen, cpg, classGen->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	int32_t current = methodGen->getLocalIndex("current"_s);
	$nc(il)->append($(classGen->loadTranslet()));
	il->append($(methodGen->loadDOM()));
	il->append($(methodGen->loadIterator()));
	il->append($(methodGen->loadHandler()));
	il->append($(methodGen->loadCurrentNode()));
	if ($nc(stylesheet)->hasLocalParams()) {
		il->append($(classGen->loadTranslet()));
		$init($Constants);
		int32_t pushFrame = $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, $Constants::PUSH_PARAM_FRAME, $Constants::PUSH_PARAM_FRAME_SIG);
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, pushFrame)));
	}
	int32_t maxPrecedence = this->_precedence;
	int32_t minPrecedence = getMinPrecedence(maxPrecedence);
	$var($Mode, mode, $nc(stylesheet)->getMode(this->_modeName));
	$var($String, functionName, $nc(mode)->functionName(minPrecedence, maxPrecedence));
	$var($String, className, $nc($(classGen->getStylesheet()))->getClassName());
	$var($String, signature, classGen->getApplyTemplatesSigForImport());
	int32_t applyTemplates = $nc(cpg)->addMethodref(className, functionName, signature);
	il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, applyTemplates)));
	if (stylesheet->hasLocalParams()) {
		il->append($(classGen->loadTranslet()));
		$init($Constants);
		int32_t pushFrame = cpg->addMethodref($Constants::TRANSLET_CLASS, $Constants::POP_PARAM_FRAME, $Constants::POP_PARAM_FRAME_SIG);
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, pushFrame)));
	}
}

ApplyImports::ApplyImports() {
}

$Class* ApplyImports::load$($String* name, bool initialize) {
	$loadClass(ApplyImports, name, initialize, &_ApplyImports_ClassInfo_, allocate$ApplyImports);
	return class$;
}

$Class* ApplyImports::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com