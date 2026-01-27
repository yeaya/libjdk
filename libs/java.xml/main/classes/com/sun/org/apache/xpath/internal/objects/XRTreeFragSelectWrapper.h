#ifndef _com_sun_org_apache_xpath_internal_objects_XRTreeFragSelectWrapper_h_
#define _com_sun_org_apache_xpath_internal_objects_XRTreeFragSelectWrapper_h_
//$ class com.sun.org.apache.xpath.internal.objects.XRTreeFragSelectWrapper
//$ extends com.sun.org.apache.xpath.internal.objects.XRTreeFrag

#include <com/sun/org/apache/xpath/internal/objects/XRTreeFrag.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMIterator;
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
						namespace utils {
							class XMLString;
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
				namespace xpath {
					namespace internal {
						class Expression;
						class XPathContext;
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
				namespace xpath {
					namespace internal {
						namespace objects {
							class XObject;
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
				namespace xpath {
					namespace internal {
						namespace objects {

class $export XRTreeFragSelectWrapper : public ::com::sun::org::apache::xpath::internal::objects::XRTreeFrag {
	$class(XRTreeFragSelectWrapper, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::objects::XRTreeFrag)
public:
	XRTreeFragSelectWrapper();
	using ::com::sun::org::apache::xpath::internal::objects::XRTreeFrag::bool$;
	using ::com::sun::org::apache::xpath::internal::objects::XRTreeFrag::equals;
	using ::com::sun::org::apache::xpath::internal::objects::XRTreeFrag::error;
	using ::com::sun::org::apache::xpath::internal::objects::XRTreeFrag::execute;
	void init$(::com::sun::org::apache::xpath::internal::Expression* expr);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* asNodeIterator() override;
	virtual void detach() override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual int32_t getType() override;
	using ::com::sun::org::apache::xpath::internal::objects::XRTreeFrag::num;
	virtual double num() override;
	using ::com::sun::org::apache::xpath::internal::objects::XRTreeFrag::rtf;
	virtual int32_t rtf() override;
	virtual $String* str() override;
	using ::com::sun::org::apache::xpath::internal::objects::XRTreeFrag::xstr;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* xstr() override;
	static const int64_t serialVersionUID = (int64_t)0xA56E5BC5A4471CBD;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_XRTreeFragSelectWrapper_h_