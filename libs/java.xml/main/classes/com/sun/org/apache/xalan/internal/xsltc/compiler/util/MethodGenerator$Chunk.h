#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator$Chunk_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator$Chunk_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$Chunk
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
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

class MethodGenerator$Chunk : public ::java::lang::Comparable {
	$class(MethodGenerator$Chunk, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	MethodGenerator$Chunk();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* this$0, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end);
	virtual int32_t compareTo(Object$* comparand) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getChunkEnd();
	virtual int32_t getChunkSize();
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getChunkStart();
	virtual bool isAdjacentTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator$Chunk* neighbour);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* this$0 = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* m_start = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* m_end = nullptr;
	int32_t m_size = 0;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator$Chunk_h_