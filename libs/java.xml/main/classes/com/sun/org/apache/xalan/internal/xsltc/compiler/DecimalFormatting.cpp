#include <com/sun/org/apache/xalan/internal/xsltc/compiler/DecimalFormatting.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETSTATIC.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef DFS_CLASS
#undef DFS_SIG
#undef DUP
#undef EMPTYSTRING
#undef ERROR
#undef INVALID_QNAME_ERR
#undef LOCALE_CLASS
#undef LOCALE_SIG
#undef STRING_SIG
#undef SYMBOLS_REDEF_ERR
#undef TRANSLET_CLASS

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETSTATIC = ::com::sun::org::apache::bcel::internal::generic::GETSTATIC;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _DecimalFormatting_FieldInfo_[] = {
	{"DFS_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DecimalFormatting, DFS_CLASS)},
	{"DFS_SIG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DecimalFormatting, DFS_SIG)},
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(DecimalFormatting, _name)},
	{}
};

$MethodInfo _DecimalFormatting_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DecimalFormatting, init$, void)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(DecimalFormatting, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(DecimalFormatting, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateDefaultDFS", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DecimalFormatting, translateDefaultDFS, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(DecimalFormatting, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _DecimalFormatting_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.DecimalFormatting",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement",
	nullptr,
	_DecimalFormatting_FieldInfo_,
	_DecimalFormatting_MethodInfo_
};

$Object* allocate$DecimalFormatting($Class* clazz) {
	return $of($alloc(DecimalFormatting));
}

$String* DecimalFormatting::DFS_CLASS = nullptr;
$String* DecimalFormatting::DFS_SIG = nullptr;

void DecimalFormatting::init$() {
	$TopLevelElement::init$();
	$set(this, _name, nullptr);
}

$Type* DecimalFormatting::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $Type::Void;
}

void DecimalFormatting::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getAttribute("name"_s));
	if ($nc(name)->length() > 0) {
		if (!$XML11Char::isXML11ValidQName(name)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(name), static_cast<$SyntaxTreeNode*>(this)));
			$nc(parser)->reportError($Constants::ERROR, err);
		}
	}
	$set(this, _name, $nc(parser)->getQNameIgnoreDefaultNs(name));
	if (this->_name == nullptr) {
		$init($Constants);
		$set(this, _name, parser->getQNameIgnoreDefaultNs($Constants::EMPTYSTRING));
	}
	$var($SymbolTable, stable, parser->getSymbolTable());
	if ($nc(stable)->getDecimalFormatting(this->_name) != nullptr) {
		$init($ErrorMsg);
		reportWarning(this, parser, $ErrorMsg::SYMBOLS_REDEF_ERR, $($nc(this->_name)->toString()));
	} else {
		stable->addDecimalFormatting(this->_name, this);
	}
}

