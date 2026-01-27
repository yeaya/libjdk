#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ClassGenerator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ClassGenerator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.ClassGenerator
//$ extends com.sun.org.apache.bcel.internal.generic.ClassGen

#include <com/sun/org/apache/bcel/internal/generic/ClassGen.h>
#include <java/lang/Array.h>

#pragma push_macro("INVALID_INDEX")
#undef INVALID_INDEX
#pragma push_macro("TRANSLET_INDEX")
#undef TRANSLET_INDEX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Instruction;
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
								class Parser;
								class Stylesheet;
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
								namespace util {

class ClassGenerator : public ::com::sun::org::apache::bcel::internal::generic::ClassGen {
	$class(ClassGenerator, 0, ::com::sun::org::apache::bcel::internal::generic::ClassGen)
public:
	ClassGenerator();
	using ::com::sun::org::apache::bcel::internal::generic::ClassGen::addMethod;
	void init$($String* class_name, $String* super_class_name, $String* file_name, int32_t access_flags, $StringArray* interfaces, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* stylesheet);
	virtual void addMethod(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	$String* getApplyTemplatesSig();
	$String* getApplyTemplatesSigForImport();
	virtual $String* getClassName() override;
	$String* getDOMClass();
	$String* getDOMClassSig();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* getParser();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* getStylesheet();
	virtual bool isExternal();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadTranslet();
	static const int32_t TRANSLET_INDEX = 0;
	static int32_t INVALID_INDEX;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* _stylesheet = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* _parser = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _aloadTranslet = nullptr;
	$String* _domClass = nullptr;
	$String* _domClassSig = nullptr;
	$String* _applyTemplatesSig = nullptr;
	$String* _applyTemplatesSigForImport = nullptr;
};

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INVALID_INDEX")
#pragma pop_macro("TRANSLET_INDEX")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ClassGenerator_h_