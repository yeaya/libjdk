#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_parser_actions_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_parser_actions_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.parser_actions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {
					class Symbol;
					class lr_parser;
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
								class XPathParser;
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

class parser_actions : public ::java::lang::Object {
	$class(parser_actions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	parser_actions();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::XPathParser* parser);
	::com::sun::java_cup::internal::runtime::Symbol* parser_do_action(int32_t parser_act_num, ::com::sun::java_cup::internal::runtime::lr_parser* parser_parser, ::java::util::Stack* parser_stack, int32_t parser_top);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::XPathParser* parser = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_parser_actions_h_