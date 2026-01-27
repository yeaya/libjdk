#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSLoaderImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSLoaderImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSLoaderImpl
//$ extends com.sun.org.apache.xerces.internal.xs.XSLoader
//$ implements org.w3c.dom.DOMConfiguration

#include <com/sun/org/apache/xerces/internal/xs/XSLoader.h>
#include <org/w3c/dom/DOMConfiguration.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class XMLSchemaLoader;
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
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {
									class XSGrammarPool;
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
				namespace xerces {
					namespace internal {
						namespace xs {
							class LSInputList;
							class StringList;
							class XSModel;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMStringList;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

class XSLoaderImpl : public ::com::sun::org::apache::xerces::internal::xs::XSLoader, public ::org::w3c::dom::DOMConfiguration {
	$class(XSLoaderImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSLoader, ::org::w3c::dom::DOMConfiguration)
public:
	XSLoaderImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool canSetParameter($String* name, Object$* value) override;
	virtual ::org::w3c::dom::DOMConfiguration* getConfig() override;
	virtual $Object* getParameter($String* name) override;
	virtual ::org::w3c::dom::DOMStringList* getParameterNames() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* load(::org::w3c::dom::ls::LSInput* is) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* loadInputList(::com::sun::org::apache::xerces::internal::xs::LSInputList* is) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* loadURI($String* uri) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* loadURIList(::com::sun::org::apache::xerces::internal::xs::StringList* uriList) override;
	virtual void setParameter($String* name, Object$* value) override;
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSGrammarPool* fGrammarPool = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader* fSchemaLoader = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSLoaderImpl_h_