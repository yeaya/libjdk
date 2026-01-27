#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_TestSeq_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_TestSeq_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.TestSeq
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
							class InstructionList;
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
								class LocationPathPattern;
								class Mode;
								class Template;
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
namespace java {
	namespace util {
		class List;
		class Map;
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

class TestSeq : public ::java::lang::Object {
	$class(TestSeq, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestSeq();
	void init$(::java::util::List* patterns, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode* mode);
	void init$(::java::util::List* patterns, int32_t kernelType, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode* mode);
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* compile(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* continuation);
	void findTemplates(::java::util::Map* templates);
	::com::sun::org::apache::bcel::internal::generic::InstructionList* getInstructionList();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern* getPattern(int32_t n);
	int32_t getPosition();
	double getPriority();
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getTemplateHandle(::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* template$);
	void reduce();
	virtual $String* toString() override;
	int32_t _kernelType = 0;
	::java::util::List* _patterns = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode* _mode = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* _default = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionList* _instructionList = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* _start = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_TestSeq_h_