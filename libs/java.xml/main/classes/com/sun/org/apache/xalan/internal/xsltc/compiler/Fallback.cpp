#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Fallback.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
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

void Fallback::init$() {
	$Instruction::init$();
	this->_active = false;
}

$Type* Fallback::typeCheck($SymbolTable* stable) {
	if (this->_active) {
		return (typeCheckContents(stable));
	} else {
		$init($Type);
		return $Type::Void;
	}
}

void Fallback::activate() {
	this->_active = true;
}

$String* Fallback::toString() {
	return ("fallback"_s);
}

void Fallback::parseContents($Parser* parser) {
	if (this->_active) {
		parseChildren(parser);
	}
}

void Fallback::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_active) {
		translateContents(classGen, methodGen);
	}
}

Fallback::Fallback() {
}

$Class* Fallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_active", "Z", nullptr, $PRIVATE, $field(Fallback, _active)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Fallback, init$, void)},
		{"activate", "()V", nullptr, $PUBLIC, $method(Fallback, activate, void)},
		{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Fallback, parseContents, void, $Parser*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Fallback, toString, $String*)},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Fallback, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Fallback, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Fallback",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Fallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Fallback);
	});
	return class$;
}

$Class* Fallback::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com