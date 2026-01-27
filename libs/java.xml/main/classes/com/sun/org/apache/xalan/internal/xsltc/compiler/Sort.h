#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Sort_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Sort_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Sort
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction
//$ implements com.sun.org.apache.xalan.internal.xsltc.compiler.Closure

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Closure.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
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
								class AttributeValue;
								class Expression;
								class Parser;
								class SymbolTable;
								class VariableRefBase;
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
									class NodeSortRecordGenerator;
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
namespace java {
	namespace util {
		class List;
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

class Sort : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction, public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure {
	$class(Sort, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure)
public:
	Sort();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addVariable(::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase* variableRef) override;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* compileExtract(::java::util::List* sortObjects, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSortRecordGenerator* sortRecord, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg, $String* className);
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* compileInit(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSortRecordGenerator* sortRecord, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg, $String* className);
	static $String* compileSortRecord(::java::util::List* sortObjects, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	static void compileSortRecordFactory(::java::util::List* sortObjects, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	static $String* compileSortRecordFactory(::java::util::List* sortObjects, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $String* sortRecordClass);
	virtual $String* getInnerClassName() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure* getParentClosure() override;
	virtual bool inInnerClass() override;
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	void setInnerClassName($String* className);
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	void translateCaseOrder(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	void translateLang(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	void translateSelect(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	static void translateSortIterator(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* nodeSet, ::java::util::List* sortObjects);
	void translateSortOrder(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	void translateSortType(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _select = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue* _order = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue* _caseOrder = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue* _dataType = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue* _lang = nullptr;
	$String* _className = nullptr;
	::java::util::List* _closureVars = nullptr;
	bool _needsSortRecordFactory = false;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Sort_h_