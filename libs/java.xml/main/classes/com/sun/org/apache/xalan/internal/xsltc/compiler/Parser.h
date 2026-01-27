#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Parser_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Parser_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Parser
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Constants
//$ implements org.xml.sax.ContentHandler

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <java/lang/Array.h>
#include <org/xml/sax/ContentHandler.h>

#pragma push_macro("TRANSLET")
#undef TRANSLET
#pragma push_macro("XSL")
#undef XSL

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Expression;
								class Output;
								class Param;
								class Pattern;
								class QName;
								class Stylesheet;
								class SymbolTable;
								class SyntaxTreeNode;
								class Template;
								class Variable;
								class VariableBase;
								class XPathParser;
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
									class ErrorMsg;
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
		class ArrayList;
		class Map;
		class Properties;
		class Stack;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class InputSource;
			class Locator;
			class XMLReader;
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

class Parser : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants, public ::org::xml::sax::ContentHandler {
	$class(Parser, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants, ::org::xml::sax::ContentHandler)
public:
	Parser();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC* xsltc, bool useOverrideDefaultParser, bool hasUserErrListener);
	virtual void addParameter(::com::sun::org::apache::xalan::internal::xsltc::compiler::Param* param);
	virtual void addVariable(::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable* var);
	void addVariableOrParam(::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase* var);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	void checkForSuperfluousAttributes(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node, ::org::xml::sax::Attributes* attrs);
	virtual void createAST(::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* stylesheet);
	virtual bool elementSupported($String* namespace$, $String* localName);
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localname, $String* qname) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual bool errorsFound();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* findStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* root, $String* href);
	virtual bool functionSupported($String* fname);
	virtual int32_t getCurrentImportPrecedence();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* getCurrentStylesheet();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* getDocumentRoot();
	virtual ::java::util::ArrayList* getErrors();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getExcludeResultPrefixes();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getExtensionElementPrefixes();
	int32_t getLineNumber();
	virtual int32_t getNextImportPrecedence();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Output* getOutput();
	virtual ::java::util::Properties* getOutputProperties();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQName($String* stringRep);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQName($String* stringRep, bool reportError);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQName($String* stringRep, bool reportError, bool ignoreDefaultNs);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQName($String* namespace$, $String* prefix, $String* localname);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQName($String* scope, $String* name);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQName(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* scope, ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQNameIgnoreDefaultNs($String* stringRep);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQNameSafe($String* stringRep);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* getStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* root);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* getSymbolTable();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* getTemplate();
	virtual int32_t getTemplateIndex();
	$String* getTokenValue($String* token);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* getTopLevelStylesheet();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getUseAttributeSets();
	virtual ::java::util::ArrayList* getWarnings();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC* getXSLTC();
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void init();
	void initAttrTable($String* elementName, $StringArray* attrs);
	void initExtClass($String* elementName, $String* className);
	void initExtClass($String* namespace$, $String* elementName, $String* className);
	void initExtClasses();
	void initInstructionAttrs();
	void initStdClass($String* elementName, $String* className);
	void initStdClasses();
	void initSymbolTable();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* loadExternalStylesheet($String* location);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase* lookupVariable(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* makeInstance($String* uri, $String* prefix, $String* local, ::org::xml::sax::Attributes* attributes);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* makeStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* element);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parse(::org::xml::sax::XMLReader* reader, ::org::xml::sax::InputSource* input);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parse(::org::xml::sax::InputSource* input);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* parseExpression(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parent, $String* exp);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* parseExpression(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parent, $String* attr, $String* def);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* parsePattern(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parent, $String* pattern);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* parsePattern(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parent, $String* attr, $String* def);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parseTopLevel(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parent, $String* text, $String* expression);
	virtual void printErrors();
	virtual void printWarnings();
	virtual void processingInstruction($String* name, $String* value) override;
	virtual void removeVariable(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	virtual void reportError(int32_t category, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg* error);
	virtual void setCurrentStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* stylesheet);
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setOutput(::com::sun::org::apache::xalan::internal::xsltc::compiler::Output* output);
	virtual void setPIParameters($String* media, $String* title, $String* charset);
	virtual void setTemplate(::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* template$);
	virtual void setXSLTC(::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC* xsltc);
	virtual void skippedEntity($String* name) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localname, $String* qname, ::org::xml::sax::Attributes* attributes) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	static $String* XSL;
	static $String* TRANSLET;
	::org::xml::sax::Locator* _locator = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC* _xsltc = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::XPathParser* _xpathParser = nullptr;
	::java::util::ArrayList* _errors = nullptr;
	::java::util::ArrayList* _warnings = nullptr;
	::java::util::Map* _instructionClasses = nullptr;
	::java::util::Map* _instructionAttrs = nullptr;
	::java::util::Map* _qNames = nullptr;
	::java::util::Map* _namespaces = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _useAttributeSets = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _excludeResultPrefixes = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _extensionElementPrefixes = nullptr;
	::java::util::Map* _variableScope = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* _currentStylesheet = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* _symbolTable = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Output* _output = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* _template = nullptr;
	bool _rootNamespaceDef = false;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* _root = nullptr;
	$String* _target = nullptr;
	int32_t _currentImportPrecedence = 0;
	bool _overrideDefaultParser = false;
	bool _hasUserErrListener = false;
	$String* _PImedia = nullptr;
	$String* _PItitle = nullptr;
	$String* _PIcharset = nullptr;
	int32_t _templateIndex = 0;
	bool versionIsOne = false;
	::java::util::Stack* _parentStack = nullptr;
	::java::util::Map* _prefixMapping = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("TRANSLET")
#pragma pop_macro("XSL")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Parser_h_