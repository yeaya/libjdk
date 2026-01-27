#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_NodeIteratorBase_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_NodeIteratorBase_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.NodeIteratorBase
//$ extends com.sun.org.apache.xalan.internal.xsltc.NodeIterator

#include <com/sun/org/apache/xalan/internal/xsltc/NodeIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class NodeIteratorBase : public ::com::sun::org::apache::xalan::internal::xsltc::NodeIterator {
	$class(NodeIteratorBase, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::NodeIterator)
public:
	NodeIteratorBase();
	void init$();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::NodeIterator* cloneIterator() override;
	virtual int32_t getLast() override;
	virtual int32_t getPosition() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::NodeIterator* includeSelf();
	virtual bool isReverse() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::NodeIterator* reset() override;
	::com::sun::org::apache::xalan::internal::xsltc::NodeIterator* resetPosition();
	int32_t returnNode(int32_t node);
	virtual void setRestartable(bool isRestartable) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::NodeIterator* setStartNode(int32_t node) override {return nullptr;}
	int32_t _last = 0;
	int32_t _position = 0;
	int32_t _markedNode = 0;
	int32_t _startNode = 0;
	bool _includeSelf = false;
	bool _isRestartable = false;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_NodeIteratorBase_h_