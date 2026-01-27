#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Text_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Text_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Text
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>

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

class Text : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction {
	$class(Text, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction)
public:
	Text();
	void init$();
	void init$($String* text);
	bool canLoadAsArrayOffsetLength();
	virtual bool contextDependent() override;
	virtual void display(int32_t indent) override;
	$String* getText();
	void ignore();
	bool isIgnore();
	bool isTextElement();
	static bool isWhitespace(char16_t c);
	void loadAsArrayOffsetLength(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	void setText($String* text);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	$String* _text = nullptr;
	bool _escaping = false;
	bool _ignore = false;
	bool _textElement = false;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Text_h_