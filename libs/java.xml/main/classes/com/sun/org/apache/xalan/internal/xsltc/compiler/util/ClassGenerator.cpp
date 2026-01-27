#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>

#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <jcpp.h>

#undef DOM_INTF_SIG
#undef INVALID_INDEX
#undef NODE_FIELD_SIG
#undef NODE_ITERATOR_SIG
#undef TRANSLET_INDEX
#undef TRANSLET_OUTPUT_SIG

using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
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
								namespace util {

$FieldInfo _ClassGenerator_FieldInfo_[] = {
	{"TRANSLET_INDEX", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(ClassGenerator, TRANSLET_INDEX)},
	{"INVALID_INDEX", "I", nullptr, $PROTECTED | $STATIC, $staticField(ClassGenerator, INVALID_INDEX)},
	{"_stylesheet", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PRIVATE, $field(ClassGenerator, _stylesheet)},
	{"_parser", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;", nullptr, $PRIVATE | $FINAL, $field(ClassGenerator, _parser)},
	{"_aloadTranslet", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(ClassGenerator, _aloadTranslet)},
	{"_domClass", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClassGenerator, _domClass)},
	{"_domClassSig", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClassGenerator, _domClassSig)},
	{"_applyTemplatesSig", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClassGenerator, _applyTemplatesSig)},
	{"_applyTemplatesSigForImport", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClassGenerator, _applyTemplatesSigForImport)},
	{}
};

$MethodInfo _ClassGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(ClassGenerator, init$, void, $String*, $String*, $String*, int32_t, $StringArray*, $Stylesheet*)},
	{"addMethod", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ClassGenerator, addMethod, void, $MethodGenerator*)},
	{"getApplyTemplatesSig", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(ClassGenerator, getApplyTemplatesSig, $String*)},
	{"getApplyTemplatesSigForImport", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(ClassGenerator, getApplyTemplatesSigForImport, $String*)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ClassGenerator, getClassName, $String*)},
	{"getDOMClass", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(ClassGenerator, getDOMClass, $String*)},
	{"getDOMClassSig", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(ClassGenerator, getDOMClassSig, $String*)},
	{"getParser", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;", nullptr, $PUBLIC | $FINAL, $method(ClassGenerator, getParser, $Parser*)},
	{"getStylesheet", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC | $FINAL, $method(ClassGenerator, getStylesheet, $Stylesheet*)},
	{"isExternal", "()Z", nullptr, $PUBLIC, $virtualMethod(ClassGenerator, isExternal, bool)},
	{"loadTranslet", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(ClassGenerator, loadTranslet, $Instruction*)},
	{}
};

$ClassInfo _ClassGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ClassGenerator",
	"com.sun.org.apache.bcel.internal.generic.ClassGen",
	nullptr,
	_ClassGenerator_FieldInfo_,
	_ClassGenerator_MethodInfo_
};

$Object* allocate$ClassGenerator($Class* clazz) {
	return $of($alloc(ClassGenerator));
}

int32_t ClassGenerator::INVALID_INDEX = 0;

void ClassGenerator::init$($String* class_name, $String* super_class_name, $String* file_name, int32_t access_flags, $StringArray* interfaces, $Stylesheet* stylesheet) {
	$ClassGen::init$(class_name, super_class_name, file_name, access_flags, interfaces);
	$set(this, _stylesheet, stylesheet);
	$set(this, _parser, $nc(stylesheet)->getParser());
	$set(this, _aloadTranslet, $new($ALOAD, ClassGenerator::TRANSLET_INDEX));
	if (stylesheet->isMultiDocument()) {
		$set(this, _domClass, "com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM"_s);
		$set(this, _domClassSig, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM;"_s);
	} else {
		$set(this, _domClass, "com.sun.org.apache.xalan.internal.xsltc.dom.DOMAdapter"_s);
		$set(this, _domClassSig, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter;"_s);
	}
	$init($Constants);
	$set(this, _applyTemplatesSig, $str({"("_s, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, $Constants::TRANSLET_OUTPUT_SIG, ")V"_s}));
	$set(this, _applyTemplatesSigForImport, $str({"("_s, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, $Constants::TRANSLET_OUTPUT_SIG, $Constants::NODE_FIELD_SIG, ")V"_s}));
}

$Parser* ClassGenerator::getParser() {
	return this->_parser;
}

$Stylesheet* ClassGenerator::getStylesheet() {
	return this->_stylesheet;
}

$String* ClassGenerator::getClassName() {
	return $nc(this->_stylesheet)->getClassName();
}

$Instruction* ClassGenerator::loadTranslet() {
	return this->_aloadTranslet;
}

$String* ClassGenerator::getDOMClass() {
	return this->_domClass;
}

$String* ClassGenerator::getDOMClassSig() {
	return this->_domClassSig;
}

$String* ClassGenerator::getApplyTemplatesSig() {
	return this->_applyTemplatesSig;
}

$String* ClassGenerator::getApplyTemplatesSigForImport() {
	return this->_applyTemplatesSigForImport;
}

bool ClassGenerator::isExternal() {
	return false;
}

void ClassGenerator::addMethod($MethodGenerator* methodGen) {
	$var($MethodArray, methodsToAdd, $nc(methodGen)->getGeneratedMethods(this));
	for (int32_t i = 0; i < $nc(methodsToAdd)->length; ++i) {
		addMethod(methodsToAdd->get(i));
	}
}

void clinit$ClassGenerator($Class* class$) {
	ClassGenerator::INVALID_INDEX = -1;
}

ClassGenerator::ClassGenerator() {
}

$Class* ClassGenerator::load$($String* name, bool initialize) {
	$loadClass(ClassGenerator, name, initialize, &_ClassGenerator_ClassInfo_, clinit$ClassGenerator, allocate$ClassGenerator);
	return class$;
}

$Class* ClassGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com