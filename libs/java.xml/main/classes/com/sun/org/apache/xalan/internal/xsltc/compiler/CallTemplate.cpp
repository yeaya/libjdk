#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CallTemplate.h>

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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/WithParam.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/lang/StringBuffer.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ACONST_NULL
#undef DOM_INTF_SIG
#undef ERROR
#undef INVALID_QNAME_ERR
#undef NODE_ITERATOR_SIG
#undef NODE_SIG
#undef OBJECT_SIG
#undef POP_PARAM_FRAME
#undef POP_PARAM_FRAME_SIG
#undef PUSH_PARAM_FRAME
#undef PUSH_PARAM_FRAME_SIG
#undef REQUIRED_ATTR_ERR
#undef TEMPLATE_UNDEF_ERR
#undef TRANSLET_CLASS
#undef TRANSLET_OUTPUT_SIG

using $SyntaxTreeNodeArray = $Array<::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode>;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Template = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template;
using $WithParam = ::com::sun::org::apache::xalan::internal::xsltc::compiler::WithParam;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _CallTemplate_FieldInfo_[] = {
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(CallTemplate, _name)},
	{"_parameters", "[Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PRIVATE, $field(CallTemplate, _parameters)},
	{"_calleeTemplate", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PRIVATE, $field(CallTemplate, _calleeTemplate)},
	{}
};

$MethodInfo _CallTemplate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CallTemplate, init$, void)},
	{"buildParameterList", "()V", nullptr, $PRIVATE, $method(CallTemplate, buildParameterList, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(CallTemplate, display, void, int32_t)},
	{"getCalleeTemplate", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PUBLIC, $method(CallTemplate, getCalleeTemplate, $Template*)},
	{"hasWithParams", "()Z", nullptr, $PUBLIC, $method(CallTemplate, hasWithParams, bool)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(CallTemplate, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(CallTemplate, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(CallTemplate, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _CallTemplate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.CallTemplate",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_CallTemplate_FieldInfo_,
	_CallTemplate_MethodInfo_
};

$Object* allocate$CallTemplate($Class* clazz) {
	return $of($alloc(CallTemplate));
}

void CallTemplate::init$() {
	$Instruction::init$();
	$set(this, _parameters, nullptr);
	$set(this, _calleeTemplate, nullptr);
}

void CallTemplate::display(int32_t indent) {
	this->indent(indent);
	$nc($System::out)->print("CallTemplate"_s);
	$Util::println($$str({" name "_s, this->_name}));
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

bool CallTemplate::hasWithParams() {
	return elementCount() > 0;
}

void CallTemplate::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getAttribute("name"_s));
	if ($nc(name)->length() > 0) {
		if (!$XML11Char::isXML11ValidQName(name)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(name), static_cast<$SyntaxTreeNode*>(this)));
			$nc(parser)->reportError($Constants::ERROR, err);
		}
		$set(this, _name, $nc(parser)->getQNameIgnoreDefaultNs(name));
	} else {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "name"_s);
	}
	parseChildren(parser);
}

$Type* CallTemplate::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($Template, template$, $nc(stable)->lookupTemplate(this->_name));
	if (template$ != nullptr) {
		typeCheckContents(stable);
	} else {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::TEMPLATE_UNDEF_ERR, $of(this->_name), static_cast<$SyntaxTreeNode*>(this)));
		$throwNew($TypeCheckError, err);
	}
	$init($Type);
	return $Type::Void;
}

