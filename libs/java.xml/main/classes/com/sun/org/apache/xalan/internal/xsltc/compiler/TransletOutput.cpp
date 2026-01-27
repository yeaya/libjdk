#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TransletOutput.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef EMPTYSTRING
#undef ENABLE_EXTENSION_FUNCTION
#undef REQUIRED_ATTR_ERR
#undef STRING_SIG
#undef TRANSLET_CLASS
#undef TRANSLET_OUTPUT_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $AttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _TransletOutput_FieldInfo_[] = {
	{"_filename", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(TransletOutput, _filename)},
	{"_append", "Z", nullptr, $PRIVATE, $field(TransletOutput, _append)},
	{}
};

$MethodInfo _TransletOutput_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TransletOutput, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(TransletOutput, display, void, int32_t)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutput, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutput, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(TransletOutput, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _TransletOutput_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.TransletOutput",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_TransletOutput_FieldInfo_,
	_TransletOutput_MethodInfo_
};

$Object* allocate$TransletOutput($Class* clazz) {
	return $of($alloc(TransletOutput));
}

void TransletOutput::init$() {
	$Instruction::init$();
}

void TransletOutput::display(int32_t indent) {
	this->indent(indent);
	$Util::println($$str({"TransletOutput: "_s, this->_filename}));
}

void TransletOutput::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, filename, getAttribute("file"_s));
	$var($String, append, getAttribute("append"_s));
	$init($Constants);
	if ((filename == nullptr) || ($nc(filename)->equals($Constants::EMPTYSTRING))) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "file"_s);
	}
	$set(this, _filename, $AttributeValue::create(this, filename, parser));
	bool var$0 = append != nullptr;
	if (var$0) {
		bool var$1 = $(append->toLowerCase())->equals("yes"_s);
		var$0 = (var$1 || $(append->toLowerCase())->equals("true"_s));
	}
	if (var$0) {
		this->_append = true;
	} else {
		this->_append = false;
	}
	parseChildren(parser);
}

$Type* TransletOutput::typeCheck($SymbolTable* stable) {
	$var($Type, type, $nc(this->_filename)->typeCheck(stable));
	if ($instanceOf($StringType, type) == false) {
		$init($Type);
		$set(this, _filename, $new($CastExpr, this->_filename, $Type::String));
	}
	typeCheckContents(stable);
	$init($Type);
	return $Type::Void;
}

void TransletOutput::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	bool isSecureProcessing = $nc($($nc($(classGen->getParser()))->getXSLTC()))->isSecureProcessing();
	$init($JdkXmlFeatures$XmlFeature);
	bool isExtensionFunctionEnabled = $nc($($nc($(classGen->getParser()))->getXSLTC()))->getFeature($JdkXmlFeatures$XmlFeature::ENABLE_EXTENSION_FUNCTION);
	if (isSecureProcessing && !isExtensionFunctionEnabled) {
		$init($Constants);
		int32_t index = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "unallowed_extension_elementF"_s, "(Ljava/lang/String;)V"_s);
		$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "redirect"_s)));
		il->append(static_cast<$1Instruction*>($$new($INVOKESTATIC, index)));
		return;
	}
	$nc(il)->append($(methodGen->loadHandler()));
	$init($Constants);
	int32_t open = $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, "openOutputHandler"_s, $$str({"("_s, $Constants::STRING_SIG, "Z)"_s, $Constants::TRANSLET_OUTPUT_SIG}));
	int32_t close = cpg->addMethodref($Constants::TRANSLET_CLASS, "closeOutputHandler"_s, $$str({"("_s, $Constants::TRANSLET_OUTPUT_SIG, ")V"_s}));
	il->append($(classGen->loadTranslet()));
	$nc(this->_filename)->translate(classGen, methodGen);
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_append)));
	il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, open)));
	il->append($(methodGen->storeHandler()));
	translateContents(classGen, methodGen);
	il->append($(classGen->loadTranslet()));
	il->append($(methodGen->loadHandler()));
	il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, close)));
	il->append($(methodGen->storeHandler()));
}

TransletOutput::TransletOutput() {
}

$Class* TransletOutput::load$($String* name, bool initialize) {
	$loadClass(TransletOutput, name, initialize, &_TransletOutput_ClassInfo_, allocate$TransletOutput);
	return class$;
}

$Class* TransletOutput::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com