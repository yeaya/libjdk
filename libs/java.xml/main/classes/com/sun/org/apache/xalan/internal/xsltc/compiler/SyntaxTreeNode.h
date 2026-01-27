#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_SyntaxTreeNode_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_SyntaxTreeNode_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Constants

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Parser;
								class QName;
								class Stylesheet;
								class SymbolTable;
								class Template;
								class XSLTC;
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
									class ClassGenerator;
									class MethodGenerator;
									class Type;
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
		class Iterator;
		class List;
		class Map;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class AttributesImpl;
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

class SyntaxTreeNode : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants {
	$class(SyntaxTreeNode, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants)
public:
	SyntaxTreeNode();
	void init$();
	void init$(int32_t line);
	void init$($String* uri, $String* prefix, $String* local);
	virtual void addAttribute($String* qname, $String* value);
	void addElement(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* element);
	virtual void addPrefixMapping($String* prefix, $String* uri);
	virtual void compileResultTree(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual bool contextDependent();
	virtual bool dependentContents();
	virtual void display(int32_t indent);
	virtual void displayContents(int32_t indent);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* elementAt(int32_t pos);
	int32_t elementCount();
	::java::util::Iterator* elements();
	virtual $String* getAttribute($String* qname);
	virtual $String* getAttribute($String* prefix, $String* localName);
	virtual ::org::xml::sax::Attributes* getAttributes();
	::java::util::List* getContents();
	virtual int32_t getImportPrecedence();
	int32_t getLineNumber();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* getParent();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* getParser();
	virtual ::java::util::Map* getPrefixMapping();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQName();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* getStylesheet();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* getSymbolTable();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* getTemplate();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC* getXSLTC();
	virtual bool hasAttribute($String* qname);
	bool hasContents();
	void indent(int32_t indent);
	bool isAdaptiveRTF(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node);
	bool isDummy();
	bool isSimpleRTF(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node);
	bool isTextElement(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node, bool doExtendedCheck);
	bool lambda$isSimpleRTF$0(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* item);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* lastChild();
	virtual $String* lookupNamespace($String* prefix);
	virtual $String* lookupPrefix($String* uri);
	virtual bool notTypeOf($Class* type);
	void parseChildren(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	void removeElement(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* element);
	virtual void reportError(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* element, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser, $String* errorCode, $String* message);
	virtual void reportWarning(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* element, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser, $String* errorCode, $String* message);
	virtual void setAttributes(::org::xml::sax::helpers::AttributesImpl* attributes);
	void setFirstElement(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* element);
	void setLineNumber(int32_t line);
	virtual void setParent(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parent);
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	virtual void setPrefixMapping(::java::util::Map* mapping);
	virtual void setQName(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* qname);
	virtual void setQName($String* uri, $String* prefix, $String* localname);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) {}
	virtual void translateContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) {return nullptr;}
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheckContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* updateScope(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* _parser = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* _parent = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* _stylesheet = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* _template = nullptr;
	::java::util::List* _contents = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _qname = nullptr;
	int32_t _line = 0;
	::org::xml::sax::helpers::AttributesImpl* _attributes = nullptr;
	::java::util::Map* _prefixMapping = nullptr;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* Dummy;
	static const int32_t IndentIncrement = 4;
	static $chars* _spaces;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_SyntaxTreeNode_h_