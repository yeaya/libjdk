#ifndef _com_sun_org_apache_xpath_internal_XPathVisitor_h_
#define _com_sun_org_apache_xpath_internal_XPathVisitor_h_
//$ class com.sun.org.apache.xpath.internal.XPathVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class Expression;
						class ExpressionOwner;
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
						namespace axes {
							class LocPathIterator;
							class UnionPathIterator;
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
						namespace functions {
							class Function;
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
						namespace objects {
							class XNumber;
							class XString;
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
						namespace operations {
							class Operation;
							class UnaryOperation;
							class Variable;
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
							class NodeTest;
							class StepPattern;
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

class $import XPathVisitor : public ::java::lang::Object {
	$class(XPathVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XPathVisitor();
	void init$();
	virtual bool visitBinaryOperation(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::operations::Operation* op);
	virtual bool visitFunction(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::functions::Function* func);
	virtual bool visitLocationPath(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::axes::LocPathIterator* path);
	virtual bool visitMatchPattern(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::patterns::StepPattern* pattern);
	virtual bool visitNumberLiteral(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::objects::XNumber* num);
	virtual bool visitPredicate(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::Expression* pred);
	virtual bool visitStep(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::patterns::NodeTest* step);
	virtual bool visitStringLiteral(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::objects::XString* str);
	virtual bool visitUnaryOperation(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::operations::UnaryOperation* op);
	virtual bool visitUnionPath(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::axes::UnionPathIterator* path);
	virtual bool visitUnionPattern(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::patterns::UnionPattern* pattern);
	virtual bool visitVariableRef(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::operations::Variable* var);
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_XPathVisitor_h_