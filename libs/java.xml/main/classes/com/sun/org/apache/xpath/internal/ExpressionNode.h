#ifndef _com_sun_org_apache_xpath_internal_ExpressionNode_h_
#define _com_sun_org_apache_xpath_internal_ExpressionNode_h_
//$ interface com.sun.org.apache.xpath.internal.ExpressionNode
//$ extends javax.xml.transform.SourceLocator

#include <javax/xml/transform/SourceLocator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $export ExpressionNode : public ::javax::xml::transform::SourceLocator {
	$interface(ExpressionNode, $NO_CLASS_INIT, ::javax::xml::transform::SourceLocator)
public:
	virtual void exprAddChild(::com::sun::org::apache::xpath::internal::ExpressionNode* n, int32_t i) {}
	virtual ::com::sun::org::apache::xpath::internal::ExpressionNode* exprGetChild(int32_t i) {return nullptr;}
	virtual int32_t exprGetNumChildren() {return 0;}
	virtual ::com::sun::org::apache::xpath::internal::ExpressionNode* exprGetParent() {return nullptr;}
	virtual void exprSetParent(::com::sun::org::apache::xpath::internal::ExpressionNode* n) {}
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_ExpressionNode_h_