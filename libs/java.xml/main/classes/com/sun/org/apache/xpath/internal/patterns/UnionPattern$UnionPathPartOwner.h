#ifndef _com_sun_org_apache_xpath_internal_patterns_UnionPattern$UnionPathPartOwner_h_
#define _com_sun_org_apache_xpath_internal_patterns_UnionPattern$UnionPathPartOwner_h_
//$ class com.sun.org.apache.xpath.internal.patterns.UnionPattern$UnionPathPartOwner
//$ extends com.sun.org.apache.xpath.internal.ExpressionOwner

#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class Expression;
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
						namespace patterns {
							class UnionPattern;
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
						namespace patterns {

class UnionPattern$UnionPathPartOwner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(UnionPattern$UnionPathPartOwner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	UnionPattern$UnionPathPartOwner();
	void init$(::com::sun::org::apache::xpath::internal::patterns::UnionPattern* this$0, int32_t index);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::patterns::UnionPattern* this$0 = nullptr;
	int32_t m_index = 0;
};

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_patterns_UnionPattern$UnionPathPartOwner_h_