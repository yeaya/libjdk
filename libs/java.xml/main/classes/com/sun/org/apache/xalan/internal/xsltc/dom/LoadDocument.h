#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_LoadDocument_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_LoadDocument_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.LoadDocument
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NAMESPACE_FEATURE")
#undef NAMESPACE_FEATURE

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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
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

class LoadDocument : public ::java::lang::Object {
	$class(LoadDocument, 0, ::java::lang::Object)
public:
	LoadDocument();
	void init$();
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* document($String* uri, $String* base, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* document($String* uri, $String* base, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom, bool cacheDOM);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* document(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* arg1, $String* baseURI, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* document(::com::sun::org::apache::xalan::internal::xsltc::DOM* newdom, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* documentF(Object$* arg1, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* arg2, $String* xslURI, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* documentF(Object$* arg, $String* xslURI, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static $String* NAMESPACE_FEATURE;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NAMESPACE_FEATURE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_LoadDocument_h_