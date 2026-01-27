#ifndef _com_sun_org_apache_xpath_internal_axes_UnionPathIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_UnionPathIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.UnionPathIterator
//$ extends com.sun.org.apache.xpath.internal.axes.LocPathIterator

#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <java/lang/Array.h>

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
				namespace xpath {
					namespace internal {
						class Expression;
						class ExpressionOwner;
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
						namespace compiler {
							class Compiler;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
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
						namespace axes {

class UnionPathIterator : public ::com::sun::org::apache::xpath::internal::axes::LocPathIterator {
	$class(UnionPathIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::LocPathIterator)
public:
	UnionPathIterator();
	using ::com::sun::org::apache::xpath::internal::axes::LocPathIterator::execute;
	void init$();
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos);
	virtual void addIterator(::com::sun::org::apache::xml::internal::dtm::DTMIterator* expr);
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual $Object* clone() override;
	virtual ::com::sun::org::apache::xpath::internal::axes::LocPathIterator* createDTMIterator(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos);
	static ::com::sun::org::apache::xpath::internal::axes::LocPathIterator* createUnionIterator(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos);
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void detach() override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual int32_t getAnalysisBits() override;
	virtual int32_t getAxis() override;
	virtual void loadLocationPaths(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t count);
	virtual int32_t nextNode() override;
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void setRoot(int32_t context, Object$* environment) override;
	static const int64_t serialVersionUID = (int64_t)0xC9BBA3FC6F7975A3;
	$Array<::com::sun::org::apache::xpath::internal::axes::LocPathIterator>* m_exprs = nullptr;
	$Array<::com::sun::org::apache::xml::internal::dtm::DTMIterator>* m_iterators = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_UnionPathIterator_h_