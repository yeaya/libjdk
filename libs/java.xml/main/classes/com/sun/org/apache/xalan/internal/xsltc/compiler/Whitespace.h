#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Whitespace_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Whitespace_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Whitespace
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <java/lang/Array.h>

#pragma push_macro("PRESERVE_SPACE")
#undef PRESERVE_SPACE
#pragma push_macro("RULE_ALL")
#undef RULE_ALL
#pragma push_macro("RULE_ELEMENT")
#undef RULE_ELEMENT
#pragma push_macro("RULE_NAMESPACE")
#undef RULE_NAMESPACE
#pragma push_macro("RULE_NONE")
#undef RULE_NONE
#pragma push_macro("STRIP_SPACE")
#undef STRIP_SPACE
#pragma push_macro("USE_PREDICATE")
#undef USE_PREDICATE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class BranchHandle;
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
								class Parser;
								class SymbolTable;
								class Whitespace$WhitespaceRule;
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

class Whitespace : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement {
	$class(Whitespace, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement)
public:
	Whitespace();
	void init$();
	static void compileDefault(int32_t defaultAction, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	static void compilePredicate(::java::util::List* rules, int32_t defaultAction, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	static void compilePreserveSpace($Array<::com::sun::org::apache::bcel::internal::generic::BranchHandle>* preserve, int32_t pCount, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	static void compileStripSpace($Array<::com::sun::org::apache::bcel::internal::generic::BranchHandle>* strip, int32_t sCount, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::Whitespace$WhitespaceRule* findContradictingRule(::java::util::List* rules, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Whitespace$WhitespaceRule* rule);
	::java::util::List* getRules();
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	static int32_t partition(::java::util::List* rules, int32_t p, int32_t r);
	static int32_t prioritizeRules(::java::util::List* rules);
	static void quicksort(::java::util::List* rules, int32_t p, int32_t r);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	static int32_t translateRules(::java::util::List* rules, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	static const int32_t USE_PREDICATE = 0;
	static const int32_t STRIP_SPACE = 1;
	static const int32_t PRESERVE_SPACE = 2;
	static const int32_t RULE_NONE = 0;
	static const int32_t RULE_ELEMENT = 1;
	static const int32_t RULE_NAMESPACE = 2;
	static const int32_t RULE_ALL = 3;
	$String* _elementList = nullptr;
	int32_t _action = 0;
	int32_t _importPrecedence = 0;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("PRESERVE_SPACE")
#pragma pop_macro("RULE_ALL")
#pragma pop_macro("RULE_ELEMENT")
#pragma pop_macro("RULE_NAMESPACE")
#pragma pop_macro("RULE_NONE")
#pragma pop_macro("STRIP_SPACE")
#pragma pop_macro("USE_PREDICATE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Whitespace_h_