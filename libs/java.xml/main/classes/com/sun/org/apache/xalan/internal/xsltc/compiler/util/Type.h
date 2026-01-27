#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_Type_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_Type_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Constants

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>

#pragma push_macro("ADD")
#undef ADD
#pragma push_macro("CMP")
#undef CMP
#pragma push_macro("DIV")
#undef DIV
#pragma push_macro("DUP")
#undef DUP
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
#pragma push_macro("POP")
#undef POP
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

class Type : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants {
	$class(Type, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants)
public:
	Type();
	void init$();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* ADD();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* CMP(bool less);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* DIV();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* DUP();
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* GE(bool tozero);
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* GT(bool tozero);
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* LE(bool tozero);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* LOAD(int32_t slot);
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* LT(bool tozero);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* MUL();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* NEG();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* POP();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* REM();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* STORE(int32_t slot);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* SUB();
	virtual int32_t distanceTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* type);
	virtual $String* getClassName();
	virtual bool identicalTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* other) {return false;}
	virtual bool implementedAsMethod();
	virtual bool isNumber();
	virtual bool isSimple();
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* newObjectType($String* javaClassName);
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* newObjectType($Class* clazz);
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* toJCType() {return nullptr;}
	virtual $String* toSignature() {return nullptr;}
	virtual $String* toString() override;
	virtual void translateBox(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual void translateFrom(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $Class* clazz);
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* type);
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $Class* clazz);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* translateToDesynthesized(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* type);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* translateToDesynthesized(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType* type);
	virtual void translateUnBox(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Int;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Real;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Boolean;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* NodeSet;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* String;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* ResultTree;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Reference;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Void;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Object;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* ObjectString;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Node;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Root;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Element;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Attribute;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Text;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Comment;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* Processing_Instruction;
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
#pragma pop_macro("CMP")
#pragma pop_macro("DIV")
#pragma pop_macro("DUP")
#pragma pop_macro("GE")
#pragma pop_macro("GT")
#pragma pop_macro("LE")
#pragma pop_macro("LOAD")
#pragma pop_macro("LT")
#pragma pop_macro("MUL")
#pragma pop_macro("NEG")
#pragma pop_macro("POP")
#pragma pop_macro("REM")
#pragma pop_macro("STORE")
#pragma pop_macro("SUB")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_Type_h_