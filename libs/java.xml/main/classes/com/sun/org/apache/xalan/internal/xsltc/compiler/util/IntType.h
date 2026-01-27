#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_IntType_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_IntType_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.IntType
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.NumberType

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NumberType.h>

#pragma push_macro("ADD")
#undef ADD
#pragma push_macro("DIV")
#undef DIV
#pragma push_macro("GE")
#undef GE
#pragma push_macro("GT")
#undef GT
#pragma push_macro("LE")
#undef LE
#pragma push_macro("LOAD")
#undef LOAD
#pragma push_macro("LT")
#undef LT
#pragma push_macro("MUL")
#undef MUL
#pragma push_macro("NEG")
#undef NEG
#pragma push_macro("REM")
#undef REM
#pragma push_macro("STORE")
#undef STORE
#pragma push_macro("SUB")
#undef SUB

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class BranchInstruction;
							class Instruction;
							class Type;
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
								class FlowList;
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
									class BooleanType;
									class ClassGenerator;
									class MethodGenerator;
									class RealType;
									class ReferenceType;
									class StringType;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class IntType : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NumberType {
	$class(IntType, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NumberType)
public:
	IntType();
	void init$();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* ADD() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* DIV() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* GE(bool tozero) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* GT(bool tozero) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* LE(bool tozero) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* LOAD(int32_t slot) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* LT(bool tozero) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* MUL() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* NEG() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* REM() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* STORE(int32_t slot) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* SUB() override;
	virtual int32_t distanceTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* type) override;
	virtual bool identicalTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* other) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* toJCType() override;
	virtual $String* toSignature() override;
	virtual $String* toString() override;
	virtual void translateBox(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* type) override;
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType* type);
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType* type);
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType* type);
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType* type);
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $Class* clazz) override;
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NumberType::translateToDesynthesized;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* translateToDesynthesized(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType* type) override;
	virtual void translateUnBox(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
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

#pragma pop_macro("ADD")
#pragma pop_macro("DIV")
#pragma pop_macro("GE")
#pragma pop_macro("GT")
#pragma pop_macro("LE")
#pragma pop_macro("LOAD")
#pragma pop_macro("LT")
#pragma pop_macro("MUL")
#pragma pop_macro("NEG")
#pragma pop_macro("REM")
#pragma pop_macro("STORE")
#pragma pop_macro("SUB")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_IntType_h_