void DecimalFormatting::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t init = $nc(cpg)->addMethodref(DecimalFormatting::DFS_CLASS, "<init>"_s, $$str({"("_s, $Constants::LOCALE_SIG, ")V"_s}));
	$nc(il)->append($(classGen->loadTranslet()));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc(this->_name)->toString()))));
	il->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass(DecimalFormatting::DFS_CLASS))));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append(static_cast<$Instruction*>($$new($GETSTATIC, cpg->addFieldref($Constants::LOCALE_CLASS, "US"_s, $Constants::LOCALE_SIG))));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, init)));
	$var($String, tmp, getAttribute("NaN"_s));
	if ((tmp == nullptr) || ($nc(tmp)->equals($Constants::EMPTYSTRING))) {
		int32_t nan = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setNaN"_s, "(Ljava/lang/String;)V"_s);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "NaN"_s)));
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, nan)));
	}
	$assign(tmp, getAttribute("infinity"_s));
	if ((tmp == nullptr) || ($nc(tmp)->equals($Constants::EMPTYSTRING))) {
		int32_t inf = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setInfinity"_s, "(Ljava/lang/String;)V"_s);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "Infinity"_s)));
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, inf)));
	}
	int32_t nAttributes = $nc(this->_attributes)->getLength();
	for (int32_t i = 0; i < nAttributes; ++i) {
		$var($String, name, $nc(this->_attributes)->getQName(i));
		$var($String, value, $nc(this->_attributes)->getValue(i));
		bool valid = true;
		int32_t method = 0;
		if ($nc(name)->equals("decimal-separator"_s)) {
			method = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setDecimalSeparator"_s, "(C)V"_s);
		} else if (name->equals("grouping-separator"_s)) {
			method = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setGroupingSeparator"_s, "(C)V"_s);
		} else if (name->equals("minus-sign"_s)) {
			method = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setMinusSign"_s, "(C)V"_s);
		} else if (name->equals("percent"_s)) {
			method = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setPercent"_s, "(C)V"_s);
		} else if (name->equals("per-mille"_s)) {
			method = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setPerMill"_s, "(C)V"_s);
		} else if (name->equals("zero-digit"_s)) {
			method = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setZeroDigit"_s, "(C)V"_s);
		} else if (name->equals("digit"_s)) {
			method = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setDigit"_s, "(C)V"_s);
		} else if (name->equals("pattern-separator"_s)) {
			method = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setPatternSeparator"_s, "(C)V"_s);
		} else if (name->equals("NaN"_s)) {
			method = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setNaN"_s, "(Ljava/lang/String;)V"_s);
			il->append(static_cast<$Instruction*>($Constants::DUP));
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, value)));
			il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, method)));
			valid = false;
		} else if (name->equals("infinity"_s)) {
			method = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setInfinity"_s, "(Ljava/lang/String;)V"_s);
			il->append(static_cast<$Instruction*>($Constants::DUP));
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, value)));
			il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, method)));
			valid = false;
		} else {
			valid = false;
		}
		if (valid) {
			il->append(static_cast<$Instruction*>($Constants::DUP));
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, (int32_t)$nc(value)->charAt(0))));
			il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, method)));
		}
	}
	int32_t put = cpg->addMethodref($Constants::TRANSLET_CLASS, "addDecimalFormat"_s, $$str({"("_s, $Constants::STRING_SIG, DecimalFormatting::DFS_SIG, ")V"_s}));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, put)));
}

void DecimalFormatting::translateDefaultDFS($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init(DecimalFormatting);
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t init = $nc(cpg)->addMethodref(DecimalFormatting::DFS_CLASS, "<init>"_s, $$str({"("_s, $Constants::LOCALE_SIG, ")V"_s}));
	$nc(il)->append($(classGen->loadTranslet()));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Constants::EMPTYSTRING)));
	il->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass(DecimalFormatting::DFS_CLASS))));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append(static_cast<$Instruction*>($$new($GETSTATIC, cpg->addFieldref($Constants::LOCALE_CLASS, "US"_s, $Constants::LOCALE_SIG))));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, init)));
	int32_t nan = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setNaN"_s, "(Ljava/lang/String;)V"_s);
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "NaN"_s)));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, nan)));
	int32_t inf = cpg->addMethodref(DecimalFormatting::DFS_CLASS, "setInfinity"_s, "(Ljava/lang/String;)V"_s);
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "Infinity"_s)));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, inf)));
	int32_t put = cpg->addMethodref($Constants::TRANSLET_CLASS, "addDecimalFormat"_s, $$str({"("_s, $Constants::STRING_SIG, DecimalFormatting::DFS_SIG, ")V"_s}));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, put)));
}

DecimalFormatting::DecimalFormatting() {
}

void clinit$DecimalFormatting($Class* class$) {
	$assignStatic(DecimalFormatting::DFS_CLASS, "java.text.DecimalFormatSymbols"_s);
	$assignStatic(DecimalFormatting::DFS_SIG, "Ljava/text/DecimalFormatSymbols;"_s);
}

$Class* DecimalFormatting::load$($String* name, bool initialize) {
	$loadClass(DecimalFormatting, name, initialize, &_DecimalFormatting_ClassInfo_, clinit$DecimalFormatting, allocate$DecimalFormatting);
	return class$;
}

$Class* DecimalFormatting::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com