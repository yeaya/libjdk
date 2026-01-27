#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Mode_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Mode_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Mode
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Constants

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <java/lang/Array.h>

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
								class Pattern;
								class QName;
								class Stylesheet;
								class Template;
								class TestSeq;
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

class Mode : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants {
	$class(Mode, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants)
public:
	Mode();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* stylesheet, $String* suffix);
	void addPattern(int32_t kernelType, ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern* pattern);
	void addPatternToGroup(::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern* lpp);
	void addTemplate(::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* template$);
	void appendTemplateCode(::com::sun::org::apache::bcel::internal::generic::InstructionList* body);
	void appendTestSequences(::com::sun::org::apache::bcel::internal::generic::InstructionList* body);
	void compileApplyImports(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, int32_t min, int32_t max);
	void compileApplyTemplates(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	::com::sun::org::apache::bcel::internal::generic::InstructionList* compileDefaultRecursion(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* next);
	::com::sun::org::apache::bcel::internal::generic::InstructionList* compileDefaultText(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* next);
	static void compileGetChildren(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, int32_t node);
	void compileNamedTemplate(::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* template$, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	::com::sun::org::apache::bcel::internal::generic::InstructionList* compileNamespaces(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $booleans* isNamespace, $booleans* isAttribute, bool attrFlag, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* defaultTarget);
	void compileTemplateCalls(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* next, int32_t min, int32_t max);
	void compileTemplates(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* next);
	void completeTestSequences(int32_t nodeType, ::java::util::List* patterns);
	void flattenAlternative(::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* pattern, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* template$, ::java::util::Map* keys);
	$String* functionName();
	$String* functionName(int32_t min, int32_t max);
	$String* getClassName();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* getStylesheet();
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getTemplateInstructionHandle(::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* template$);
	static bool isAttributeName($String* qname);
	static bool isNamespaceName($String* qname);
	void lambda$compileTemplateCalls$0(int32_t min, int32_t max, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* next, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* template$);
	int32_t partition(::java::util::List* templates, int32_t p, int32_t r);
	void peepHoleOptimization(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	void prepareTestSequences();
	void processPatterns(::java::util::Map* keys);
	::java::util::List* quicksort(::java::util::List* templates, int32_t p, int32_t r);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _name = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* _stylesheet = nullptr;
	$String* _methodName = nullptr;
	::java::util::List* _templates = nullptr;
	::java::util::List* _childNodeGroup = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::TestSeq* _childNodeTestSeq = nullptr;
	::java::util::List* _attribNodeGroup = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::TestSeq* _attribNodeTestSeq = nullptr;
	::java::util::List* _idxGroup = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::TestSeq* _idxTestSeq = nullptr;
	$Array<::java::util::List>* _patternGroups = nullptr;
	$Array<::com::sun::org::apache::xalan::internal::xsltc::compiler::TestSeq>* _testSeq = nullptr;
	::java::util::Map* _neededTemplates = nullptr;
	::java::util::Map* _namedTemplates = nullptr;
	::java::util::Map* _templateIHs = nullptr;
	::java::util::Map* _templateILs = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern* _rootPattern = nullptr;
	::java::util::Map* _importLevels = nullptr;
	::java::util::Map* _keys = nullptr;
	int32_t _currentIndex = 0;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Mode_h_