#ifndef _com_sun_org_apache_xpath_internal_objects_XNodeSet_h_
#define _com_sun_org_apache_xpath_internal_objects_XNodeSet_h_
//$ class com.sun.org.apache.xpath.internal.objects.XNodeSet
//$ extends com.sun.org.apache.xpath.internal.axes.NodeSequence

#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>

#pragma push_macro("S_EQ")
#undef S_EQ
#pragma push_macro("S_GT")
#undef S_GT
#pragma push_macro("S_GTE")
#undef S_GTE
#pragma push_macro("S_LT")
#undef S_LT
#pragma push_macro("S_LTE")
#undef S_LTE
#pragma push_macro("S_NEQ")
#undef S_NEQ

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMIterator;
							class DTMManager;
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
						class NodeSetDTM;
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
							class Comparator;
							class EqualComparator;
							class GreaterThanComparator;
							class GreaterThanOrEqualComparator;
							class LessThanComparator;
							class LessThanOrEqualComparator;
							class NotEqualComparator;
							class XObject;
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
namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {
				class NodeIterator;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
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

class $export XNodeSet : public ::com::sun::org::apache::xpath::internal::axes::NodeSequence {
	$class(XNodeSet, 0, ::com::sun::org::apache::xpath::internal::axes::NodeSequence)
public:
	XNodeSet();
	using ::com::sun::org::apache::xpath::internal::axes::NodeSequence::execute;
	using ::com::sun::org::apache::xpath::internal::axes::NodeSequence::error;
	using ::com::sun::org::apache::xpath::internal::axes::NodeSequence::bool$;
	using ::com::sun::org::apache::xpath::internal::axes::NodeSequence::equals;
	void init$();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMIterator* val);
	void init$(::com::sun::org::apache::xpath::internal::objects::XNodeSet* val);
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* dtmMgr);
	void init$(int32_t n, ::com::sun::org::apache::xml::internal::dtm::DTMManager* dtmMgr);
	virtual void appendToFsb(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* fsb) override;
	virtual bool bool$() override;
	virtual bool boolWithSideEffects() override;
	virtual bool compare(::com::sun::org::apache::xpath::internal::objects::XObject* obj2, ::com::sun::org::apache::xpath::internal::objects::Comparator* comparator);
	virtual void dispatchCharactersEvents(::org::xml::sax::ContentHandler* ch) override;
	virtual bool equals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getFresh() override;
	virtual double getNumberFromNode(int32_t n);
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* getStringFromNode(int32_t n);
	virtual int32_t getType() override;
	virtual $String* getTypeString() override;
	virtual bool greaterThan(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual bool greaterThanOrEqual(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* iter() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* iterRaw();
	virtual bool lessThan(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual bool lessThanOrEqual(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual ::com::sun::org::apache::xpath::internal::NodeSetDTM* mutableNodeset() override;
	virtual ::org::w3c::dom::NodeList* nodelist() override;
	virtual ::org::w3c::dom::traversal::NodeIterator* nodeset() override;
	virtual bool notEquals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	using ::com::sun::org::apache::xpath::internal::axes::NodeSequence::num;
	virtual double num() override;
	virtual double numWithSideEffects() override;
	virtual $Object* object() override;
	virtual void release(::com::sun::org::apache::xml::internal::dtm::DTMIterator* iter);
	virtual $String* str() override;
	using ::com::sun::org::apache::xpath::internal::axes::NodeSequence::xstr;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* xstr() override;
	static const int64_t serialVersionUID = (int64_t)0x1A9717D4870BD173;
	static ::com::sun::org::apache::xpath::internal::objects::LessThanComparator* S_LT;
	static ::com::sun::org::apache::xpath::internal::objects::LessThanOrEqualComparator* S_LTE;
	static ::com::sun::org::apache::xpath::internal::objects::GreaterThanComparator* S_GT;
	static ::com::sun::org::apache::xpath::internal::objects::GreaterThanOrEqualComparator* S_GTE;
	static ::com::sun::org::apache::xpath::internal::objects::EqualComparator* S_EQ;
	static ::com::sun::org::apache::xpath::internal::objects::NotEqualComparator* S_NEQ;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("S_EQ")
#pragma pop_macro("S_GT")
#pragma pop_macro("S_GTE")
#pragma pop_macro("S_LT")
#pragma pop_macro("S_LTE")
#pragma pop_macro("S_NEQ")

#endif // _com_sun_org_apache_xpath_internal_objects_XNodeSet_h_