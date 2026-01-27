#ifndef _com_sun_org_apache_xpath_internal_objects_XObject_h_
#define _com_sun_org_apache_xpath_internal_objects_XObject_h_
//$ class com.sun.org.apache.xpath.internal.objects.XObject
//$ extends com.sun.org.apache.xpath.internal.Expression
//$ implements java.lang.Cloneable

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("CLASS_BOOLEAN")
#undef CLASS_BOOLEAN
#pragma push_macro("CLASS_NODESET")
#undef CLASS_NODESET
#pragma push_macro("CLASS_NULL")
#undef CLASS_NULL
#pragma push_macro("CLASS_NUMBER")
#undef CLASS_NUMBER
#pragma push_macro("CLASS_RTREEFRAG")
#undef CLASS_RTREEFRAG
#pragma push_macro("CLASS_STRING")
#undef CLASS_STRING
#pragma push_macro("CLASS_UNKNOWN")
#undef CLASS_UNKNOWN
#pragma push_macro("CLASS_UNRESOLVEDVARIABLE")
#undef CLASS_UNRESOLVEDVARIABLE

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
						class ExpressionOwner;
						class NodeSetDTM;
						class XPathContext;
						class XPathVisitor;
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
namespace org {
	namespace w3c {
		namespace dom {
			class DocumentFragment;
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

class $export XObject : public ::com::sun::org::apache::xpath::internal::Expression, public ::java::lang::Cloneable {
	$class(XObject, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::Expression, ::java::lang::Cloneable)
public:
	XObject();
	using ::com::sun::org::apache::xpath::internal::Expression::execute;
	using ::com::sun::org::apache::xpath::internal::Expression::bool$;
	using ::com::sun::org::apache::xpath::internal::Expression::error;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(Object$* obj);
	virtual void allowDetachToRelease(bool allowRelease);
	virtual void appendToFsb(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* fsb);
	virtual bool bool$();
	virtual bool boolWithSideEffects();
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual $Object* castToType(int32_t t, ::com::sun::org::apache::xpath::internal::XPathContext* support);
	static ::com::sun::org::apache::xpath::internal::objects::XObject* create(Object$* val);
	static ::com::sun::org::apache::xpath::internal::objects::XObject* create(Object$* val, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void destruct();
	virtual void detach();
	virtual void dispatchCharactersEvents(::org::xml::sax::ContentHandler* ch);
	virtual bool equals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2);
	virtual void error($String* msg);
	virtual void error($String* msg, $ObjectArray* args);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getFresh();
	virtual int32_t getType();
	virtual $String* getTypeString();
	virtual bool greaterThan(::com::sun::org::apache::xpath::internal::objects::XObject* obj2);
	virtual bool greaterThanOrEqual(::com::sun::org::apache::xpath::internal::objects::XObject* obj2);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* iter();
	virtual bool lessThan(::com::sun::org::apache::xpath::internal::objects::XObject* obj2);
	virtual bool lessThanOrEqual(::com::sun::org::apache::xpath::internal::objects::XObject* obj2);
	virtual ::com::sun::org::apache::xpath::internal::NodeSetDTM* mutableNodeset();
	virtual ::org::w3c::dom::NodeList* nodelist();
	virtual ::org::w3c::dom::traversal::NodeIterator* nodeset();
	virtual bool notEquals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2);
	using ::com::sun::org::apache::xpath::internal::Expression::num;
	virtual double num();
	virtual double numWithSideEffects();
	virtual $Object* object();
	virtual void reset();
	virtual int32_t rtf(::com::sun::org::apache::xpath::internal::XPathContext* support);
	virtual int32_t rtf();
	virtual ::org::w3c::dom::DocumentFragment* rtree(::com::sun::org::apache::xpath::internal::XPathContext* support);
	virtual ::org::w3c::dom::DocumentFragment* rtree();
	virtual void setObject(Object$* obj);
	virtual $String* str();
	virtual $String* toString() override;
	using ::com::sun::org::apache::xpath::internal::Expression::xstr;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* xstr();
	static const int64_t serialVersionUID = (int64_t)0xF4981209BB7BB619;
	$Object* m_obj = nullptr;
	static const int32_t CLASS_NULL = (-1);
	static const int32_t CLASS_UNKNOWN = 0;
	static const int32_t CLASS_BOOLEAN = 1;
	static const int32_t CLASS_NUMBER = 2;
	static const int32_t CLASS_STRING = 3;
	static const int32_t CLASS_NODESET = 4;
	static const int32_t CLASS_RTREEFRAG = 5;
	static const int32_t CLASS_UNRESOLVEDVARIABLE = 600;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CLASS_BOOLEAN")
#pragma pop_macro("CLASS_NODESET")
#pragma pop_macro("CLASS_NULL")
#pragma pop_macro("CLASS_NUMBER")
#pragma pop_macro("CLASS_RTREEFRAG")
#pragma pop_macro("CLASS_STRING")
#pragma pop_macro("CLASS_UNKNOWN")
#pragma pop_macro("CLASS_UNRESOLVEDVARIABLE")

#endif // _com_sun_org_apache_xpath_internal_objects_XObject_h_