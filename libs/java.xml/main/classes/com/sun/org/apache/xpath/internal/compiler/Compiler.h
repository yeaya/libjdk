#ifndef _com_sun_org_apache_xpath_internal_compiler_Compiler_h_
#define _com_sun_org_apache_xpath_internal_compiler_Compiler_h_
//$ class com.sun.org.apache.xpath.internal.compiler.Compiler
//$ extends com.sun.org.apache.xpath.internal.compiler.OpMap

#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class PrefixResolver;
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
				namespace xpath {
					namespace internal {
						class Expression;
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
				namespace xpath {
					namespace internal {
						namespace compiler {
							class FunctionTable;
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
				namespace xpath {
					namespace internal {
						namespace operations {
							class Operation;
							class UnaryOperation;
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
				namespace xpath {
					namespace internal {
						namespace patterns {
							class StepPattern;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
			class SourceLocator;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

class $export Compiler : public ::com::sun::org::apache::xpath::internal::compiler::OpMap {
	$class(Compiler, 0, ::com::sun::org::apache::xpath::internal::compiler::OpMap)
public:
	Compiler();
	using ::com::sun::org::apache::xpath::internal::compiler::OpMap::equals;
	void init$(::javax::xml::transform::ErrorListener* errorHandler, ::javax::xml::transform::SourceLocator* locator, ::com::sun::org::apache::xpath::internal::compiler::FunctionTable* fTable);
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::Expression* and$(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* arg(int32_t opPos);
	virtual void assertion(bool b, $String* msg);
	virtual ::com::sun::org::apache::xpath::internal::Expression* bool$(int32_t opPos);
	::com::sun::org::apache::xpath::internal::Expression* compile(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* compileExpression(int32_t opPos);
	::com::sun::org::apache::xpath::internal::Expression* compileExtension(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* compileFunction(int32_t opPos);
	::com::sun::org::apache::xpath::internal::Expression* compileOperation(::com::sun::org::apache::xpath::internal::operations::Operation* operation, int32_t opPos);
	void compilePredicates(int32_t opPos, $Array<::com::sun::org::apache::xpath::internal::Expression>* predicates);
	::com::sun::org::apache::xpath::internal::Expression* compileUnary(::com::sun::org::apache::xpath::internal::operations::UnaryOperation* unary, int32_t opPos);
	virtual int32_t countPredicates(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* div(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* equals(int32_t opPos);
	virtual void error($String* msg, $ObjectArray* args) override;
	virtual $Array<::com::sun::org::apache::xpath::internal::Expression>* getCompiledPredicates(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::compiler::FunctionTable* getFunctionTable();
	virtual int32_t getLocationPathDepth();
	virtual ::com::sun::org::apache::xml::internal::utils::PrefixResolver* getNamespaceContext();
	int64_t getNextMethodId();
	virtual int32_t getWhatToShow(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* group(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* gt(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* gte(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* literal(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* locationPath(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* locationPathPattern(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* lt(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* lte(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* matchPattern(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* minus(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* mod(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* mult(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* neg(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* notequals(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* number(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* numberlit(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* or$(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* plus(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* predicate(int32_t opPos);
	virtual void setNamespaceContext(::com::sun::org::apache::xml::internal::utils::PrefixResolver* pr);
	virtual ::com::sun::org::apache::xpath::internal::patterns::StepPattern* stepPattern(int32_t opPos, int32_t stepCount, ::com::sun::org::apache::xpath::internal::patterns::StepPattern* ancestorPattern);
	virtual ::com::sun::org::apache::xpath::internal::Expression* string(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* union$(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::Expression* variable(int32_t opPos);
	virtual void warn($String* msg, $ObjectArray* args);
	int32_t countOp = 0;
	int32_t locPathDepth = 0;
	static const bool DEBUG = false;
	static int64_t s_nextMethodId;
	::com::sun::org::apache::xml::internal::utils::PrefixResolver* m_currentPrefixResolver = nullptr;
	::javax::xml::transform::ErrorListener* m_errorHandler = nullptr;
	::javax::xml::transform::SourceLocator* m_locator = nullptr;
	::com::sun::org::apache::xpath::internal::compiler::FunctionTable* m_functionTable = nullptr;
};

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")

#endif // _com_sun_org_apache_xpath_internal_compiler_Compiler_h_