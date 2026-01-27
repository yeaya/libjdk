#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UnsupportedElement.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Fallback.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef STRING_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Fallback = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Fallback;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _UnsupportedElement_FieldInfo_[] = {
	{"_fallbacks", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;>;", $PRIVATE, $field(UnsupportedElement, _fallbacks)},
	{"_message", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;", nullptr, $PRIVATE, $field(UnsupportedElement, _message)},
	{"_isExtension", "Z", nullptr, $PRIVATE, $field(UnsupportedElement, _isExtension)},
	{}
};

$MethodInfo _UnsupportedElement_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(UnsupportedElement, init$, void, $String*, $String*, $String*, bool)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnsupportedElement, display, void, int32_t)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(UnsupportedElement, parseContents, void, $Parser*)},
	{"processFallbacks", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PRIVATE, $method(UnsupportedElement, processFallbacks, void, $Parser*)},
	{"setErrorMessage", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;)V", nullptr, $PUBLIC, $method(UnsupportedElement, setErrorMessage, void, $ErrorMsg*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(UnsupportedElement, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(UnsupportedElement, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _UnsupportedElement_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.UnsupportedElement",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode",
	nullptr,
	_UnsupportedElement_FieldInfo_,
	_UnsupportedElement_MethodInfo_
};

$Object* allocate$UnsupportedElement($Class* clazz) {
	return $of($alloc(UnsupportedElement));
}

void UnsupportedElement::init$($String* uri, $String* prefix, $String* local, bool isExtension) {
	$SyntaxTreeNode::init$(uri, prefix, local);
	$set(this, _fallbacks, nullptr);
	$set(this, _message, nullptr);
	this->_isExtension = false;
	this->_isExtension = isExtension;
}

void UnsupportedElement::setErrorMessage($ErrorMsg* message) {
	$set(this, _message, message);
}

void UnsupportedElement::display(int32_t indent) {
	$useLocalCurrentObjectStackCache();
	this->indent(indent);
	$var($String, var$0, $$str({"Unsupported element = "_s, $($nc(this->_qname)->getNamespace()), ":"_s}));
	$Util::println($$concat(var$0, $($nc(this->_qname)->getLocalPart())));
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

void UnsupportedElement::processFallbacks($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($List, children, getContents());
	if (children != nullptr) {
		int32_t count = children->size();
		for (int32_t i = 0; i < count; ++i) {
			$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, children->get(i)));
			if ($instanceOf($Fallback, child)) {
				$var($Fallback, fallback, $cast($Fallback, child));
				$nc(fallback)->activate();
				fallback->parseContents(parser);
				if (this->_fallbacks == nullptr) {
					$set(this, _fallbacks, $new($ArrayList));
				}
				$nc(this->_fallbacks)->add(child);
			}
		}
	}
}

void UnsupportedElement::parseContents($Parser* parser) {
	processFallbacks(parser);
}

$Type* UnsupportedElement::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	if (this->_fallbacks != nullptr) {
		int32_t count = $nc(this->_fallbacks)->size();
		for (int32_t i = 0; i < count; ++i) {
			$var($Fallback, fallback, $cast($Fallback, $nc(this->_fallbacks)->get(i)));
			$nc(fallback)->typeCheck(stable);
		}
	}
	$init($Type);
	return $Type::Void;
}

void UnsupportedElement::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	if (this->_fallbacks != nullptr) {
		int32_t count = $nc(this->_fallbacks)->size();
		for (int32_t i = 0; i < count; ++i) {
			$var($Fallback, fallback, $cast($Fallback, $nc(this->_fallbacks)->get(i)));
			$nc(fallback)->translate(classGen, methodGen);
		}
	} else {
		$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		$init($Constants);
		int32_t unsupportedElem = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "unsupported_ElementF"_s, $$str({"("_s, $Constants::STRING_SIG, "Z)V"_s}));
		$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc($(getQName()))->toString()))));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_isExtension)));
		il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, unsupportedElem)));
	}
}

UnsupportedElement::UnsupportedElement() {
}

$Class* UnsupportedElement::load$($String* name, bool initialize) {
	$loadClass(UnsupportedElement, name, initialize, &_UnsupportedElement_ClassInfo_, allocate$UnsupportedElement);
	return class$;
}

$Class* UnsupportedElement::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com