void CallTemplate::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($Stylesheet, stylesheet, $nc(classGen)->getStylesheet());
	$var($ConstantPoolGen, cpg, classGen->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	bool var$0 = $nc(stylesheet)->hasLocalParams();
	if (var$0 || hasContents()) {
		$set(this, _calleeTemplate, getCalleeTemplate());
		if (this->_calleeTemplate != nullptr) {
			buildParameterList();
		} else {
			$init($Constants);
			int32_t push = $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, $Constants::PUSH_PARAM_FRAME, $Constants::PUSH_PARAM_FRAME_SIG);
			$nc(il)->append($(classGen->loadTranslet()));
			il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, push)));
			translateContents(classGen, methodGen);
		}
	}
	$var($String, className, $nc(stylesheet)->getClassName());
	$var($String, methodName, $Util::escape($($nc(this->_name)->toString())));
	$nc(il)->append($(classGen->loadTranslet()));
	il->append($(methodGen->loadDOM()));
	il->append($(methodGen->loadIterator()));
	il->append($(methodGen->loadHandler()));
	il->append($(methodGen->loadCurrentNode()));
	$init($Constants);
	$var($StringBuffer, methodSig, $new($StringBuffer, $$str({"("_s, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, $Constants::TRANSLET_OUTPUT_SIG, $Constants::NODE_SIG})));
	if (this->_calleeTemplate != nullptr) {
		int32_t numParams = $nc(this->_parameters)->length;
		for (int32_t i = 0; i < numParams; ++i) {
			$var($SyntaxTreeNode, node, $nc(this->_parameters)->get(i));
			methodSig->append($Constants::OBJECT_SIG);
			if ($instanceOf($Param, node)) {
				il->append($Constants::ACONST_NULL);
			} else {
				$nc(node)->translate(classGen, methodGen);
			}
		}
	}
	methodSig->append(")V"_s);
	il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref(className, methodName, $(methodSig->toString())))));
	if (this->_parameters != nullptr) {
		for (int32_t i = 0; i < $nc(this->_parameters)->length; ++i) {
			if ($instanceOf($WithParam, $nc(this->_parameters)->get(i))) {
				$nc(($cast($WithParam, $nc(this->_parameters)->get(i))))->releaseResultTree(classGen, methodGen);
			}
		}
	}
	bool var$1 = this->_calleeTemplate == nullptr;
	if (var$1) {
		bool var$2 = stylesheet->hasLocalParams();
		var$1 = (var$2 || hasContents());
	}
	if (var$1) {
		int32_t pop = $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, $Constants::POP_PARAM_FRAME, $Constants::POP_PARAM_FRAME_SIG);
		il->append($(classGen->loadTranslet()));
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, pop)));
	}
}

$Template* CallTemplate::getCalleeTemplate() {
	$useLocalCurrentObjectStackCache();
	$var($Template, foundTemplate, $nc($($nc($($nc($(getXSLTC()))->getParser()))->getSymbolTable()))->lookupTemplate(this->_name));
	return $nc(foundTemplate)->isSimpleNamedTemplate() ? foundTemplate : ($Template*)nullptr;
}

void CallTemplate::buildParameterList() {
	$useLocalCurrentObjectStackCache();
	$var($List, defaultParams, $nc(this->_calleeTemplate)->getParameters());
	int32_t numParams = $nc(defaultParams)->size();
	$set(this, _parameters, $new($SyntaxTreeNodeArray, numParams));
	for (int32_t i = 0; i < numParams; ++i) {
		$nc(this->_parameters)->set(i, $cast($SyntaxTreeNode, $(defaultParams->get(i))));
	}
	int32_t count = elementCount();
	for (int32_t i = 0; i < count; ++i) {
		$var($Object, node, elementAt(i));
		if ($instanceOf($WithParam, node)) {
			$var($WithParam, withParam, $cast($WithParam, node));
			$var($QName, name, $nc(withParam)->getName());
			for (int32_t k = 0; k < numParams; ++k) {
				$var($SyntaxTreeNode, parm, $nc(this->_parameters)->get(k));
				if ($instanceOf($Param, parm) && $nc($($nc(($cast($Param, parm)))->getName()))->equals(name)) {
					withParam->setDoParameterOptimization(true);
					$nc(this->_parameters)->set(k, withParam);
					break;
				} else if ($instanceOf($WithParam, parm) && $nc($($nc(($cast($WithParam, parm)))->getName()))->equals(name)) {
					withParam->setDoParameterOptimization(true);
					$nc(this->_parameters)->set(k, withParam);
					break;
				}
			}
		}
	}
}

CallTemplate::CallTemplate() {
}

$Class* CallTemplate::load$($String* name, bool initialize) {
	$loadClass(CallTemplate, name, initialize, &_CallTemplate_ClassInfo_, allocate$CallTemplate);
	return class$;
}

$Class* CallTemplate::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com