#ifndef _com_sun_org_apache_xpath_internal_objects_XRTreeFrag_h_
#define _com_sun_org_apache_xpath_internal_objects_XRTreeFrag_h_
//$ class com.sun.org.apache.xpath.internal.objects.XRTreeFrag
//$ extends com.sun.org.apache.xpath.internal.objects.XObject

#include <com/sun/org/apache/xpath/internal/objects/XObject.h>

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
							class FastStringBuffer;
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
						class ExpressionNode;
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
							class DTMXRTreeFrag;
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
			class NodeList;
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

class $import XRTreeFrag : public ::com::sun::org::apache::xpath::internal::objects::XObject {
	$class(XRTreeFrag, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::objects::XObject)
public:
	XRTreeFrag();
	using ::com::sun::org::apache::xpath::internal::objects::XObject::execute;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::error;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::bool$;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::equals;
	void init$(int32_t root, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::com::sun::org::apache::xpath::internal::ExpressionNode* parent);
	void init$(int32_t root, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	void init$(::com::sun::org::apache::xpath::internal::Expression* expr);
	virtual void allowDetachToRelease(bool allowRelease) override;
	virtual void appendToFsb(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* fsb) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* asNodeIterator();
	virtual bool bool$() override;
	virtual ::org::w3c::dom::NodeList* convertToNodeset();
	virtual void detach() override;
	virtual bool equals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual int32_t getType() override;
	virtual $String* getTypeString() override;
	void initDTM(int32_t root, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	using ::com::sun::org::apache::xpath::internal::objects::XObject::num;
	virtual double num() override;
	virtual $Object* object() override;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::rtf;
	virtual int32_t rtf() override;
	virtual $String* str() override;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::xstr;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* xstr() override;
	static const int64_t serialVersionUID = (int64_t)0xD391CBC2DF33AFB1;
	::com::sun::org::apache::xpath::internal::objects::DTMXRTreeFrag* m_DTMXRTreeFrag = nullptr;
	int32_t m_dtmRoot = 0;
	bool m_allowRelease = false;
	::com::sun::org::apache::xml::internal::utils::XMLString* m_xmlStr = nullptr;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_XRTreeFrag_h_