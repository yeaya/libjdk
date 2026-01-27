#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeSet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/DecimalFormatting.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Key.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Stack.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef EMPTYSTRING

using $AttributeSet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $DecimalFormatting = ::com::sun::org::apache::xalan::internal::xsltc::compiler::DecimalFormatting;
using $Key = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Key;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Template = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $MethodType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Stack = ::java::util::Stack;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _SymbolTable_FieldInfo_[] = {
	{"_stylesheets", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;>;", $PRIVATE | $FINAL, $field(SymbolTable, _stylesheets)},
	{"_primops", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType;>;>;", $PRIVATE | $FINAL, $field(SymbolTable, _primops)},
	{"_variables", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase;>;", $PRIVATE, $field(SymbolTable, _variables)},
	{"_templates", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;>;", $PRIVATE, $field(SymbolTable, _templates)},
	{"_attributeSets", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeSet;>;", $PRIVATE, $field(SymbolTable, _attributeSets)},
	{"_aliases", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(SymbolTable, _aliases)},
	{"_excludedURI", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(SymbolTable, _excludedURI)},
	{"_excludedURIStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;>;", $PRIVATE, $field(SymbolTable, _excludedURIStack)},
	{"_decimalFormats", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/DecimalFormatting;>;", $PRIVATE, $field(SymbolTable, _decimalFormats)},
	{"_keys", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Key;>;", $PRIVATE, $field(SymbolTable, _keys)},
	{"_nsCounter", "I", nullptr, $PRIVATE, $field(SymbolTable, _nsCounter)},
	{"_current", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PRIVATE, $field(SymbolTable, _current)},
	{}
};

$MethodInfo _SymbolTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SymbolTable, init$, void)},
	{"addAttributeSet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeSet;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeSet;", nullptr, $PUBLIC, $method(SymbolTable, addAttributeSet, $AttributeSet*, $AttributeSet*)},
	{"addDecimalFormatting", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/DecimalFormatting;)V", nullptr, $PUBLIC, $method(SymbolTable, addDecimalFormatting, void, $QName*, $DecimalFormatting*)},
	{"addKey", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Key;)V", nullptr, $PUBLIC, $method(SymbolTable, addKey, void, $QName*, $Key*)},
	{"addParam", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Param;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Param;", nullptr, $PUBLIC, $method(SymbolTable, addParam, $Param*, $Param*)},
	{"addPrefixAlias", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SymbolTable, addPrefixAlias, void, $String*, $String*)},
	{"addPrimop", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType;)V", nullptr, $PUBLIC, $method(SymbolTable, addPrimop, void, $String*, $MethodType*)},
	{"addStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, $method(SymbolTable, addStylesheet, $Stylesheet*, $QName*, $Stylesheet*)},
	{"addTemplate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PUBLIC, $method(SymbolTable, addTemplate, $Template*, $Template*)},
	{"addVariable", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Variable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Variable;", nullptr, $PUBLIC, $method(SymbolTable, addVariable, $Variable*, $Variable*)},
	{"excludeNamespaces", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SymbolTable, excludeNamespaces, void, $String*)},
	{"excludeURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SymbolTable, excludeURI, void, $String*)},
	{"generateNamespacePrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SymbolTable, generateNamespacePrefix, $String*)},
	{"getDecimalFormatting", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/DecimalFormatting;", nullptr, $PUBLIC, $method(SymbolTable, getDecimalFormatting, $DecimalFormatting*, $QName*)},
	{"getKey", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Key;", nullptr, $PUBLIC, $method(SymbolTable, getKey, $Key*, $QName*)},
	{"isExcludedNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(SymbolTable, isExcludedNamespace, bool, $String*)},
	{"lookupAttributeSet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeSet;", nullptr, $PUBLIC, $method(SymbolTable, lookupAttributeSet, $AttributeSet*, $QName*)},
	{"lookupName", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PUBLIC, $method(SymbolTable, lookupName, $SyntaxTreeNode*, $QName*)},
	{"lookupNamespace", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(SymbolTable, lookupNamespace, $String*, $String*)},
	{"lookupParam", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Param;", nullptr, $PUBLIC, $method(SymbolTable, lookupParam, $Param*, $QName*)},
	{"lookupPrefixAlias", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(SymbolTable, lookupPrefixAlias, $String*, $String*)},
	{"lookupPrimop", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType;>;", $PUBLIC, $method(SymbolTable, lookupPrimop, $List*, $String*)},
	{"lookupStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, $method(SymbolTable, lookupStylesheet, $Stylesheet*, $QName*)},
	{"lookupTemplate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PUBLIC, $method(SymbolTable, lookupTemplate, $Template*, $QName*)},
	{"lookupVariable", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Variable;", nullptr, $PUBLIC, $method(SymbolTable, lookupVariable, $Variable*, $QName*)},
	{"popExcludedNamespacesContext", "()V", nullptr, $PUBLIC, $method(SymbolTable, popExcludedNamespacesContext, void)},
	{"pushExcludedNamespacesContext", "()V", nullptr, $PUBLIC, $method(SymbolTable, pushExcludedNamespacesContext, void)},
	{"setCurrentNode", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PUBLIC, $method(SymbolTable, setCurrentNode, void, $SyntaxTreeNode*)},
	{"unExcludeNamespaces", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SymbolTable, unExcludeNamespaces, void, $String*)},
	{}
};

$ClassInfo _SymbolTable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.SymbolTable",
	"java.lang.Object",
	nullptr,
	_SymbolTable_FieldInfo_,
	_SymbolTable_MethodInfo_
};

$Object* allocate$SymbolTable($Class* clazz) {
	return $of($alloc(SymbolTable));
}

void SymbolTable::init$() {
	$set(this, _stylesheets, $new($HashMap));
	$set(this, _primops, $new($HashMap));
	$set(this, _variables, nullptr);
	$set(this, _templates, nullptr);
	$set(this, _attributeSets, nullptr);
	$set(this, _aliases, nullptr);
	$set(this, _excludedURI, nullptr);
	$set(this, _excludedURIStack, nullptr);
	$set(this, _decimalFormats, nullptr);
	$set(this, _keys, nullptr);
	this->_nsCounter = 0;
	$set(this, _current, nullptr);
}

$DecimalFormatting* SymbolTable::getDecimalFormatting($QName* name) {
	if (this->_decimalFormats == nullptr) {
		return nullptr;
	}
	return ($cast($DecimalFormatting, $nc(this->_decimalFormats)->get($($nc(name)->getStringRep()))));
}

void SymbolTable::addDecimalFormatting($QName* name, $DecimalFormatting* symbols) {
	if (this->_decimalFormats == nullptr) {
		$set(this, _decimalFormats, $new($HashMap));
	}
	$nc(this->_decimalFormats)->put($($nc(name)->getStringRep()), symbols);
}

$Key* SymbolTable::getKey($QName* name) {
	if (this->_keys == nullptr) {
		return nullptr;
	}
	return $cast($Key, $nc(this->_keys)->get($($nc(name)->getStringRep())));
}

void SymbolTable::addKey($QName* name, $Key* key) {
	if (this->_keys == nullptr) {
		$set(this, _keys, $new($HashMap));
	}
	$nc(this->_keys)->put($($nc(name)->getStringRep()), key);
}

$Stylesheet* SymbolTable::addStylesheet($QName* name, $Stylesheet* node) {
	return $cast($Stylesheet, $nc(this->_stylesheets)->put($($nc(name)->getStringRep()), node));
}

$Stylesheet* SymbolTable::lookupStylesheet($QName* name) {
	return $cast($Stylesheet, $nc(this->_stylesheets)->get($($nc(name)->getStringRep())));
}

$Template* SymbolTable::addTemplate($Template* template$) {
	$useLocalCurrentObjectStackCache();
	$var($QName, name, $nc(template$)->getName());
	if (this->_templates == nullptr) {
		$set(this, _templates, $new($HashMap));
	}
	return $cast($Template, $nc(this->_templates)->put($($nc(name)->getStringRep()), template$));
}

$Template* SymbolTable::lookupTemplate($QName* name) {
	if (this->_templates == nullptr) {
		return nullptr;
	}
	return $cast($Template, $nc(this->_templates)->get($($nc(name)->getStringRep())));
}

$Variable* SymbolTable::addVariable($Variable* variable) {
	$useLocalCurrentObjectStackCache();
	if (this->_variables == nullptr) {
		$set(this, _variables, $new($HashMap));
	}
	$var($VariableBase, v, $cast($VariableBase, $nc(this->_variables)->put($($nc($($nc(variable)->getName()))->getStringRep()), variable)));
	return $instanceOf($Variable, v) ? $cast($Variable, v) : ($Variable*)nullptr;
}

$Param* SymbolTable::addParam($Param* parameter) {
	$useLocalCurrentObjectStackCache();
	if (this->_variables == nullptr) {
		$set(this, _variables, $new($HashMap));
	}
	$var($VariableBase, v, $cast($VariableBase, $nc(this->_variables)->put($($nc($($nc(parameter)->getName()))->getStringRep()), parameter)));
	return $instanceOf($Param, v) ? $cast($Param, v) : ($Param*)nullptr;
}

$Variable* SymbolTable::lookupVariable($QName* qname) {
	$useLocalCurrentObjectStackCache();
	if (this->_variables == nullptr) {
		return nullptr;
	}
	$var($String, name, $nc(qname)->getStringRep());
	$var($VariableBase, obj, $cast($VariableBase, $nc(this->_variables)->get(name)));
	return $instanceOf($Variable, obj) ? $cast($Variable, obj) : ($Variable*)nullptr;
}

$Param* SymbolTable::lookupParam($QName* qname) {
	$useLocalCurrentObjectStackCache();
	if (this->_variables == nullptr) {
		return nullptr;
	}
	$var($String, name, $nc(qname)->getStringRep());
	$var($VariableBase, obj, $cast($VariableBase, $nc(this->_variables)->get(name)));
	return $instanceOf($Param, obj) ? $cast($Param, obj) : ($Param*)nullptr;
}

$SyntaxTreeNode* SymbolTable::lookupName($QName* qname) {
	if (this->_variables == nullptr) {
		return nullptr;
	}
	$var($String, name, $nc(qname)->getStringRep());
	return $cast($SyntaxTreeNode, $nc(this->_variables)->get(name));
}

$AttributeSet* SymbolTable::addAttributeSet($AttributeSet* atts) {
	$useLocalCurrentObjectStackCache();
	if (this->_attributeSets == nullptr) {
		$set(this, _attributeSets, $new($HashMap));
	}
	return $cast($AttributeSet, $nc(this->_attributeSets)->put($($nc($($nc(atts)->getName()))->getStringRep()), atts));
}

$AttributeSet* SymbolTable::lookupAttributeSet($QName* name) {
	if (this->_attributeSets == nullptr) {
		return nullptr;
	}
	return $cast($AttributeSet, $nc(this->_attributeSets)->get($($nc(name)->getStringRep())));
}

void SymbolTable::addPrimop($String* name, $MethodType* mtype) {
	$var($List, methods, $cast($List, $nc(this->_primops)->get(name)));
	if (methods == nullptr) {
		$nc(this->_primops)->put(name, $assign(methods, $new($ArrayList)));
	}
	$nc(methods)->add(mtype);
}

$List* SymbolTable::lookupPrimop($String* name) {
	return $cast($List, $nc(this->_primops)->get(name));
}

$String* SymbolTable::generateNamespacePrefix() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, "ns"_s);
	return ($concat(var$0, $$str((this->_nsCounter++))));
}

void SymbolTable::setCurrentNode($SyntaxTreeNode* node) {
	$set(this, _current, node);
}

$String* SymbolTable::lookupNamespace($String* prefix) {
	if (this->_current == nullptr) {
		$init($Constants);
		return ($Constants::EMPTYSTRING);
	}
	return ($nc(this->_current)->lookupNamespace(prefix));
}

void SymbolTable::addPrefixAlias($String* prefix, $String* alias) {
	if (this->_aliases == nullptr) {
		$set(this, _aliases, $new($HashMap));
	}
	$nc(this->_aliases)->put(prefix, alias);
}

$String* SymbolTable::lookupPrefixAlias($String* prefix) {
	if (this->_aliases == nullptr) {
		return nullptr;
	}
	return $cast($String, $nc(this->_aliases)->get(prefix));
}

void SymbolTable::excludeURI($String* uri) {
	if (uri == nullptr) {
		return;
	}
	if (this->_excludedURI == nullptr) {
		$set(this, _excludedURI, $new($HashMap));
	}
	$var($Integer, refcnt, $cast($Integer, $nc(this->_excludedURI)->get(uri)));
	if (refcnt == nullptr) {
		$assign(refcnt, $Integer::valueOf(1));
	} else {
		$assign(refcnt, $Integer::valueOf($nc(refcnt)->intValue() + 1));
	}
	$nc(this->_excludedURI)->put(uri, refcnt);
}

void SymbolTable::excludeNamespaces($String* prefixes) {
	$useLocalCurrentObjectStackCache();
	if (prefixes != nullptr) {
		$var($StringTokenizer, tokens, $new($StringTokenizer, prefixes));
		while (tokens->hasMoreTokens()) {
			$var($String, prefix, tokens->nextToken());
			$var($String, uri, nullptr);
			if ($nc(prefix)->equals("#default"_s)) {
				$init($Constants);
				$assign(uri, lookupNamespace($Constants::EMPTYSTRING));
			} else {
				$assign(uri, lookupNamespace(prefix));
			}
			if (uri != nullptr) {
				excludeURI(uri);
			}
		}
	}
}

bool SymbolTable::isExcludedNamespace($String* uri) {
	if (uri != nullptr && this->_excludedURI != nullptr) {
		$var($Integer, refcnt, $cast($Integer, $nc(this->_excludedURI)->get(uri)));
		return (refcnt != nullptr && refcnt->intValue() > 0);
	}
	return false;
}

void SymbolTable::unExcludeNamespaces($String* prefixes) {
	$useLocalCurrentObjectStackCache();
	if (this->_excludedURI == nullptr) {
		return;
	}
	if (prefixes != nullptr) {
		$var($StringTokenizer, tokens, $new($StringTokenizer, prefixes));
		while (tokens->hasMoreTokens()) {
			$var($String, prefix, tokens->nextToken());
			$var($String, uri, nullptr);
			if ($nc(prefix)->equals("#default"_s)) {
				$init($Constants);
				$assign(uri, lookupNamespace($Constants::EMPTYSTRING));
			} else {
				$assign(uri, lookupNamespace(prefix));
			}
			$var($Integer, refcnt, $cast($Integer, $nc(this->_excludedURI)->get(uri)));
			if (refcnt != nullptr) {
				$nc(this->_excludedURI)->put(uri, $($Integer::valueOf(refcnt->intValue() - 1)));
			}
		}
	}
}

void SymbolTable::pushExcludedNamespacesContext() {
	if (this->_excludedURIStack == nullptr) {
		$set(this, _excludedURIStack, $new($Stack));
	}
	$nc(this->_excludedURIStack)->push(this->_excludedURI);
	$set(this, _excludedURI, nullptr);
}

void SymbolTable::popExcludedNamespacesContext() {
	$set(this, _excludedURI, $cast($Map, $nc(this->_excludedURIStack)->pop()));
	if ($nc(this->_excludedURIStack)->isEmpty()) {
		$set(this, _excludedURIStack, nullptr);
	}
}

SymbolTable::SymbolTable() {
}

$Class* SymbolTable::load$($String* name, bool initialize) {
	$loadClass(SymbolTable, name, initialize, &_SymbolTable_ClassInfo_, allocate$SymbolTable);
	return class$;
}

$Class* SymbolTable::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com