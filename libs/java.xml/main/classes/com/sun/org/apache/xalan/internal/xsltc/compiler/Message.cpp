#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Message.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
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

#undef ATHROW
#undef DUP
#undef ICONST_1
#undef STREAM_XML_OUTPUT
#undef STRING_SIG
#undef STRING_WRITER
#undef SWAP
#undef TRANSLET_CLASS
#undef TRANSLET_OUTPUT_INTERFACE
#undef WRITER_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Text = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Text;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
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

$FieldInfo _Message_FieldInfo_[] = {
	{"_terminate", "Z", nullptr, $PRIVATE, $field(Message, _terminate)},
	{}
};

$MethodInfo _Message_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Message, init$, void)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Message, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Message, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Message, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Message_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Message",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_Message_FieldInfo_,
	_Message_MethodInfo_
};

$Object* allocate$Message($Class* clazz) {
	return $of($alloc(Message));
}

void Message::init$() {
	$Instruction::init$();
	this->_terminate = false;
}

void Message::parseContents($Parser* parser) {
	$var($String, termstr, getAttribute("terminate"_s));
	if (termstr != nullptr) {
		this->_terminate = termstr->equals("yes"_s);
	}
	parseChildren(parser);
}

$Type* Message::typeCheck($SymbolTable* stable) {
	typeCheckContents(stable);
	$init($Type);
	return $Type::Void;
}

void Message::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append($(classGen->loadTranslet()));
	{
		$var($SyntaxTreeNode, child, nullptr)
		switch (elementCount()) {
		case 0:
			{
				il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, ""_s)));
				break;
			}
		case 1:
			{
				$assign(child, elementAt(0));
				if ($instanceOf($Text, child)) {
					il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc(($cast($Text, child)))->getText()))));
					break;
				}
			}
		default:
			{
				il->append($(methodGen->loadHandler()));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($$new($NEW, $nc(cpg)->addClass($Constants::STREAM_XML_OUTPUT))));
				il->append($(methodGen->storeHandler()));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($$new($NEW, $nc(cpg)->addClass($Constants::STRING_WRITER))));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($Constants::DUP));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($Constants::DUP));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref($Constants::STRING_WRITER, "<init>"_s, "()V"_s))));
				il->append($(methodGen->loadHandler()));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref($Constants::STREAM_XML_OUTPUT, "<init>"_s, "()V"_s))));
				il->append($(methodGen->loadHandler()));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($Constants::SWAP));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, $nc(cpg)->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "setWriter"_s, $$str({"("_s, $Constants::WRITER_SIG, ")V"_s})), 2)));
				il->append($(methodGen->loadHandler()));
				il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "UTF-8"_s)));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, $nc(cpg)->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "setEncoding"_s, $$str({"("_s, $Constants::STRING_SIG, ")V"_s})), 2)));
				il->append($(methodGen->loadHandler()));
				$init($Constants);
				il->append($Constants::ICONST_1);
				$init($Constants);
				il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, $nc(cpg)->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "setOmitXMLDeclaration"_s, "(Z)V"_s), 2)));
				il->append($(methodGen->loadHandler()));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, $nc(cpg)->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "startDocument"_s, "()V"_s), 1)));
				translateContents(classGen, methodGen);
				il->append($(methodGen->loadHandler()));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, $nc(cpg)->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "endDocument"_s, "()V"_s), 1)));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::STRING_WRITER, "toString"_s, $$str({"()"_s, $Constants::STRING_SIG})))));
				$init($Constants);
				il->append(static_cast<$1Instruction*>($Constants::SWAP));
				il->append($(methodGen->storeHandler()));
				break;
			}
		}
	}
	$init($Constants);
	il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, "displayMessage"_s, $$str({"("_s, $Constants::STRING_SIG, ")V"_s})))));
	if (this->_terminate == true) {
		int32_t einit = $nc(cpg)->addMethodref("java.lang.RuntimeException"_s, "<init>"_s, "(Ljava/lang/String;)V"_s);
		il->append(static_cast<$1Instruction*>($$new($NEW, cpg->addClass("java.lang.RuntimeException"_s))));
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "Termination forced by an xsl:message instruction"_s)));
		il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, einit)));
		il->append($Constants::ATHROW);
	}
}

Message::Message() {
}

$Class* Message::load$($String* name, bool initialize) {
	$loadClass(Message, name, initialize, &_Message_ClassInfo_, allocate$Message);
	return class$;
}

$Class* Message::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com