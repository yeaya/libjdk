#ifndef _com_sun_org_apache_xpath_internal_operations_Variable_h_
#define _com_sun_org_apache_xpath_internal_operations_Variable_h_
//$ class com.sun.org.apache.xpath.internal.operations.Variable
//$ extends com.sun.org.apache.xpath.internal.Expression
//$ implements com.sun.org.apache.xpath.internal.axes.PathComponent

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/axes/PathComponent.h>

#pragma push_macro("PSUEDOVARNAMESPACE")
#undef PSUEDOVARNAMESPACE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class QName;
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
						class XPathContext;
						class XPathVisitor;
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
						namespace operations {

class Variable : public ::com::sun::org::apache::xpath::internal::Expression, public ::com::sun::org::apache::xpath::internal::axes::PathComponent {
	$class(Variable, 0, ::com::sun::org::apache::xpath::internal::Expression, ::com::sun::org::apache::xpath::internal::axes::PathComponent)
public:
	Variable();
	using ::com::sun::org::apache::xpath::internal::Expression::execute;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, bool destructiveOK) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual int32_t getAnalysisBits() override;
	virtual bool getGlobal();
	virtual int32_t getIndex();
	virtual ::com::sun::org::apache::xml::internal::utils::QName* getQName();
	virtual bool isPsuedoVarRef();
	virtual bool isStableNumber() override;
	virtual void setIndex(int32_t index);
	virtual void setIsGlobal(bool isGlobal);
	virtual void setQName(::com::sun::org::apache::xml::internal::utils::QName* qname);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xC3D712DD12BE0767;
	bool m_fixUpWasCalled = false;
	::com::sun::org::apache::xml::internal::utils::QName* m_qname = nullptr;
	int32_t m_index = 0;
	bool m_isGlobal = false;
	static $String* PSUEDOVARNAMESPACE;
};

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("PSUEDOVARNAMESPACE")

#endif // _com_sun_org_apache_xpath_internal_operations_Variable_h_