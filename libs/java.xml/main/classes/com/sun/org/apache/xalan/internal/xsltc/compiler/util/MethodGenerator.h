#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator
//$ extends com.sun.org.apache.bcel.internal.generic.MethodGen
//$ implements com.sun.org.apache.xalan.internal.xsltc.compiler.Constants

#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <java/lang/Array.h>

#pragma push_macro("DOM_INDEX")
#undef DOM_INDEX
#pragma push_macro("END_ELEMENT_SIG")
#undef END_ELEMENT_SIG
#pragma push_macro("HANDLER_INDEX")
#undef HANDLER_INDEX
#pragma push_macro("INVALID_INDEX")
#undef INVALID_INDEX
#pragma push_macro("ITERATOR_INDEX")
#undef ITERATOR_INDEX
#pragma push_macro("MAX_BRANCH_TARGET_OFFSET")
#undef MAX_BRANCH_TARGET_OFFSET
#pragma push_macro("MAX_METHOD_SIZE")
#undef MAX_METHOD_SIZE
#pragma push_macro("MINIMUM_OUTLINEABLE_CHUNK_SIZE")
#undef MINIMUM_OUTLINEABLE_CHUNK_SIZE
#pragma push_macro("MIN_BRANCH_TARGET_OFFSET")
#undef MIN_BRANCH_TARGET_OFFSET
#pragma push_macro("START_ELEMENT_SIG")
#undef START_ELEMENT_SIG
#pragma push_macro("TARGET_METHOD_SIZE")
#undef TARGET_METHOD_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Method;
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
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class Instruction;
							class InstructionHandle;
							class InstructionList;
							class LocalVariableGen;
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
								class Pattern;
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
									class MethodGenerator$Chunk;
									class MethodGenerator$LocalVariableRegistry;
									class SlotAllocator;
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
								namespace util {

class MethodGenerator : public ::com::sun::org::apache::bcel::internal::generic::MethodGen, public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants {
	$class(MethodGenerator, 0, ::com::sun::org::apache::bcel::internal::generic::MethodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants)
public:
	MethodGenerator();
	using ::com::sun::org::apache::bcel::internal::generic::MethodGen::addLocalVariable;
	using ::com::sun::org::apache::bcel::internal::generic::MethodGen::getInstructionList;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t access_flags, ::com::sun::org::apache::bcel::internal::generic::Type* return_type, $Array<::com::sun::org::apache::bcel::internal::generic::Type>* arg_types, $StringArray* arg_names, $String* method_name, $String* class_name, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual void addInstructionList(::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* pattern, ::com::sun::org::apache::bcel::internal::generic::InstructionList* ilist);
	virtual ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* addLocalVariable($String* name, ::com::sun::org::apache::bcel::internal::generic::Type* type, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* addLocalVariable2($String* name, ::com::sun::org::apache::bcel::internal::generic::Type* type, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start);
	::com::sun::org::apache::bcel::internal::generic::Instruction* attribute();
	::com::sun::org::apache::bcel::internal::generic::Instruction* endDocument();
	::com::sun::org::apache::bcel::internal::generic::Instruction* endElement();
	::java::util::List* getCandidateChunks(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, int32_t totalMethodSize);
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Method>* getGeneratedMethods(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionList* getInstructionList(::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* pattern);
	virtual int32_t getLocalIndex($String* name);
	virtual ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* getLocalVariable($String* name);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator$LocalVariableRegistry* getLocalVariableRegistry();
	virtual ::com::sun::org::apache::bcel::internal::classfile::Method* getThisMethod();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadContextNode();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadCurrentNode();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadDOM();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadHandler();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadIterator();
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* loadLocal(int32_t index, ::com::sun::org::apache::bcel::internal::generic::Type* type);
	virtual void markChunkEnd();
	virtual void markChunkStart();
	::java::util::List* mergeAdjacentChunks($Array<::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator$Chunk>* chunks);
	::com::sun::org::apache::bcel::internal::generic::Instruction* namespace$();
	::com::sun::org::apache::bcel::internal::generic::Instruction* nextNode();
	virtual bool offsetInLocalVariableGenRange(::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* lvg, int32_t offset);
	::com::sun::org::apache::bcel::internal::classfile::Method* outline(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* first, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* last, $String* outlinedMethodName, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Method>* outlineChunks(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, int32_t originalMethodSize);
	virtual void removeLocalVariable(::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* lvg) override;
	::com::sun::org::apache::bcel::internal::generic::Instruction* reset();
	using ::com::sun::org::apache::bcel::internal::generic::MethodGen::setMaxLocals;
	virtual void setMaxLocals() override;
	::com::sun::org::apache::bcel::internal::generic::Instruction* setStartNode();
	::com::sun::org::apache::bcel::internal::generic::Instruction* startDocument();
	::com::sun::org::apache::bcel::internal::generic::Instruction* startElement();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* storeContextNode();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* storeCurrentNode();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* storeDOM();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* storeHandler();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* storeIterator();
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* storeLocal(int32_t index, ::com::sun::org::apache::bcel::internal::generic::Type* type);
	virtual $String* toString() override;
	::com::sun::org::apache::bcel::internal::generic::Instruction* uniqueAttribute();
	virtual bool widenConditionalBranchTargetOffsets();
	static const int32_t INVALID_INDEX = (-1);
	static $String* START_ELEMENT_SIG;
	static $String* END_ELEMENT_SIG;
	static const int32_t DOM_INDEX = 1;
	static const int32_t ITERATOR_INDEX = 2;
	static const int32_t HANDLER_INDEX = 3;
	static const int32_t MAX_METHOD_SIZE = 0x0000FFFF;
	static const int32_t MAX_BRANCH_TARGET_OFFSET = 32767;
	static const int32_t MIN_BRANCH_TARGET_OFFSET = (-32768);
	static const int32_t TARGET_METHOD_SIZE = 0x0000EA60;
	static const int32_t MINIMUM_OUTLINEABLE_CHUNK_SIZE = 1000;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _iloadCurrent = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _istoreCurrent = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _astoreHandler = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _aloadHandler = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _astoreIterator = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _aloadIterator = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _aloadDom = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _astoreDom = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _startElement = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _endElement = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _startDocument = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _endDocument = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _attribute = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _uniqueAttribute = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _namespace = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _setStartNode = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _reset = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _nextNode = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::SlotAllocator* _slotAllocator = nullptr;
	bool _allocatorInit = false;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator$LocalVariableRegistry* _localVariableRegistry = nullptr;
	::java::util::Map* _preCompiled = nullptr;
	int32_t m_totalChunks = 0;
	int32_t m_openChunks = 0;
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

#pragma pop_macro("DOM_INDEX")
#pragma pop_macro("END_ELEMENT_SIG")
#pragma pop_macro("HANDLER_INDEX")
#pragma pop_macro("INVALID_INDEX")
#pragma pop_macro("ITERATOR_INDEX")
#pragma pop_macro("MAX_BRANCH_TARGET_OFFSET")
#pragma pop_macro("MAX_METHOD_SIZE")
#pragma pop_macro("MINIMUM_OUTLINEABLE_CHUNK_SIZE")
#pragma pop_macro("MIN_BRANCH_TARGET_OFFSET")
#pragma pop_macro("START_ELEMENT_SIG")
#pragma pop_macro("TARGET_METHOD_SIZE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator_h_