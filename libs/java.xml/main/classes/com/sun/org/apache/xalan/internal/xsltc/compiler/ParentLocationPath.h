#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_ParentLocationPath_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_ParentLocationPath_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.ParentLocationPath
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.RelativeLocationPath

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Expression;
								class Parser;
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

class ParentLocationPath : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath {
	$class(ParentLocationPath, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath)
public:
	ParentLocationPath();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath* path, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* step);
	bool checkAxisMismatch();
	void enableNodeOrdering();
	virtual int32_t getAxis() override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath* getPath();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* getStep();
	virtual void setAxis(int32_t axis) override;
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	void translateStep(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _step = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath* _path = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* stype = nullptr;
	bool _orderNodes = false;
	bool _axisMismatch = false;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_ParentLocationPath_h_