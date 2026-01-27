#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_SymbolTable_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_SymbolTable_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.SymbolTable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class AttributeSet;
								class DecimalFormatting;
								class Key;
								class Param;
								class QName;
								class Stylesheet;
								class SyntaxTreeNode;
								class Template;
								class Variable;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {
									class MethodType;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Stack;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class SymbolTable : public ::java::lang::Object {
	$class(SymbolTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SymbolTable();
	void init$();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet* addAttributeSet(::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet* atts);
	void addDecimalFormatting(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name, ::com::sun::org::apache::xalan::internal::xsltc::compiler::DecimalFormatting* symbols);
	void addKey(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Key* key);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Param* addParam(::com::sun::org::apache::xalan::internal::xsltc::compiler::Param* parameter);
	void addPrefixAlias($String* prefix, $String* alias);
	void addPrimop($String* name, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType* mtype);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* addStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* node);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* addTemplate(::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* template$);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable* addVariable(::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable* variable);
	void excludeNamespaces($String* prefixes);
	void excludeURI($String* uri);
	$String* generateNamespacePrefix();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::DecimalFormatting* getDecimalFormatting(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Key* getKey(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	bool isExcludedNamespace($String* uri);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet* lookupAttributeSet(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* lookupName(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* qname);
	$String* lookupNamespace($String* prefix);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Param* lookupParam(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* qname);
	$String* lookupPrefixAlias($String* prefix);
	::java::util::List* lookupPrimop($String* name);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* lookupStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* lookupTemplate(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable* lookupVariable(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* qname);
	void popExcludedNamespacesContext();
	void pushExcludedNamespacesContext();
	void setCurrentNode(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node);
	void unExcludeNamespaces($String* prefixes);
	::java::util::Map* _stylesheets = nullptr;
	::java::util::Map* _primops = nullptr;
	::java::util::Map* _variables = nullptr;
	::java::util::Map* _templates = nullptr;
	::java::util::Map* _attributeSets = nullptr;
	::java::util::Map* _aliases = nullptr;
	::java::util::Map* _excludedURI = nullptr;
	::java::util::Stack* _excludedURIStack = nullptr;
	::java::util::Map* _decimalFormats = nullptr;
	::java::util::Map* _keys = nullptr;
	int32_t _nsCounter = 0;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* _current = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_SymbolTable_h_