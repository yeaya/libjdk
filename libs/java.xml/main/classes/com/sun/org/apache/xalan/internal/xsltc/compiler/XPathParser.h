#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_XPathParser_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_XPathParser_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.XPathParser
//$ extends com.sun.java_cup.internal.runtime.lr_parser

#include <com/sun/java_cup/internal/runtime/lr_parser.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {
					class Scanner;
					class Symbol;
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
								class Parser;
								class QName;
								class RelativeLocationPath;
								class Step;
								class StepPattern;
								class SymbolTable;
								class SyntaxTreeNode;
								class VariableRef;
								class XSLTC;
								class parser_actions;
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
		class List;
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

class XPathParser : public ::com::sun::java_cup::internal::runtime::lr_parser {
	$class(XPathParser, 0, ::com::sun::java_cup::internal::runtime::lr_parser)
public:
	XPathParser();
	void init$();
	void init$(::com::sun::java_cup::internal::runtime::Scanner* s);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	virtual int32_t EOF_sym() override;
	virtual $Array<int16_t, 2>* action_table() override;
	void addError(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg* error);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern* createStepPattern(int32_t axis, Object$* test, ::java::util::List* predicates);
	virtual ::com::sun::java_cup::internal::runtime::Symbol* do_action(int32_t act_num, ::com::sun::java_cup::internal::runtime::lr_parser* parser, ::java::util::Stack* stack, int32_t top) override;
	virtual int32_t error_sym() override;
	virtual int32_t findNodeType(int32_t axis, Object$* test);
	virtual int32_t getLineNumber();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQName($String* namespace$, $String* prefix, $String* localname);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getQNameIgnoreDefaultNs($String* name);
	virtual void init_actions() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath* insertStep(::com::sun::org::apache::xalan::internal::xsltc::compiler::Step* step, ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath* rlp);
	virtual bool isElementAxis(int32_t axis);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* lookupName(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	using ::com::sun::java_cup::internal::runtime::lr_parser::parse;
	virtual ::com::sun::java_cup::internal::runtime::Symbol* parse($String* expression, int32_t lineNumber);
	virtual $Array<int16_t, 2>* production_table() override;
	virtual $Array<int16_t, 2>* reduce_table() override;
	virtual void report_error($String* message, Object$* info) override;
	virtual void report_fatal_error($String* message, Object$* info) override;
	virtual void setCallsNodeset(bool flag);
	virtual void setHasIdCall(bool flag);
	virtual void setMultiDocument(bool flag);
	virtual int32_t start_production() override;
	virtual int32_t start_state() override;
	static $Array<int16_t, 2>* _production_table;
	static $Array<int16_t, 2>* _action_table;
	static $Array<int16_t, 2>* _reduce_table;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::parser_actions* action_obj = nullptr;
	static ::java::util::List* EmptyArgs;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRef* DummyVarRef;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* _parser = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC* _xsltc = nullptr;
	$String* _expression = nullptr;
	int32_t _lineNumber = 0;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* _symbolTable = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_XPathParser_h_