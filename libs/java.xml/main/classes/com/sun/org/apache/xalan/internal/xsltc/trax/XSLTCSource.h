#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_XSLTCSource_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_XSLTCSource_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.XSLTCSource
//$ extends javax.xml.transform.Source

#include <javax/xml/transform/Source.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
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
							namespace dom {
								class XSLTCDTMManager;
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
							namespace runtime {
								class AbstractTranslet;
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
		class ThreadLocal;
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

class XSLTCSource : public ::javax::xml::transform::Source {
	$class(XSLTCSource, $NO_CLASS_INIT, ::javax::xml::transform::Source)
public:
	XSLTCSource();
	void init$($String* systemId);
	void init$(::javax::xml::transform::Source* source);
	::com::sun::org::apache::xalan::internal::xsltc::DOM* getDOM(::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* dtmManager, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet);
	virtual $String* getSystemId() override;
	virtual void setSystemId($String* systemId) override;
	$String* _systemId = nullptr;
	::javax::xml::transform::Source* _source = nullptr;
	::java::lang::ThreadLocal* _dom = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_XSLTCSource_h_