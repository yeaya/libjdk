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

$FieldInfo _VariableRefBase_FieldInfo_[] = {
	{"_variable", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase;", nullptr, $PROTECTED, $field(VariableRefBase, _variable)},
	{"_closure", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Closure;", nullptr, $PROTECTED, $field(VariableRefBase, _closure)},
	{}
};

$MethodInfo _VariableRefBase_MethodInfo_[] = {
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

$ClassInfo _VariableRefBase_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.VariableRefBase",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_VariableRefBase_FieldInfo_,
	_VariableRefBase_MethodInfo_
};

$Object* allocate$VariableRefBase($Class* clazz) {
	return $of($alloc(VariableRefBase));
}

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
	$useLocalCurrentObjectStackCache();
	$var($SyntaxTreeNode, node, this);
	while (node != nullptr && $instanceOf($TopLevelElement, node) == false) {
		$assign(node, node->getParent());
	}
	$var($TopLevelElement, parent, $cast($TopLevelElement, node));
	if (parent != nullptr) {
		$var($VariableBase, var, this->_variable);
		if ($nc(this->_variable)->_ignore) {
			if ($instanceOf($Variable, this->_variable)) {
				$assign(var, $nc($(parent->getSymbolTable()))->lookupVariable($nc(this->_variable)->_name));
			} else if ($instanceOf($Param, this->_variable)) {
				$assign(var, $nc($(parent->getSymbolTable()))->lookupParam($nc(this->_variable)->_name));
			}
		}
		parent->addDependency(var);
	}
}

bool VariableRefBase::equals(Object$* obj) {
	return $equals(obj, this) || ($instanceOf(VariableRefBase, obj)) && (this->_variable == $nc(($cast(VariableRefBase, obj)))->_variable);
}

int32_t VariableRefBase::hashCode() {
	return $Objects::hashCode(this->_variable);
}

$String* VariableRefBase::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"variable-ref("_s, $($nc(this->_variable)->getName()), $$str(u'/')}));
	$var($String, var$0, $$concat(var$1, $($nc(this->_variable)->getType())));
	return $concat(var$0, $$str(u')'));
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
			$nc(this->_closure)->addVariable(this);
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
	$loadClass(VariableRefBase, name, initialize, &_VariableRefBase_ClassInfo_, allocate$VariableRefBase);
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