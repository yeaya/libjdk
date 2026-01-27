#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NodeSortRecordFactGenerator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NodeSortRecordFactGenerator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.NodeSortRecordFactGenerator
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.ClassGenerator

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Stylesheet;
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

class NodeSortRecordFactGenerator : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator {
	$class(NodeSortRecordFactGenerator, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator)
public:
	NodeSortRecordFactGenerator();
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator::addMethod;
	void init$($String* className, $String* superClassName, $String* fileName, int32_t accessFlags, $StringArray* interfaces, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* stylesheet);
	virtual bool isExternal() override;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NodeSortRecordFactGenerator_h_