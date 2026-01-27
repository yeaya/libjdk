#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Comment.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Text.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

#undef DUP
#undef STRING_SIG
#undef STRING_VALUE_HANDLER
#undef STRING_VALUE_HANDLER_SIG
#undef TRANSLET_CLASS
#undef TRANSLET_OUTPUT_INTERFACE

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $Text = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Text;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$MethodInfo _Comment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Comment, init$, void)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Comment, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Comment, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Comment, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Comment_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Comment",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	nullptr,
	_Comment_MethodInfo_
};

$Object* allocate$Comment($Class* clazz) {
	return $of($alloc(Comment));
}

void Comment::init$() {
	$Instruction::init$();
}

void Comment::parseContents($Parser* parser) {
	parseChildren(parser);
}

$Type* Comment::typeCheck($SymbolTable* stable) {
	typeCheckContents(stable);
	$init($Type);
	return $Type::String;
}

void Comment::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($Text, rawText, nullptr);
	if (elementCount() == 1) {
		$var($Object, content, elementAt(0));
		if ($instanceOf($Text, content)) {
			$assign(rawText, $cast($Text, content));
		}
	}
	if (rawText != nullptr) {
		$nc(il)->append($(methodGen->loadHandler()));
		if (rawText->canLoadAsArrayOffsetLength()) {
			rawText->loadAsArrayOffsetLength(classGen, methodGen);
			$init($Constants);
			int32_t comment = $nc(cpg)->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "comment"_s, "([CII)V"_s);
			il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, comment, 4)));
		} else {
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $(rawText->getText()))));
			$init($Constants);
			int32_t comment = $nc(cpg)->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "comment"_s, $$str({"("_s, $Constants::STRING_SIG, ")V"_s}));
			il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, comment, 2)));
		}
	} else {
		$nc(il)->append($(methodGen->loadHandler()));
		$init($Constants);
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append($(classGen->loadTranslet()));
		il->append(static_cast<$1Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, "stringValueHandler"_s, $Constants::STRING_VALUE_HANDLER_SIG))));
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append($(methodGen->storeHandler()));
		translateContents(classGen, methodGen);
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::STRING_VALUE_HANDLER, "getValue"_s, $$str({"()"_s, $Constants::STRING_SIG})))));
		int32_t comment = $nc(cpg)->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "comment"_s, $$str({"("_s, $Constants::STRING_SIG, ")V"_s}));
		il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, comment, 2)));
		il->append($(methodGen->storeHandler()));
	}
}

Comment::Comment() {
}

$Class* Comment::load$($String* name, bool initialize) {
	$loadClass(Comment, name, initialize, &_Comment_ClassInfo_, allocate$Comment);
	return class$;
}

$Class* Comment::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com