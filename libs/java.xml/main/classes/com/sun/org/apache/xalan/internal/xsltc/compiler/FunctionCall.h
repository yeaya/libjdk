#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_FunctionCall_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_FunctionCall_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Expression

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>

#pragma push_macro("EMPTY_ARG_LIST")
#undef EMPTY_ARG_LIST
#pragma push_macro("EXSLT_COMMON")
#undef EXSLT_COMMON
#pragma push_macro("EXSLT_DATETIME")
#undef EXSLT_DATETIME
#pragma push_macro("EXSLT_MATH")
#undef EXSLT_MATH
#pragma push_macro("EXSLT_SETS")
#undef EXSLT_SETS
#pragma push_macro("EXSLT_STRINGS")
#undef EXSLT_STRINGS
#pragma push_macro("EXTENSIONFUNCTION")
#undef EXTENSIONFUNCTION
#pragma push_macro("EXTENSIONNAMESPACE")
#undef EXTENSIONNAMESPACE
#pragma push_macro("EXT_XALAN")
#undef EXT_XALAN
#pragma push_macro("EXT_XSLTC")
#undef EXT_XSLTC
#pragma push_macro("JAVA2INTERNAL")
#undef JAVA2INTERNAL
#pragma push_macro("JAVA_EXT_XALAN")
#undef JAVA_EXT_XALAN
#pragma push_macro("JAVA_EXT_XALAN_OLD")
#undef JAVA_EXT_XALAN_OLD
#pragma push_macro("JAVA_EXT_XSLTC")
#undef JAVA_EXT_XSLTC
#pragma push_macro("NAMESPACE_FORMAT_CLASS")
#undef NAMESPACE_FORMAT_CLASS
#pragma push_macro("NAMESPACE_FORMAT_CLASS_OR_PACKAGE")
#undef NAMESPACE_FORMAT_CLASS_OR_PACKAGE
#pragma push_macro("NAMESPACE_FORMAT_JAVA")
#undef NAMESPACE_FORMAT_JAVA
#pragma push_macro("NAMESPACE_FORMAT_PACKAGE")
#undef NAMESPACE_FORMAT_PACKAGE
#pragma push_macro("XALAN_CLASSPACKAGE_NAMESPACE")
#undef XALAN_CLASSPACKAGE_NAMESPACE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
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
								class QName;
								class SymbolTable;
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
									class MethodType;
									class MultiHashtable;
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
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
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

class FunctionCall : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(FunctionCall, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	FunctionCall();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* fname, ::java::util::List* arguments);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* fname);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* argument(int32_t i);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* argument();
	int32_t argumentCount();
	::java::util::List* findConstructors();
	::java::util::List* findMethods();
	void generateAddReads(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $String* clazz);
	virtual $String* getClassNameFromUri($String* uri);
	$String* getMethodSignature(::java::util::List* argsType);
	virtual $String* getName();
	static $String* getSignature($Class* clazz);
	static $String* getSignature(::java::lang::reflect::Method* meth);
	static $String* getSignature(::java::lang::reflect::Constructor* cons);
	virtual bool isExtension();
	virtual bool isStandard();
	static $String* replaceDash($String* name);
	void setArgument(int32_t i, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* exp);
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translateDesynthesized(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	void translateUnallowedExtension(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	virtual ::java::util::List* typeCheckArgs(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheckConstructor(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheckExternal(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheckStandard(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _fname = nullptr;
	::java::util::List* _arguments = nullptr;
	static ::java::util::List* EMPTY_ARG_LIST;
	static $String* EXT_XSLTC;
	static $String* JAVA_EXT_XSLTC;
	static $String* EXT_XALAN;
	static $String* JAVA_EXT_XALAN;
	static $String* JAVA_EXT_XALAN_OLD;
	static $String* EXSLT_COMMON;
	static $String* EXSLT_MATH;
	static $String* EXSLT_SETS;
	static $String* EXSLT_DATETIME;
	static $String* EXSLT_STRINGS;
	static $String* XALAN_CLASSPACKAGE_NAMESPACE;
	static const int32_t NAMESPACE_FORMAT_JAVA = 0;
	static const int32_t NAMESPACE_FORMAT_CLASS = 1;
	static const int32_t NAMESPACE_FORMAT_PACKAGE = 2;
	static const int32_t NAMESPACE_FORMAT_CLASS_OR_PACKAGE = 3;
	int32_t _namespace_format = 0;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _thisArgument = nullptr;
	$String* _className = nullptr;
	$Class* _clazz = nullptr;
	::java::lang::reflect::Method* _chosenMethod = nullptr;
	::java::lang::reflect::Constructor* _chosenConstructor = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType* _chosenMethodType = nullptr;
	bool unresolvedExternal = false;
	bool _isExtConstructor = false;
	bool _isStatic = false;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MultiHashtable* _internal2Java;
	static ::java::util::Map* JAVA2INTERNAL;
	static ::java::util::Map* EXTENSIONNAMESPACE;
	static ::java::util::Map* EXTENSIONFUNCTION;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_ARG_LIST")
#pragma pop_macro("EXSLT_COMMON")
#pragma pop_macro("EXSLT_DATETIME")
#pragma pop_macro("EXSLT_MATH")
#pragma pop_macro("EXSLT_SETS")
#pragma pop_macro("EXSLT_STRINGS")
#pragma pop_macro("EXTENSIONFUNCTION")
#pragma pop_macro("EXTENSIONNAMESPACE")
#pragma pop_macro("EXT_XALAN")
#pragma pop_macro("EXT_XSLTC")
#pragma pop_macro("JAVA2INTERNAL")
#pragma pop_macro("JAVA_EXT_XALAN")
#pragma pop_macro("JAVA_EXT_XALAN_OLD")
#pragma pop_macro("JAVA_EXT_XSLTC")
#pragma pop_macro("NAMESPACE_FORMAT_CLASS")
#pragma pop_macro("NAMESPACE_FORMAT_CLASS_OR_PACKAGE")
#pragma pop_macro("NAMESPACE_FORMAT_JAVA")
#pragma pop_macro("NAMESPACE_FORMAT_PACKAGE")
#pragma pop_macro("XALAN_CLASSPACKAGE_NAMESPACE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_FunctionCall_h_