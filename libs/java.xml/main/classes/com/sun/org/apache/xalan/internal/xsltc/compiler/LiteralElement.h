#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_LiteralElement_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_LiteralElement_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.LiteralElement
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Parser;
								class QName;
								class SymbolTable;
								class SyntaxTreeNode;
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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class ElemDesc;
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
		class Map$Entry;
		class Set;
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

class LiteralElement : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction {
	$class(LiteralElement, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction)
public:
	LiteralElement();
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction::addAttribute;
	void init$();
	$String* accessedNamespace($String* prefix);
	void addAttribute(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* attribute);
	bool allAttributesUnique();
	bool canProduceAttributeNodes(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node, bool ignoreXslAttribute);
	bool checkAttributesUnique();
	virtual bool contextDependent() override;
	virtual void display(int32_t indent) override;
	::com::sun::org::apache::xml::internal::serializer::ElemDesc* getElemDesc();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getName();
	::java::util::Set* getNamespaceScope(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node);
	bool isHTMLOutput();
	static void lambda$getNamespaceScope$0(::java::util::Map* all, ::java::util::Map$Entry* entry);
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	void registerNamespace($String* prefix, $String* uri, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable, bool declared);
	void setFirstAttribute(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* attribute);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	$String* translateQName(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* qname, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	$String* _name = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralElement* _literalElemParent = nullptr;
	::java::util::List* _attributeElements = nullptr;
	::java::util::Map* _accessedPrefixes = nullptr;
	bool _allAttributesUnique = false;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_LiteralElement_h_