#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Closure.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Closure = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

void VariableRefBase::init$($VariableBase* variable) {
	$Expression::init$();
	$set(this, _closure, nullptr);
	$set(this, _variable, variable);
	$nc(variable)->addReference(this);
}

void VariableRefBase::init$() {
	$Expression::init$();
	$set(this, _closure, nullptr);
	$set(this, _variable, nullptr);
}

$VariableBase* VariableRefBase::getVariable() {
	return this->_variable;
}

void VariableRefBase::addParentDependency() {
	$useLocalObjectStack();
	$var($SyntaxTreeNode, node, this);
	while (node != nullptr && $instanceOf($TopLevelElement, node) == false) {
		$assign(node, node->getParent());
	}
	$var($TopLevelElement, parent, $cast($TopLevelElement, node));
	if (parent != nullptr) {
		$var($VariableBase, var, this->_variable);
		if ($nc(this->_variable)->_ignore) {
			if ($instanceOf($Variable, this->_variable)) {
				$assign(var, $$nc(parent->getSymbolTable())->lookupVariable(this->_variable->_name));
			} else if ($instanceOf($Param, this->_variable)) {
				$assign(var, $$nc(parent->getSymbolTable())->lookupParam(this->_variable->_name));
			}
		}
		parent->addDependency(var);
	}
}

bool VariableRefBase::equals(Object$* obj) {
	return $equals(obj, this) || ($instanceOf(VariableRefBase, obj)) && (this->_variable == $cast(VariableRefBase, obj)->_variable);
}

int32_t VariableRefBase::hashCode() {
	return $Objects::hashCode(this->_variable);
}

$String* VariableRefBase::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("variable-ref("_s);
	var$0->append($($nc(this->_variable)->getName()));
	var$0->append(u'/');
	var$0->append($(this->_variable->getType()));
	var$0->append(u')');
	return $str(var$0);
}

$Type* VariableRefBase::typeCheck($SymbolTable* stable) {
	if (this->_type != nullptr) {
		return this->_type;
	}
	if ($nc(this->_variable)->isLocal()) {
		$var($SyntaxTreeNode, node, getParent());
		do {
			if ($instanceOf($Closure, node)) {
				$set(this, _closure, $cast($Closure, node));
				break;
			}
			if ($instanceOf($TopLevelElement, node)) {
				break;
			}
			$assign(node, $nc(node)->getParent());
		} while (node != nullptr);
		if (this->_closure != nullptr) {
			this->_closure->addVariable(this);
		}
	}
	$set(this, _type, $nc(this->_variable)->getType());
	if (this->_type == nullptr) {
		$nc(this->_variable)->typeCheck(stable);
		$set(this, _type, $nc(this->_variable)->getType());
	}
	addParentDependency();
	return this->_type;
}

VariableRefBase::VariableRefBase() {
}

$Class* VariableRefBase::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_variable", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase;", nullptr, $PROTECTED, $field(VariableRefBase, _variable)},
		{"_closure", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Closure;", nullptr, $PROTECTED, $field(VariableRefBase, _closure)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase;)V", nullptr, $PUBLIC, $method(VariableRefBase, init$, void, $VariableBase*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(VariableRefBase, init$, void)},
		{"addParentDependency", "()V", nullptr, $PUBLIC, $virtualMethod(VariableRefBase, addParentDependency, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(VariableRefBase, equals, bool, Object$*)},
		{"getVariable", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase;", nullptr, $PUBLIC, $virtualMethod(VariableRefBase, getVariable, $VariableBase*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(VariableRefBase, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VariableRefBase, toString, $String*)},
		{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(VariableRefBase, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.VariableRefBase",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VariableRefBase, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VariableRefBase);
	});
	return class$;
}

$Class* VariableRefBase::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com