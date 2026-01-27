#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Output_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Output_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Output
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>

#pragma push_macro("HTML_VERSION")
#undef HTML_VERSION
#pragma push_macro("STRING_SIG")
#undef STRING_SIG
#pragma push_macro("XML_VERSION")
#undef XML_VERSION

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Parser;
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
								}
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

class Output : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement {
	$class(Output, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement)
public:
	Output();
	void init$();
	void disable();
	virtual void display(int32_t indent) override;
	bool enabled();
	$String* getCdata();
	$String* getOutputMethod();
	void mergeOutput(::com::sun::org::apache::xalan::internal::xsltc::compiler::Output* previous);
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	void transferAttribute(::com::sun::org::apache::xalan::internal::xsltc::compiler::Output* previous, $String* qname);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	$String* _version = nullptr;
	$String* _method = nullptr;
	$String* _encoding = nullptr;
	bool _omitHeader = false;
	$String* _standalone = nullptr;
	$String* _doctypePublic = nullptr;
	$String* _doctypeSystem = nullptr;
	$String* _cdata = nullptr;
	bool _indent = false;
	$String* _mediaType = nullptr;
	$String* _indentamount = nullptr;
	bool _disabled = false;
	static $String* STRING_SIG;
	static $String* XML_VERSION;
	static $String* HTML_VERSION;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("HTML_VERSION")
#pragma pop_macro("STRING_SIG")
#pragma pop_macro("XML_VERSION")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Output_h_