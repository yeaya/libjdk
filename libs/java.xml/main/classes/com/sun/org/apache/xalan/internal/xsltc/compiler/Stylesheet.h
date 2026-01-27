#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Stylesheet_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Stylesheet_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Stylesheet
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>

#pragma push_macro("HTML_OUTPUT")
#undef HTML_OUTPUT
#pragma push_macro("TEXT_OUTPUT")
#undef TEXT_OUTPUT
#pragma push_macro("UNKNOWN_OUTPUT")
#undef UNKNOWN_OUTPUT
#pragma push_macro("XML_OUTPUT")
#undef XML_OUTPUT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Mode;
								class Output;
								class Param;
								class Parser;
								class QName;
								class SourceLoader;
								class SymbolTable;
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
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Properties;
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

class Stylesheet : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode {
	$class(Stylesheet, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode)
public:
	Stylesheet();
	void init$();
	void addDOMField(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	void addIncludedStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* child);
	int32_t addParam(::com::sun::org::apache::xalan::internal::xsltc::compiler::Param* param);
	virtual void addPrefixMapping($String* prefix, $String* uri) override;
	void addStaticField(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, $String* type, $String* name);
	void addTemplate(::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* template$);
	int32_t addVariable(::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable* global);
	bool callsNodeset();
	bool checkForLoop($String* systemId);
	void checkOutputMethod();
	$String* compileBuildKeys(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	void compileConstructor(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Output* output);
	void compileModes(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	void compileStaticInitializer(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	$String* compileTopLevel(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	void compileTransform(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	void declareExtensionPrefixes(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	virtual void display(int32_t indent) override;
	void extensionURI($String* prefixes, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable);
	::java::util::List* getAllValidTemplates();
	$String* getClassName();
	virtual int32_t getImportPrecedence() override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Output* getLastOutputElement();
	int32_t getMinimumDescendantPrecedence();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode* getMode(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* modeName);
	$String* getNamespace($String* prefix);
	int32_t getOutputMethod();
	::java::util::Properties* getOutputProperties();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* getParentStylesheet();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader* getSourceLoader();
	$String* getSystemId();
	bool getTemplateInlining();
	::java::util::List* getTemplates();
	bool hasGlobals();
	bool hasLocalParams();
	bool isExtension($String* uri);
	bool isMultiDocument();
	bool isSimplified();
	static void lambda$compileModes$1(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode* mode);
	void lambda$processModes$0(::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode* mode);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* makeStylesheetName($String* prefix);
	void numberFormattingUsed();
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	void parseOwnChildren(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	void peepHoleOptimization(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	void processModes();
	::java::util::List* resolveDependencies(::java::util::List* input);
	void setCallsNodeset(bool flag);
	void setHasIdCall(bool flag);
	void setImportPrecedence(int32_t precedence);
	void setImportingStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* parent);
	void setIncludingStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* parent);
	void setMultiDocument(bool flag);
	void setOutputProperties(::java::util::Properties* props);
	void setOutputProperty($String* key, $String* value);
	void setParentStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* parent);
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	void setSimplified();
	void setSourceLoader(::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader* loader);
	void setSystemId($String* systemId);
	void setTemplateInlining(bool flag);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	void translate();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	$String* _version = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _name = nullptr;
	$String* _systemId = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* _parentStylesheet = nullptr;
	::java::util::List* _globals = nullptr;
	::java::lang::Boolean* _hasLocalParams = nullptr;
	$String* _className = nullptr;
	::java::util::List* _templates = nullptr;
	::java::util::List* _allValidTemplates = nullptr;
	int32_t _nextModeSerial = 0;
	::java::util::Map* _modes = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode* _defaultMode = nullptr;
	::java::util::Map* _extensions = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* _importedFrom = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* _includedFrom = nullptr;
	::java::util::List* _includedStylesheets = nullptr;
	int32_t _importPrecedence = 0;
	int32_t _minimumDescendantPrecedence = 0;
	::java::util::Map* _keys = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader* _loader = nullptr;
	bool _numberFormattingUsed = false;
	bool _simplified = false;
	bool _multiDocument = false;
	bool _callsNodeset = false;
	bool _hasIdCall = false;
	bool _templateInlining = false;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Output* _lastOutputElement = nullptr;
	::java::util::Properties* _outputProperties = nullptr;
	int32_t _outputMethod = 0;
	static const int32_t UNKNOWN_OUTPUT = 0;
	static const int32_t XML_OUTPUT = 1;
	static const int32_t HTML_OUTPUT = 2;
	static const int32_t TEXT_OUTPUT = 3;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("HTML_OUTPUT")
#pragma pop_macro("TEXT_OUTPUT")
#pragma pop_macro("UNKNOWN_OUTPUT")
#pragma pop_macro("XML_OUTPUT")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Stylesheet_h_