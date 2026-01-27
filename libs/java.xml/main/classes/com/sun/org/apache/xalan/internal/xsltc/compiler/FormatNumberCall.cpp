#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FormatNumberCall.h>

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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef EMPTYSTRING
#undef TRANSLET_CLASS

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $LiteralExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralExpr;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
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

$FieldInfo _FormatNumberCall_FieldInfo_[] = {
	{"_value", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(FormatNumberCall, _value)},
	{"_format", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(FormatNumberCall, _format)},
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(FormatNumberCall, _name)},
	{"_resolvedQName", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(FormatNumberCall, _resolvedQName)},
	{}
};

$MethodInfo _FormatNumberCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(FormatNumberCall, init$, void, $QName*, $List*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(FormatNumberCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(FormatNumberCall, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _FormatNumberCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FormatNumberCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	_FormatNumberCall_FieldInfo_,
	_FormatNumberCall_MethodInfo_
};

$Object* allocate$FormatNumberCall($Class* clazz) {
	return $of($alloc(FormatNumberCall));
}

void FormatNumberCall::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
	$set(this, _resolvedQName, nullptr);
	$set(this, _value, argument(0));
	$set(this, _format, argument(1));
	$set(this, _name, argumentCount() == 3 ? argument(2) : ($Expression*)nullptr);
}

$Type* FormatNumberCall::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$nc($(getStylesheet()))->numberFormattingUsed();
	$var($Type, tvalue, $nc(this->_value)->typeCheck(stable));
	if ($instanceOf($RealType, tvalue) == false) {
		$init($Type);
		$set(this, _value, $new($CastExpr, this->_value, $Type::Real));
	}
	$var($Type, tformat, $nc(this->_format)->typeCheck(stable));
	if ($instanceOf($StringType, tformat) == false) {
		$init($Type);
		$set(this, _format, $new($CastExpr, this->_format, $Type::String));
	}
	if (argumentCount() == 3) {
		$var($Type, tname, $nc(this->_name)->typeCheck(stable));
		if ($instanceOf($LiteralExpr, this->_name)) {
			$var($LiteralExpr, literal, $cast($LiteralExpr, this->_name));
			$set(this, _resolvedQName, $nc($(getParser()))->getQNameIgnoreDefaultNs($($nc(literal)->getValue())));
		} else if ($instanceOf($StringType, tname) == false) {
			$init($Type);
			$set(this, _name, $new($CastExpr, this->_name, $Type::String));
		}
	}
	$init($Type);
	return $set(this, _type, $Type::String);
}

void FormatNumberCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(this->_value)->translate(classGen, methodGen);
	$nc(this->_format)->translate(classGen, methodGen);
	$init($Constants);
	int32_t fn3arg = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "formatNumber"_s, "(DLjava/lang/String;Ljava/text/DecimalFormat;)Ljava/lang/String;"_s);
	int32_t get = cpg->addMethodref($Constants::TRANSLET_CLASS, "getDecimalFormat"_s, "(Ljava/lang/String;)Ljava/text/DecimalFormat;"_s);
	$nc(il)->append($(classGen->loadTranslet()));
	if (this->_name == nullptr) {
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Constants::EMPTYSTRING)));
	} else if (this->_resolvedQName != nullptr) {
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc(this->_resolvedQName)->toString()))));
	} else {
		$nc(this->_name)->translate(classGen, methodGen);
	}
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, get)));
	il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, fn3arg)));
}

FormatNumberCall::FormatNumberCall() {
}

$Class* FormatNumberCall::load$($String* name, bool initialize) {
	$loadClass(FormatNumberCall, name, initialize, &_FormatNumberCall_ClassInfo_, allocate$FormatNumberCall);
	return class$;
}

$Class* FormatNumberCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com