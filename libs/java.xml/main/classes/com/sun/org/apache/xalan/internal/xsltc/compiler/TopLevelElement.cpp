#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef FATAL
#undef NOT_IMPLEMENTED_ERR

using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
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

void TopLevelElement::init$() {
	$SyntaxTreeNode::init$();
	$set(this, _dependencies, nullptr);
}

$Type* TopLevelElement::typeCheck($SymbolTable* stable) {
	return typeCheckContents(stable);
}

void TopLevelElement::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$init($ErrorMsg);
	$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::NOT_IMPLEMENTED_ERR, $of(this)->getClass(), this));
	$$nc(getParser())->reportError($Constants::FATAL, msg);
}

$InstructionList* TopLevelElement::compile($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($InstructionList, result, nullptr);
	$var($InstructionList, save, $nc(methodGen)->getInstructionList());
	methodGen->setInstructionList($assign(result, $new($InstructionList)));
	translate(classGen, methodGen);
	methodGen->setInstructionList(save);
	return result;
}

void TopLevelElement::display(int32_t indent) {
	this->indent(indent);
	$Util::println("TopLevelElement"_s);
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

void TopLevelElement::addDependency(TopLevelElement* other) {
	if (this->_dependencies == nullptr) {
		$set(this, _dependencies, $new($ArrayList));
	}
	if (!$nc(this->_dependencies)->contains(other)) {
		this->_dependencies->add(other);
	}
}

$List* TopLevelElement::getDependencies() {
	return this->_dependencies;
}

TopLevelElement::TopLevelElement() {
}

$Class* TopLevelElement::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_dependencies", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;>;", $PROTECTED, $field(TopLevelElement, _dependencies)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TopLevelElement, init$, void)},
		{"addDependency", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement;)V", nullptr, $PUBLIC, $virtualMethod(TopLevelElement, addDependency, void, TopLevelElement*)},
		{"compile", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC, $virtualMethod(TopLevelElement, compile, $InstructionList*, $ClassGenerator*, $MethodGenerator*)},
		{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(TopLevelElement, display, void, int32_t)},
		{"getDependencies", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;>;", $PUBLIC, $virtualMethod(TopLevelElement, getDependencies, $List*)},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(TopLevelElement, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(TopLevelElement, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TopLevelElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TopLevelElement);
	});
	return class$;
}

$Class* TopLevelElement::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com