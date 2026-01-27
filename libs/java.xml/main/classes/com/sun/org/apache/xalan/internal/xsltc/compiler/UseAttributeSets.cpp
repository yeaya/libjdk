#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UseAttributeSets.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeSet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef ATTRIBSET_UNDEF_ERR
#undef ATTR_SET_NOT_FOUND
#undef ATTR_SET_SIG
#undef EMPTYSTRING

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $AttributeSet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _UseAttributeSets_FieldInfo_[] = {
	{"ATTR_SET_NOT_FOUND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UseAttributeSets, ATTR_SET_NOT_FOUND)},
	{"_sets", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;>;", $PRIVATE | $FINAL, $field(UseAttributeSets, _sets)},
	{}
};

$MethodInfo _UseAttributeSets_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $method(UseAttributeSets, init$, void, $String*, $Parser*)},
	{"addAttributeSets", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UseAttributeSets, addAttributeSets, void, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(UseAttributeSets, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(UseAttributeSets, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _UseAttributeSets_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.UseAttributeSets",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_UseAttributeSets_FieldInfo_,
	_UseAttributeSets_MethodInfo_
};

$Object* allocate$UseAttributeSets($Class* clazz) {
	return $of($alloc(UseAttributeSets));
}

$String* UseAttributeSets::ATTR_SET_NOT_FOUND = nullptr;

void UseAttributeSets::init$($String* setNames, $Parser* parser) {
	$Instruction::init$();
	$set(this, _sets, $new($ArrayList, 2));
	setParser(parser);
	addAttributeSets(setNames);
}

void UseAttributeSets::addAttributeSets($String* setNames) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	if ((setNames != nullptr) && (!setNames->equals($Constants::EMPTYSTRING))) {
		$var($StringTokenizer, tokens, $new($StringTokenizer, setNames));
		while (tokens->hasMoreTokens()) {
			$var($QName, qname, $nc($(getParser()))->getQNameIgnoreDefaultNs($(tokens->nextToken())));
			$nc(this->_sets)->add(qname);
		}
	}
}

$Type* UseAttributeSets::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $Type::Void;
}

void UseAttributeSets::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($SymbolTable, symbolTable, $nc($(getParser()))->getSymbolTable());
	{
		$var($Iterator, i$, $nc(this->_sets)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($QName, name, $cast($QName, i$->next()));
			{
				$var($AttributeSet, attrs, $nc(symbolTable)->lookupAttributeSet(name));
				if (attrs != nullptr) {
					$var($String, methodName, attrs->getMethodName());
					$nc(il)->append($(classGen->loadTranslet()));
					il->append($(methodGen->loadDOM()));
					il->append($(methodGen->loadIterator()));
					il->append($(methodGen->loadHandler()));
					il->append($(methodGen->loadCurrentNode()));
					$init($Constants);
					int32_t method = $nc(cpg)->addMethodref($(classGen->getClassName()), methodName, $Constants::ATTR_SET_SIG);
					il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, method)));
				} else {
					$var($Parser, parser, getParser());
					$var($String, atrs, $nc(name)->toString());
					$init($ErrorMsg);
					reportError(this, parser, $ErrorMsg::ATTRIBSET_UNDEF_ERR, atrs);
				}
			}
		}
	}
}

UseAttributeSets::UseAttributeSets() {
}

void clinit$UseAttributeSets($Class* class$) {
	$assignStatic(UseAttributeSets::ATTR_SET_NOT_FOUND, ""_s);
}

$Class* UseAttributeSets::load$($String* name, bool initialize) {
	$loadClass(UseAttributeSets, name, initialize, &_UseAttributeSets_ClassInfo_, clinit$UseAttributeSets, allocate$UseAttributeSets);
	return class$;
}

$Class* UseAttributeSets::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com