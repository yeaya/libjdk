#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerFactoryImpl$1_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerFactoryImpl$1_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl$1
//$ extends java.io.FilenameFilter

#include <java/io/FilenameFilter.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {
								class TransformerFactoryImpl;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class TransformerFactoryImpl$1 : public ::java::io::FilenameFilter {
	$class(TransformerFactoryImpl$1, $NO_CLASS_INIT, ::java::io::FilenameFilter)
public:
	TransformerFactoryImpl$1();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* this$0, $String* val$transletAuxPrefix);
	virtual bool accept(::java::io::File* dir, $String* name) override;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* this$0 = nullptr;
	$String* val$transletAuxPrefix = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerFactoryImpl$1_h_